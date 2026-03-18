/*
 * XREFs of VidSchiCreateDeviceInternal @ 0x1C0040484
 * Callers:
 *     VidSchCreateDevice @ 0x1C0040450 (VidSchCreateDevice.c)
 *     VidSchCreateSystemDevices @ 0x1C006FC94 (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiIncrementDeviceReference @ 0x1C0001388 (VidSchiIncrementDeviceReference.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007050 (VidSchiInterlockedInsertTailList.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C000FC70 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C00135D0 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_ppqpttq @ 0x1C0022920 (Template_ppqpttq.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C00406E8 (VidSchiOpenProcessAdapterInfo.c)
 *     VidSchSetQueuedPresentLimit @ 0x1C0040880 (VidSchSetQueuedPresentLimit.c)
 *     VidSchiReadDeviceConfiguration @ 0x1C00408D0 (VidSchiReadDeviceConfiguration.c)
 *     VidSchControlVSyncDevice @ 0x1C0040980 (VidSchControlVSyncDevice.c)
 *     VidSchTerminateDevice @ 0x1C0040DE0 (VidSchTerminateDevice.c)
 */

__int64 __fastcall VidSchiCreateDeviceInternal(__int64 a1, _DWORD *a2, __int64 a3, char **a4)
{
  struct DXGPROCESS *Current; // rsi
  char *PoolWithTag; // rax
  __int64 v10; // rcx
  char *v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // edi
  __int64 v17; // r8
  __int64 v19; // rax
  ADAPTER_RENDER *v20; // rcx
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // bp
  bool v25; // si
  HANDLE CurrentProcessId; // rax
  _DXGKARG_CREATEDEVICE v27; // [rsp+50h] [rbp-38h] BYREF

  *a4 = 0LL;
  if ( (*a2 & 1) != 0 )
  {
    Current = *(struct DXGPROCESS **)(g_pVidSchSystemProcess + 8);
  }
  else
  {
    if ( !a3 )
    {
      v22 = WdLogNewEntry5_WdWarning(a1);
      WdLogEvent5_WdWarning(v22);
      return 3221225485LL;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x4E8uLL, 0x68536956u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x4E8uLL);
    *(_DWORD *)v11 = 1986348118;
    *((_QWORD *)v11 + 1) = a3;
    ExInitializeResourceLite((PERESOURCE)(v11 + 864));
    *((_QWORD *)v11 + 4) = a1;
    v12 = *(_OWORD *)a2;
    *((_DWORD *)v11 + 116) = -1;
    *((_OWORD *)v11 + 3) = v12;
    VidSchiReadDeviceConfiguration(v11);
    *((_QWORD *)v11 + 9) = v11 + 64;
    *((_QWORD *)v11 + 8) = v11 + 64;
    *((_QWORD *)v11 + 146) = v11 + 1160;
    *((_QWORD *)v11 + 145) = v11 + 1160;
    *((_QWORD *)v11 + 13) = v11 + 96;
    *((_QWORD *)v11 + 12) = v11 + 96;
    *((_QWORD *)v11 + 15) = v11 + 112;
    *((_QWORD *)v11 + 14) = v11 + 112;
    *((_QWORD *)v11 + 17) = v11 + 128;
    *((_QWORD *)v11 + 16) = v11 + 128;
    VidSchSetQueuedPresentLimit(v11, 0LL);
    memset64(v11 + 336, 1uLL, 0x10uLL);
    VidSchiIncrementDeviceReference((__int64)v11);
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1856), a1 + 240, (_QWORD *)v11 + 10, 0LL);
    if ( (*a2 & 1) != 0 )
    {
      *((_QWORD *)v11 + 5) = g_pVidSchSystemProcess;
    }
    else
    {
      v13 = *((_QWORD *)Current + 8);
      if ( v13 )
        v14 = *(_QWORD *)(v13 + 24);
      else
        v14 = 0LL;
      *((_QWORD *)v11 + 5) = v14;
    }
    v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 5) + 2616LL) + 4
                                                                 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5));
    if ( _bittest(&v15, *(_DWORD *)(a1 + 4) & 0x1F) )
    {
      v16 = -1073741790;
      goto LABEL_27;
    }
    v16 = VidSchiOpenProcessAdapterInfo(*((_QWORD *)v11 + 5), a1);
    if ( v16 >= 0 )
    {
      v11[200] = 1;
      if ( (*a2 & 1) != 0 )
      {
        memset(&v27, 0, sizeof(v27));
        v19 = *((_QWORD *)Current + 5);
        v27.hDevice = 0LL;
        v27.Flags.Value |= 1u;
        v20 = *(ADAPTER_RENDER **)(a1 + 8);
        v27.hKmdProcess = *(HANDLE *)(*(_QWORD *)(v19 + 8LL * *(unsigned int *)(a1 + 4)) + 16LL);
        v16 = ADAPTER_RENDER::DdiCreateDevice(v20, &v27);
        if ( v16 < 0 )
          goto LABEL_27;
        v21 = bTracingEnabled == 0;
        *((_QWORD *)v11 + 2) = v27.hDevice;
        if ( !v21 )
        {
          v24 = (*((_DWORD *)v11 + 12) & 4) != 0;
          v25 = (*((_DWORD *)v11 + 12) & 2) != 0;
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            Template_ppqpttq(
              *(_QWORD *)(a1 + 16),
              &EventCreateDevice,
              v17,
              CurrentProcessId,
              *(_QWORD *)(a1 + 16),
              -1,
              v11,
              v25,
              v24);
        }
      }
      else
      {
        *((_QWORD *)v11 + 2) = *(_QWORD *)(a3 + 384);
      }
      if ( (*((_DWORD *)v11 + 12) & 2) == 0
        || (LOBYTE(v17) = 1, v16 = VidSchControlVSyncDevice(v11, 2LL, v17), v16 >= 0) )
      {
        *a4 = v11;
        return (unsigned int)v16;
      }
    }
LABEL_27:
    VidSchTerminateDevice(v11);
    return (unsigned int)v16;
  }
  v23 = WdLogNewEntry5_WdWarning(v10);
  WdLogEvent5_WdWarning(v23);
  return 3221225495LL;
}
