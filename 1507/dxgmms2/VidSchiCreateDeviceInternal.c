/*
 * XREFs of VidSchiCreateDeviceInternal @ 0x1C00382EC
 * Callers:
 *     VidSchCreateDevice @ 0x1C0032780 (VidSchCreateDevice.c)
 *     VidSchCreateSystemDevices @ 0x1C00449B0 (VidSchCreateSystemDevices.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0005E90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiIncrementDeviceReference @ 0x1C0006278 (VidSchiIncrementDeviceReference.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0006280 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiCreateContextInternal @ 0x1C00062E4 (VidSchiCreateContextInternal.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C00069A8 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_ppqptt @ 0x1C0013E8C (Template_ppqptt.c)
 *     VidSchTerminateDevice @ 0x1C002E0F0 (VidSchTerminateDevice.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C0038628 (VidSchiOpenProcessAdapterInfo.c)
 *     VidSchSetQueuedPresentLimit @ 0x1C00387C0 (VidSchSetQueuedPresentLimit.c)
 *     VidSchiReadDeviceConfiguration @ 0x1C0038810 (VidSchiReadDeviceConfiguration.c)
 *     VidSchControlVSyncDevice @ 0x1C0077CE0 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchiCreateDeviceInternal(__int64 a1, _DWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 *v4; // r15
  __int64 v8; // rax
  struct DXGPROCESS *Current; // r13
  PVOID PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  int v23; // eax
  int v24; // edi
  __int64 v25; // rax
  ADAPTER_RENDER *v26; // rcx
  bool v27; // zf
  bool v28; // r15
  bool v29; // si
  HANDLE CurrentProcessId; // rax
  char *ContextInternal; // rax
  __int64 v32; // [rsp+58h] [rbp-9h] BYREF
  int v33; // [rsp+60h] [rbp-1h]
  __int64 v34; // [rsp+64h] [rbp+3h]
  _DXGKARG_CREATEDEVICE v35; // [rsp+70h] [rbp+Fh] BYREF

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
      v8 = WdLogNewEntry5_WdWarning(a1, a2, 0LL);
      WdLogEvent5_WdWarning(v8);
      return 3221225485LL;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x470uLL, 0x68536956u);
  v15 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    WdLogEvent5_WdWarning(v16);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 0x470uLL);
  *(_DWORD *)v15 = 1986348118;
  *(_QWORD *)(v15 + 8) = a3;
  ExInitializeResourceLite((PERESOURCE)(v15 + 744));
  *(_QWORD *)(v15 + 32) = a1;
  v17 = *(_OWORD *)a2;
  *(_DWORD *)(v15 + 472) = -1;
  *(_OWORD *)(v15 + 48) = v17;
  VidSchiReadDeviceConfiguration(v15);
  *(_QWORD *)(v15 + 80) = v15 + 72;
  *(_QWORD *)(v15 + 72) = v15 + 72;
  *(_QWORD *)(v15 + 1048) = v15 + 1040;
  *(_QWORD *)(v15 + 1040) = v15 + 1040;
  *(_QWORD *)(v15 + 112) = v15 + 104;
  *(_QWORD *)(v15 + 104) = v15 + 104;
  *(_QWORD *)(v15 + 128) = v15 + 120;
  *(_QWORD *)(v15 + 120) = v15 + 120;
  *(_QWORD *)(v15 + 144) = v15 + 136;
  *(_QWORD *)(v15 + 136) = v15 + 136;
  VidSchSetQueuedPresentLimit(v15, 0LL);
  memset64((void *)(v15 + 344), 1uLL, 0x10uLL);
  VidSchiIncrementDeviceReference(v15);
  VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1872), a1 + 200, (_QWORD *)(v15 + 88), 0LL);
  if ( (*a2 & 1) != 0 )
  {
    *(_QWORD *)(v15 + 40) = g_pVidSchSystemProcess;
  }
  else
  {
    v20 = *((_QWORD *)Current + 9);
    if ( v20 )
      v21 = *(_QWORD *)(v20 + 24);
    else
      v21 = 0LL;
    *(_QWORD *)(v15 + 40) = v21;
  }
  v22 = (unsigned __int64)*(unsigned int *)(a1 + 4) >> 5;
  v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 2616LL) + 4 * v22);
  if ( _bittest(&v23, *(_DWORD *)(a1 + 4) & 0x1F) )
  {
    v24 = -1073741790;
  }
  else
  {
    v24 = VidSchiOpenProcessAdapterInfo(*(_QWORD *)(v15 + 40), a1);
    if ( v24 >= 0 )
    {
      *(_BYTE *)(v15 + 208) = 1;
      if ( (*a2 & 1) != 0 )
      {
        memset(&v35, 0, sizeof(v35));
        v25 = *((_QWORD *)Current + 6);
        v35.hDevice = 0LL;
        v35.Flags.Value |= 1u;
        v26 = *(ADAPTER_RENDER **)(a1 + 8);
        v35.hKmdProcess = *(HANDLE *)(*(_QWORD *)(v25 + 8LL * *(unsigned int *)(a1 + 4)) + 16LL);
        v24 = ADAPTER_RENDER::DdiCreateDevice(v26, &v35);
        if ( v24 < 0 )
          goto LABEL_16;
        v27 = bTracingEnabled == 0;
        *(_QWORD *)(v15 + 16) = v35.hDevice;
        if ( !v27 )
        {
          v28 = (*(_DWORD *)(v15 + 48) & 4) != 0;
          v29 = (*(_DWORD *)(v15 + 48) & 2) != 0;
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            Template_ppqptt(
              *(_QWORD *)(a1 + 16),
              &EventCreateDevice,
              v18,
              CurrentProcessId,
              *(_QWORD *)(a1 + 16),
              -1,
              v15,
              v29,
              v28);
          v4 = a4;
        }
      }
      else
      {
        *(_QWORD *)(v15 + 16) = *(_QWORD *)(a3 + 360);
      }
      if ( (*a2 & 0x10) != 0
        || (v33 = 0,
            v34 = 7LL,
            v32 = 12LL,
            HIDWORD(v34) = *((_DWORD *)Current + 79),
            ContextInternal = VidSchiCreateContextInternal(v15, (unsigned int *)&v32, 0LL),
            (*(_QWORD *)(v15 + 64) = ContextInternal) != 0LL) )
      {
        if ( (*(_DWORD *)(v15 + 48) & 2) == 0
          || (LOBYTE(v18) = 1, v24 = VidSchControlVSyncDevice(v15, 2LL, v18), v24 >= 0) )
        {
          *v4 = v15;
          return (unsigned int)v24;
        }
      }
      else
      {
        v24 = -1073741801;
      }
    }
  }
LABEL_16:
  VidSchTerminateDevice((char *)v15, v22, v18, v19);
  return (unsigned int)v24;
}
