/*
 * XREFs of ACPIWakeRemoveDevicesAndUpdate @ 0x1C0006B68
 * Callers:
 *     ACPIWakeEmptyRequestQueue @ 0x1C0005924 (ACPIWakeEmptyRequestQueue.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0006190 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIRootPowerCallBack @ 0x1C002A840 (ACPIRootPowerCallBack.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0048F10 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C004A810 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     OSNotifyDeviceWake @ 0x1C00515DC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051808 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00519CC (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0006A8C (ACPIWriteGpeStatusRegister.c)
 *     ACPIWriteGpeEnableRegister @ 0x1C0006E00 (ACPIWriteGpeEnableRegister.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0006E78 (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C00201F4 (ACPIGpeIndexToGpeRegister.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

void __fastcall ACPIWakeRemoveDevicesAndUpdate(__int64 a1, __int64 a2)
{
  bool v4; // bp
  unsigned __int16 *v5; // rcx
  unsigned int i; // r10d
  __int64 v7; // r9
  __int64 *v8; // rsi
  __int64 *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // edi
  unsigned __int8 v14; // cl
  unsigned int j; // ebx
  __int64 *v16; // rcx
  __int64 **v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  const char *v20; // rdx
  const char *v21; // rcx
  _BYTE *v22; // rax

  v4 = *((_BYTE *)AcpiInformation + 133) == 0;
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  if ( v4 )
  {
    v5 = (unsigned __int16 *)AcpiInformation;
    for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); v5 = (unsigned __int16 *)AcpiInformation )
    {
      v7 = i++;
      *((_BYTE *)GpeCurEnable + v7) &= *((_BYTE *)GpeSpecialHandler + v7) | (unsigned __int8)~(*((_BYTE *)GpeWakeEnable
                                                                                               + v7) | *((_BYTE *)GpeWakeHandler + v7));
    }
    memset(GpeWakeEnable, 0, v5[51]);
  }
  v8 = (__int64 *)AcpiPowerWaitWakeList;
  v9 = &AcpiPowerWaitWakeList;
  while ( v8 != &AcpiPowerWaitWakeList )
  {
    v9 = v8;
    v8 = (__int64 *)*v8;
    v10 = v9[5];
    if ( v10 == a1 )
    {
      _InterlockedExchange64((volatile __int64 *)(v9[25] + 104), 0LL);
      if ( !*(_BYTE *)(v9[25] + 68) )
      {
        v16 = (__int64 *)*v9;
        v17 = (__int64 **)v9[1];
        if ( *(__int64 **)(*v9 + 8) != v9 || *v17 != v9 )
          __fastfail(3u);
        *v17 = v16;
        v16[1] = (__int64)v17;
        v18 = *(_QWORD **)(a2 + 8);
        if ( *v18 != a2 )
          __fastfail(3u);
        *v9 = a2;
        v9[1] = (__int64)v18;
        *v18 = v9;
        *(_QWORD *)(a2 + 8) = v9;
        *((_DWORD *)v9 + 14) &= ~0x40u;
        *((_DWORD *)v9 + 27) |= 2u;
      }
      continue;
    }
    if ( v4 && (*(_QWORD *)(v10 + 912) & 0x500000000LL) == 0 && *((_DWORD *)v9 + 26) >= AcpiMostRecentSleepState )
    {
      if ( *(_BYTE *)((unsigned int)ACPIGpeIndexToByteIndex(*(unsigned int *)(v10 + 456)) + GpeMap) )
      {
        v19 = *(_QWORD *)(v10 + 8);
        v20 = (const char *)qword_1C002C340;
        v21 = (const char *)qword_1C002C340;
        if ( (v19 & 0x200000000000LL) != 0 )
        {
          v20 = *(const char **)(v10 + 560);
          if ( (v19 & 0x400000000000LL) != 0 )
            v21 = *(const char **)(v10 + 568);
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x11u,
          0x18u,
          (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
          *(_DWORD *)(v10 + 456),
          v10,
          v20,
          v21);
        continue;
      }
      v11 = (unsigned int)ACPIGpeIndexToGpeRegister(*(unsigned int *)(v10 + 456));
      LODWORD(v9) = *(unsigned __int8 *)(v10 + 456) % 8;
      v12 = (unsigned int)v11;
      v9 = (__int64 *)(unsigned int)v9;
      v13 = 1 << (char)v9;
      v14 = *((_BYTE *)GpeWakeEnable + v11);
      if ( (v14 & (unsigned __int8)(1 << (char)v9)) == 0 )
      {
        *((_BYTE *)GpeWakeEnable + v11) = v13 | v14;
        ACPIWriteGpeStatusRegister(v11, 1 << (char)v9);
        if ( ((unsigned __int8)v13 & *((_BYTE *)GpeEnable + v12)) != 0 )
        {
          if ( ((unsigned __int8)v13 & *((_BYTE *)GpeSpecialHandler + v12)) == 0 )
          {
            v22 = GpeWakeHandler;
            goto LABEL_33;
          }
        }
        else if ( ((unsigned __int8)v13 & *((_BYTE *)GpeCurEnable + v12)) == 0 )
        {
          *((_BYTE *)GpeIsLevel + v12) |= v13;
          v22 = GpeCurEnable;
LABEL_33:
          v22[v12] |= v13;
        }
      }
    }
  }
  if ( v4 )
  {
    for ( j = 0; j < *((unsigned __int16 *)AcpiInformation + 51); ACPIWriteGpeEnableRegister(j++, v9) )
    {
      if ( AcpiPowerLeavingS0 )
      {
        v9 = (__int64 *)GpeCurEnable;
        *((_BYTE *)GpeCurEnable + j) &= ~*((_BYTE *)GpeWakeEnable + j);
      }
      else
      {
        *((_BYTE *)GpeCurEnable + j) |= *((_BYTE *)GpeWakeEnable + j) & (unsigned __int8)~*((_BYTE *)GpePending + j);
      }
      LOBYTE(v9) = *((_BYTE *)GpeCurEnable + j);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
