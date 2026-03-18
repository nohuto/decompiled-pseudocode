/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1C005A490
 * Callers:
 *     <none>
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(unsigned int a1, char a2)
{
  __int64 v3; // r15
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdi
  struct _KEVENT *v20; // rdi
  BOOLEAN v21; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // of
  __int64 v27; // rbp
  __int64 v28; // rt0
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *i; // rdi
  unsigned int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int8 v41; // di
  __int64 v42; // r8
  __int64 v43; // rax
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax

  v3 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v49 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v49 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v49);
    goto LABEL_51;
  }
  v10 = *(_QWORD *)(ProcessWin32Process + 248);
  if ( !v10 )
  {
LABEL_51:
    v50 = WdLogNewEntry5_WdError(v7);
    v34 = -1073741811;
    *(_QWORD *)(v50 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v50);
    return v34;
  }
  v11 = v10 + 192;
  if ( v10 != -192 && *(struct _KTHREAD **)(v10 + 200) == KeGetCurrentThread() )
  {
    v43 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v43 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v43);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v10 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v44 = *(_DWORD *)(v10 + 208);
      if ( v44 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v12, &EventBlockThread, v13, v44);
    }
    ExAcquirePushLockSharedEx(v10 + 192, 0LL);
  }
  v14 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  if ( v14 < *(_DWORD *)(v10 + 232)
    && (v15 = *(_QWORD *)(v10 + 216),
        v16 = *(_DWORD *)(v15 + 16LL * v14 + 8),
        (((unsigned int)v3 >> 26) & 0x30) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x30))
    && (v16 & 0x1000) == 0
    && (v16 & 0xF) != 0
    && (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0xF) == 3 )
  {
    v17 = *(_QWORD *)(v15 + 16LL * v14);
    if ( v17 )
      _InterlockedIncrement64((volatile signed __int64 *)(v17 + 64));
  }
  else
  {
    v17 = 0LL;
  }
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( !v17 )
  {
    v45 = WdLogNewEntry5_WdError(v18);
    v34 = -1073741811;
    *(_QWORD *)(v45 + 24) = v3;
    *(_QWORD *)(v45 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v45);
    return v34;
  }
  v19 = *(_QWORD *)(v17 + 16);
  if ( *(_DWORD *)(v17 + 280) == 2 )
  {
    v20 = (struct _KEVENT *)(v19 + 80);
    if ( KeReadStateEvent(v20) )
      goto LABEL_17;
LABEL_45:
    KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
    goto LABEL_17;
  }
  v20 = (struct _KEVENT *)(v19 + 56);
  if ( !KeReadStateEvent(v20) )
    goto LABEL_45;
LABEL_17:
  KeEnterCriticalRegion();
  v21 = ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 80), 0);
  v26 = 0;
  if ( !v21 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 80LL));
    v41 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v42, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 80), 1u);
    if ( v41 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 80LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v27 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
  v28 = _InterlockedAdd64((volatile signed __int64 *)(v27 + 24), 1uLL);
  if ( (v28 < 0) ^ v26 | (v28 == 0) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    *(_QWORD *)(v46 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v46);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v27 + 104, 0LL);
  if ( *(_DWORD *)(v17 + 352) == 1 )
  {
    *(_BYTE *)(v17 + 18719) = a2;
    if ( !a2 )
    {
      for ( i = *(_QWORD **)(v17 + 288); i != (_QWORD *)(v17 + 288) && i; i = (_QWORD *)*i )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 376LL) + 8LL) + 744LL))(i[27]);
    }
    v34 = 0;
  }
  else
  {
    v47 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    *(_QWORD *)(v47 + 24) = v3;
    *(_QWORD *)(v47 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v47);
    v34 = -1073741130;
  }
  ExReleasePushLockSharedEx(v27 + 104, 0LL);
  KeLeaveCriticalRegion();
  v39 = _InterlockedDecrement64((volatile signed __int64 *)(v27 + 24));
  if ( v39 )
  {
    if ( v39 < 0 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
      *(_QWORD *)(v48 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v48);
    }
  }
  else
  {
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v27 + 16), (struct DXGADAPTER *)v27);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v17 + 80));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v17 + 16), (struct DXGDEVICE *)v17);
  return v34;
}
