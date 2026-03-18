/*
 * XREFs of ACPIWakeRemoveDevicesAndUpdate @ 0x1C0007374
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0006B50 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     sub_1C00327AA @ 0x1C00327AA (sub_1C00327AA.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0037860 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C0038730 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     OSNotifyDeviceWake @ 0x1C003E0AC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C003E160 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C003E258 (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWakeEmptyRequestQueue @ 0x1C0042228 (ACPIWakeEmptyRequestQueue.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C0006E8C (ACPIWriteGpeStatusRegister.c)
 *     ACPIWriteGpeEnableRegister @ 0x1C0007624 (ACPIWriteGpeEnableRegister.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C000769C (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0008154 (ACPIGpeIndexToGpeRegister.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

void __fastcall ACPIWakeRemoveDevicesAndUpdate(__int64 a1, __int64 a2)
{
  bool v4; // bp
  unsigned __int16 *v5; // rcx
  unsigned int v6; // r9d
  _BYTE *v7; // r10
  _BYTE *v8; // r11
  __int64 v9; // r8
  __int64 *v10; // rsi
  __int64 *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rbx
  int v16; // edx
  int v17; // edi
  unsigned __int8 v18; // cl
  unsigned int i; // ebx
  _BYTE *v20; // rdx
  _BYTE *v21; // rcx
  __int64 v22; // rcx
  __int64 **v23; // rax
  __int64 **v24; // rax

  v4 = *((_BYTE *)AcpiInformation + 133) == 0;
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  if ( v4 )
  {
    v5 = (unsigned __int16 *)AcpiInformation;
    v6 = 0;
    if ( *((_WORD *)AcpiInformation + 51) )
    {
      v7 = GpeSpecialHandler;
      v8 = GpeWakeHandler;
      do
      {
        v9 = v6++;
        *((_BYTE *)GpeCurEnable + v9) &= v7[v9] | (unsigned __int8)~(*((_BYTE *)GpeWakeEnable + v9) | v8[v9]);
        v5 = (unsigned __int16 *)AcpiInformation;
      }
      while ( v6 < *((unsigned __int16 *)AcpiInformation + 51) );
    }
    memset(GpeWakeEnable, 0, v5[51]);
  }
  v10 = (__int64 *)AcpiPowerWaitWakeList;
  while ( v10 != &AcpiPowerWaitWakeList )
  {
    v11 = v10;
    v10 = (__int64 *)*v10;
    v12 = v11[5];
    if ( v12 == a1 )
    {
      _InterlockedExchange64((volatile __int64 *)(v11[25] + 104), 0LL);
      if ( !*(_BYTE *)(v11[25] + 68) )
      {
        v22 = *v11;
        v23 = (__int64 **)v11[1];
        if ( *(__int64 **)(*v11 + 8) != v11 || *v23 != v11 )
          __fastfail(3u);
        *v23 = (__int64 *)v22;
        *(_QWORD *)(v22 + 8) = v23;
        v24 = *(__int64 ***)(a2 + 8);
        *v11 = a2;
        v11[1] = (__int64)v24;
        if ( *v24 != (__int64 *)a2 )
          __fastfail(3u);
        *v24 = v11;
        *(_QWORD *)(a2 + 8) = v11;
        *((_DWORD *)v11 + 14) &= ~0x40u;
        *((_DWORD *)v11 + 27) |= 2u;
      }
    }
    else if ( v4
           && (*(_QWORD *)(v12 + 904) & 0x500000000LL) == 0
           && *((_DWORD *)v11 + 26) >= AcpiMostRecentSleepState
           && !*(_BYTE *)((unsigned int)ACPIGpeIndexToByteIndex(*(unsigned int *)(v12 + 448)) + GpeMap) )
    {
      v13 = (unsigned int)ACPIGpeIndexToGpeRegister(*(unsigned int *)(v12 + 448));
      v14 = *(unsigned __int8 *)(v12 + 448);
      v15 = (unsigned int)v13;
      v16 = v14 % 8LL;
      v17 = 1 << v16;
      v18 = *((_BYTE *)GpeWakeEnable + v13);
      if ( (v18 & (unsigned __int8)(1 << v16)) == 0 )
      {
        *((_BYTE *)GpeWakeEnable + v13) = v17 | v18;
        ACPIWriteGpeStatusRegister(v13, 1 << v16);
        if ( ((unsigned __int8)v17 & *((_BYTE *)GpeEnable + v15)) != 0 )
        {
          if ( ((unsigned __int8)v17 & *((_BYTE *)GpeSpecialHandler + v15)) == 0 )
            *((_BYTE *)GpeWakeHandler + v15) |= v17;
        }
        else
        {
          v21 = GpeCurEnable;
          if ( ((unsigned __int8)v17 & *((_BYTE *)GpeCurEnable + v15)) == 0 )
          {
            *((_BYTE *)GpeIsLevel + v15) |= v17;
            v21[v15] |= v17;
          }
        }
      }
    }
  }
  if ( v4 )
  {
    for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); ACPIWriteGpeEnableRegister(i++, v20) )
    {
      v20 = (char *)GpeCurEnable + i;
      if ( AcpiPowerLeavingS0 )
        *v20 &= ~*((_BYTE *)GpeWakeEnable + i);
      else
        *v20 |= *((_BYTE *)GpeWakeEnable + i) & (unsigned __int8)~*((_BYTE *)GpePending + i);
      LOBYTE(v20) = *v20;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
