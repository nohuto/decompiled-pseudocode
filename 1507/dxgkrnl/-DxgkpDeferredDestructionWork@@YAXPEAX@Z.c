/*
 * XREFs of ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0091D60
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x1C0005838 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0078FD0 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ @ 0x1C0091F20 (-PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpDeferredDestructionWork(struct _EX_RUNDOWN_REF *this)
{
  struct DXGTERMINATIONTRACKER *i; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  DXGDEVICE *v5; // rcx
  ULONG_PTR Count; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG_PTR v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  for ( i = ADAPTER_RENDER::PopDeferredTracker((ADAPTER_RENDER *)this);
        i;
        i = ADAPTER_RENDER::PopDeferredTracker((ADAPTER_RENDER *)this) )
  {
    KeStackAttachProcess(*((PRKPROCESS *)i + 2), &ApcState);
    v5 = (DXGDEVICE *)*((_QWORD *)i + 3);
    if ( *(_QWORD *)i )
    {
      DXGDEVICE::DestroyDeferredAllocations(v5, i, v3, v4);
      if ( *(_QWORD *)i )
        DXGRESOURCE::`scalar deleting destructor'(*(DXGRESOURCE **)i);
    }
    else
    {
      DXGDEVICE::DestroyDeferredAllocations(v5, i, v3, v4);
    }
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(*((PVOID *)i + 2));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[115], 0LL);
    this[116].Count = (ULONG_PTR)KeGetCurrentThread();
    this[113].Count -= *((_QWORD *)i + 5);
    this[116].Count = 0LL;
    ExReleasePushLockExclusiveEx(&this[115], 0LL);
    KeLeaveCriticalRegion();
    Count = this[117].Count;
    ++*(_DWORD *)(Count + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)Count) < *(_WORD *)(Count + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)Count, (PSLIST_ENTRY)i);
    }
    else
    {
      ++*(_DWORD *)(Count + 32);
      (*(void (__fastcall **)(struct DXGTERMINATIONTRACKER *, ULONG_PTR))(Count + 56))(i, Count);
    }
  }
  ExReleaseRundownProtection(this + 114);
  v10 = this[2].Count;
  v11 = _InterlockedDecrement64((volatile signed __int64 *)(v10 + 24));
  if ( v11 )
  {
    if ( v11 < 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v7, v8, v9);
      *(_QWORD *)(v12 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v12);
    }
  }
  else
  {
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v10 + 16), (struct DXGADAPTER *)v10);
  }
}
