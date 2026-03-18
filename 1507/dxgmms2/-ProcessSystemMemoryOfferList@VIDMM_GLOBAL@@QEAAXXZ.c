/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0033130
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?ArePendingOffersInList@VIDMM_GLOBAL@@QEAA_NPEAU_LIST_ENTRY@@@Z @ 0x1C0033194 (-ArePendingOffersInList@VIDMM_GLOBAL@@QEAA_NPEAU_LIST_ENTRY@@@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C00331E8 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003369C (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0033820 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0035E44 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004CB80 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004F7AC (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0053080 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSystemMemoryOfferList(VIDMM_GLOBAL *this)
{
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rcx
  int v5; // r13d
  __int64 v6; // rdx
  __int64 *v7; // rax
  int v8; // r12d
  __int64 v9; // rcx
  __int64 *v10; // rsi
  int v11; // ecx
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rax
  VIDMM_GLOBAL *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rcx
  char **v24; // rax
  __int64 v25; // rax
  bool v26; // di
  unsigned int v27; // edx
  int v28; // [rsp+20h] [rbp-30h]
  __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v30; // [rsp+48h] [rbp-8h]

  if ( !qword_1C0027290 )
    return;
  v2 = (char *)this + 39864;
  if ( !VIDMM_GLOBAL::ArePendingOffersInList(this, (struct _LIST_ENTRY *)((char *)this + 39864)) )
    return;
  v3 = 0x8000000000000000uLL;
  v4 = *((_QWORD *)this + 576) - *((_QWORD *)this + 880);
  if ( v4 < qword_1C0027290 )
  {
    v3 = v4 - qword_1C0027290;
    goto LABEL_46;
  }
  v5 = 0;
  v30 = &v29;
  v29 = (__int64)&v29;
LABEL_6:
  DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39840));
  while ( *(char **)v2 != v2 && VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    v7 = *(__int64 **)v2;
    v8 = 0;
    v9 = **(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *(__int64 **)(v9 + 8) != v7 )
      __fastfail(3u);
    *(_QWORD *)v2 = v9;
    v10 = v7 - 50;
    *(_QWORD *)(v9 + 8) = v2;
    *v7 = 0LL;
    v11 = *(_DWORD *)(v7[9] + 4);
    if ( v11 == 2 )
    {
      v14 = v10[16];
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 56) & 1) == 0 )
          goto LABEL_14;
        if ( !v5 )
        {
          v5 = 1;
          VIDMM_GLOBAL::StartPreparation(this, v6, 0LL, 0LL, 1000);
        }
        if ( *((_QWORD *)this + 576) - v10[53] > qword_1C00272A0[*((int *)v10 + 104)] )
        {
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v10[39]);
          *((_QWORD *)this + 4981) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 39840, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::MarkGlobalAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)v10, 0LL, 0LL);
          LOBYTE(v19) = 1;
          LOBYTE(v28) = 0;
          (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v10[16] + 48LL))(
            v10[16],
            v10,
            v19,
            0LL,
            v28,
            0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)v10[39], v20, v21, v22);
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39840));
          *((_QWORD *)this + 884) += v10[1];
          ++*((_DWORD *)this + 1770);
        }
        else
        {
LABEL_14:
          v12 = v30;
          v13 = v10 + 50;
          *v13 = (__int64)&v29;
          v13[1] = (__int64)v12;
          if ( (__int64 *)*v12 != &v29 )
            __fastfail(3u);
          *v12 = (__int64)v13;
          v30 = v13;
        }
      }
      else
      {
        DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v10[39]);
        if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(v15, (struct _VIDMM_GLOBAL_ALLOC *)v10)
          && (*((_DWORD *)v10 + 21) & 8) == 0 )
        {
          *((_QWORD *)this + 4981) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 39840, 0LL);
          KeLeaveCriticalRegion();
          v8 = 1;
          VIDMM_GLOBAL::ResetBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v10);
          *((_QWORD *)this + 884) += v10[1];
          ++*((_DWORD *)this + 1770);
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)v10[39], v16, v17, v18);
        if ( v8 )
          goto LABEL_6;
      }
    }
    else if ( v11 && v11 != 3 )
    {
      goto LABEL_14;
    }
  }
  if ( (__int64 *)v29 != &v29 )
  {
    v23 = (__int64 *)*((_QWORD *)v2 + 1);
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (char *)*v23 != v2 )
      __fastfail(3u);
    if ( *(__int64 **)(v29 + 8) != &v29 || (__int64 *)*v30 != &v29 )
      __fastfail(3u);
    *v23 = (__int64)&v29;
    v24 = (char **)v30;
    *((_QWORD *)v2 + 1) = v30;
    *v24 = v2;
    v25 = v29;
    v30 = v23;
    if ( *(__int64 **)(v29 + 8) != &v29 || (__int64 *)*v23 != &v29 )
      __fastfail(3u);
    *v23 = v29;
    *(_QWORD *)(v25 + 8) = v23;
  }
  v26 = *(_QWORD *)v2 != (_QWORD)v2;
  *((_QWORD *)this + 4981) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39840, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
    VIDMM_GLOBAL::EndPreparation(this, v27, 0LL, 0, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 880) = *((_QWORD *)this + 576);
    if ( v26 )
      v3 = -qword_1C0027290;
  }
LABEL_46:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v3, 4LL);
}
