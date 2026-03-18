/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1C006E590
 * Callers:
 *     <none>
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(unsigned int a1, char a2)
{
  __int64 v3; // r14
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdi
  struct _KEVENT *v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *i; // rdi
  unsigned int v25; // esi
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // r9d
  __int64 v30; // rax
  unsigned __int8 v31; // di
  __int64 v32; // r8
  __int64 v33; // rax

  v3 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  v8 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v27 = WdLogNewEntry5_WdError(v7);
    v25 = -1073741811;
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    return v25;
  }
  v9 = ProcessDxgProcess + 184;
  if ( ProcessDxgProcess != -184 && *(struct _KTHREAD **)(ProcessDxgProcess + 192) == KeGetCurrentThread() )
  {
    v28 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v28 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v28);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v9, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v29 = *(_DWORD *)(v9 + 16);
      if ( v29 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v10, &EventBlockThread, v11, v29);
    }
    ExAcquirePushLockSharedEx(v9, 0LL);
  }
  v12 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  if ( v12 < *(_DWORD *)(v8 + 224)
    && (v13 = *(_QWORD *)(v8 + 208),
        v14 = *(_DWORD *)(v13 + 16LL * v12 + 8),
        (((unsigned int)v3 >> 26) & 0x30) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x30))
    && (v14 & 0x1000) == 0
    && (v14 & 0xF) != 0
    && (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0xF) == 3 )
  {
    v15 = *(_QWORD *)(v13 + 16LL * v12);
    if ( v15 )
      _InterlockedIncrement64((volatile signed __int64 *)(v15 + 64));
  }
  else
  {
    v15 = 0LL;
  }
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15 )
  {
    v30 = WdLogNewEntry5_WdError(v16);
    v25 = -1073741811;
    *(_QWORD *)(v30 + 24) = v3;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    return v25;
  }
  v17 = *(_QWORD *)(v15 + 16);
  if ( *(_DWORD *)(v15 + 304) == 2 )
  {
    v18 = (struct _KEVENT *)(v17 + 80);
    if ( KeReadStateEvent(v18) )
      goto LABEL_16;
LABEL_38:
    KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
    goto LABEL_16;
  }
  v18 = (struct _KEVENT *)(v17 + 56);
  if ( !KeReadStateEvent(v18) )
    goto LABEL_38;
LABEL_16:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 80), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 96LL));
    v31 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v32, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 80), 1u);
    if ( v31 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v15 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v19 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v19 + 120, 0LL);
  if ( *(_DWORD *)(v15 + 376) == 1 )
  {
    *(_BYTE *)(v15 + 2871) = a2;
    if ( !a2 )
    {
      for ( i = *(_QWORD **)(v15 + 312); i != (_QWORD *)(v15 + 312) && i; i = (_QWORD *)*i )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 376LL) + 8LL) + 744LL))(i[27]);
    }
    v25 = 0;
  }
  else
  {
    v33 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    *(_QWORD *)(v33 + 24) = v3;
    *(_QWORD *)(v33 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v33);
    v25 = -1073741130;
  }
  ExReleasePushLockSharedEx(v19 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v19 + 16), (struct DXGADAPTER *)v19);
  ExReleaseResourceLite(*(PERESOURCE *)(v15 + 80));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v15 + 16), (struct DXGDEVICE *)v15);
  return v25;
}
