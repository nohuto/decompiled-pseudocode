/*
 * XREFs of ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0091180
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z @ 0x1C0007AF8 (--3-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ @ 0x1C0092B50 (-PopDeferredTracker@ADAPTER_RENDER@@QEAAPEAVDXGTERMINATIONTRACKER@@XZ.c)
 *     ??1DXGRESOURCE@@QEAA@XZ @ 0x1C0093F4C (--1DXGRESOURCE@@QEAA@XZ.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C009D6E0 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgkpDeferredDestructionWork(struct _EX_RUNDOWN_REF *this)
{
  struct DXGTERMINATIONTRACKER *v2; // rax
  struct DXGTERMINATIONTRACKER *v3; // rbx
  DXGDEVICE *v4; // rcx
  ULONG_PTR Count; // rdi
  ULONG_PTR v6; // rcx
  DXGRESOURCE *v7; // rdi
  _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

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
      v7 = *(DXGRESOURCE **)v3;
      if ( *(_QWORD *)v3 )
      {
        DXGRESOURCE::~DXGRESOURCE(*(DXGRESOURCE **)v3);
        DXGQUOTAALLOCATOR<1,1265072196>::operator delete(v7);
      }
    }
    else
    {
      DXGDEVICE::DestroyDeferredAllocations(v4, v3);
    }
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(*((PVOID *)v3 + 2));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this[115], 0LL);
    this[116].Count = (ULONG_PTR)KeGetCurrentThread();
    this[113].Count -= *((_QWORD *)v3 + 5);
    this[116].Count = 0LL;
    ExReleasePushLockExclusiveEx(&this[115], 0LL);
    KeLeaveCriticalRegion();
    Count = this[117].Count;
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
  ExReleaseRundownProtection(this + 114);
  v6 = this[2].Count;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v6 + 16), (struct DXGADAPTER *)v6);
}
