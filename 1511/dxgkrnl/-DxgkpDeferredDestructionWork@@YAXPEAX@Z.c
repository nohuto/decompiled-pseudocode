/*
 * XREFs of ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0068680
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C000C310 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ @ 0x1C00687E0 (-PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C006BD20 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpDeferredDestructionWork(struct _EX_RUNDOWN_REF *this)
{
  struct DXGTERMINATIONTRACKER *v2; // rax
  struct DXGTERMINATIONTRACKER *v3; // rdi
  DXGDEVICE *v4; // rcx
  ULONG_PTR Count; // rbx
  ULONG_PTR v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  while ( 1 )
  {
    v2 = ADAPTER_RENDER::PopDeferredTracker((ADAPTER_RENDER *)this);
    v3 = v2;
    if ( !v2 )
      break;
    KeStackAttachProcess(*((PRKPROCESS *)v2 + 2), &ApcState);
    v4 = (DXGDEVICE *)*((_QWORD *)v3 + 3);
    if ( *(_QWORD *)v3 )
    {
      DXGDEVICE::DestroyDeferredAllocations(v4, v3);
      if ( *(_QWORD *)v3 )
        DXGRESOURCE::`scalar deleting destructor'(*(DXGRESOURCE **)v3);
    }
    else
    {
      DXGDEVICE::DestroyDeferredAllocations(v4, v3);
    }
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(*((PVOID *)v3 + 2));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[124], 0LL);
    this[125].Count = (ULONG_PTR)KeGetCurrentThread();
    this[122].Count -= *((_QWORD *)v3 + 5);
    this[125].Count = 0LL;
    ExReleasePushLockExclusiveEx(&this[124], 0LL);
    KeLeaveCriticalRegion();
    Count = this[126].Count;
    ++*(_DWORD *)(Count + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)Count) >= *(_WORD *)(Count + 16) )
    {
      ++*(_DWORD *)(Count + 32);
      (*(void (__fastcall **)(struct DXGTERMINATIONTRACKER *, ULONG_PTR))(Count + 56))(v3, Count);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)Count, (PSLIST_ENTRY)v3);
    }
  }
  ExReleaseRundownProtection(this + 123);
  v6 = this[2].Count;
  v7 = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 24));
  if ( !v7 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v6 + 16), (struct DXGADAPTER *)v6);
  if ( v7 < 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 1158LL;
    WdLogEvent5_WdAssertion(v8);
  }
}
