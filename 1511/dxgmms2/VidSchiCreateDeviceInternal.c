/*
 * XREFs of VidSchiCreateDeviceInternal @ 0x1C0038994
 * Callers:
 *     VidSchCreateDevice @ 0x1C0038960 (VidSchCreateDevice.c)
 *     VidSchCreateSystemDevices @ 0x1C0069E2C (VidSchCreateSystemDevices.c)
 * Callees:
 *     VidSchiIncrementDeviceReference @ 0x1C0002484 (VidSchiIncrementDeviceReference.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007F60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiCreateContextInternal @ 0x1C000F9D0 (VidSchiCreateContextInternal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00117CC (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0015390 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_ppqptt @ 0x1C001F8EC (Template_ppqptt.c)
 *     VidSchTerminateDevice @ 0x1C0038790 (VidSchTerminateDevice.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C0038C50 (VidSchiOpenProcessAdapterInfo.c)
 *     VidSchSetQueuedPresentLimit @ 0x1C0038DF0 (VidSchSetQueuedPresentLimit.c)
 *     VidSchiReadDeviceConfiguration @ 0x1C0038E40 (VidSchiReadDeviceConfiguration.c)
 *     VidSchControlVSyncDevice @ 0x1C0038EF0 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchiCreateDeviceInternal(__int64 a1, _DWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 *v4; // r15
  struct DXGPROCESS *Current; // r13
  PVOID PoolWithTag; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // edi
  __int64 ContextInternal; // rax
  __int64 v22; // rax
  ADAPTER_RENDER *v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // r15
  bool v28; // si
  HANDLE CurrentProcessId; // rax
  __int64 v30; // r8
  __int64 v31; // [rsp+58h] [rbp-9h] BYREF
  int v32; // [rsp+60h] [rbp-1h]
  __int64 v33; // [rsp+64h] [rbp+3h]
  _DXGKARG_CREATEDEVICE v34; // [rsp+70h] [rbp+Fh] BYREF

  *a4 = 0LL;
  v4 = a4;
  if ( (*a2 & 1) != 0 )
  {
    Current = *(struct DXGPROCESS **)(g_pVidSchSystemProcess + 8);
  }
  else
  {
    if ( !a3 )
    {
      v25 = WdLogNewEntry5_WdWarning(a1);
      WdLogEvent5_WdWarning(v25);
      return 3221225485LL;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x4F0uLL, 0x68536956u);
  v11 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x4F0uLL);
    *(_DWORD *)v11 = 1986348118;
    *(_QWORD *)(v11 + 8) = a3;
    ExInitializeResourceLite((PERESOURCE)(v11 + 872));
    *(_QWORD *)(v11 + 32) = a1;
    v12 = *(_OWORD *)a2;
    *(_DWORD *)(v11 + 472) = -1;
    *(_OWORD *)(v11 + 48) = v12;
    VidSchiReadDeviceConfiguration(v11);
    *(_QWORD *)(v11 + 80) = v11 + 72;
    *(_QWORD *)(v11 + 72) = v11 + 72;
    *(_QWORD *)(v11 + 1176) = v11 + 1168;
    *(_QWORD *)(v11 + 1168) = v11 + 1168;
    *(_QWORD *)(v11 + 112) = v11 + 104;
    *(_QWORD *)(v11 + 104) = v11 + 104;
    *(_QWORD *)(v11 + 128) = v11 + 120;
    *(_QWORD *)(v11 + 120) = v11 + 120;
    *(_QWORD *)(v11 + 144) = v11 + 136;
    *(_QWORD *)(v11 + 136) = v11 + 136;
    VidSchSetQueuedPresentLimit(v11, 0LL);
    memset64((void *)(v11 + 344), 1uLL, 0x10uLL);
    VidSchiIncrementDeviceReference(v11);
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1824), a1 + 208, (_QWORD *)(v11 + 88), 0LL);
    if ( (*a2 & 1) != 0 )
    {
      *(_QWORD *)(v11 + 40) = g_pVidSchSystemProcess;
    }
    else
    {
      v15 = *((_QWORD *)Current + 9);
      if ( v15 )
        v16 = *(_QWORD *)(v15 + 24);
      else
        v16 = 0LL;
      *(_QWORD *)(v11 + 40) = v16;
    }
    v17 = (unsigned __int64)*(unsigned int *)(a1 + 4) >> 5;
    v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 2616LL) + 4 * v17);
    if ( _bittest(&v18, *(_DWORD *)(a1 + 4) & 0x1F) )
    {
      v19 = -1073741790;
      goto LABEL_32;
    }
    v19 = VidSchiOpenProcessAdapterInfo(*(_QWORD *)(v11 + 40), a1);
    if ( v19 >= 0 )
    {
      *(_BYTE *)(v11 + 208) = 1;
      if ( (*a2 & 1) != 0 )
      {
        memset(&v34, 0, sizeof(v34));
        v22 = *((_QWORD *)Current + 6);
        v34.hDevice = 0LL;
        v34.Flags.Value |= 1u;
        v23 = *(ADAPTER_RENDER **)(a1 + 8);
        v34.hKmdProcess = *(HANDLE *)(*(_QWORD *)(v22 + 8LL * *(unsigned int *)(a1 + 4)) + 16LL);
        v19 = ADAPTER_RENDER::DdiCreateDevice(v23, &v34);
        if ( v19 < 0 )
          goto LABEL_32;
        v24 = bTracingEnabled == 0;
        *(_QWORD *)(v11 + 16) = v34.hDevice;
        if ( !v24 )
        {
          v27 = (*(_DWORD *)(v11 + 48) & 4) != 0;
          v28 = (*(_DWORD *)(v11 + 48) & 2) != 0;
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            Template_ppqptt(
              *(_QWORD *)(a1 + 16),
              &EventCreateDevice,
              v30,
              CurrentProcessId,
              *(_QWORD *)(a1 + 16),
              -1,
              v11,
              v28,
              v27);
          v4 = a4;
        }
      }
      else
      {
        *(_QWORD *)(v11 + 16) = *(_QWORD *)(a3 + 360);
      }
      if ( (*a2 & 0x10) != 0
        || (v32 = 0,
            v33 = 7LL,
            v31 = 12LL,
            HIDWORD(v33) = *((_DWORD *)Current + 79),
            ContextInternal = VidSchiCreateContextInternal(v11, (unsigned int *)&v31, 0LL),
            (*(_QWORD *)(v11 + 64) = ContextInternal) != 0LL) )
      {
        if ( (*(_DWORD *)(v11 + 48) & 2) == 0 || (v19 = VidSchControlVSyncDevice(v11, 2LL), v19 >= 0) )
        {
          *v4 = v11;
          return (unsigned int)v19;
        }
      }
      else
      {
        v19 = -1073741801;
      }
    }
LABEL_32:
    VidSchTerminateDevice((char *)v11, v17, v13, v14);
    return (unsigned int)v19;
  }
  v26 = WdLogNewEntry5_WdWarning(v10);
  WdLogEvent5_WdWarning(v26);
  return 3221225495LL;
}
