/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004BB50
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C004B768 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004BA80 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C004BF90 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004E990 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C004EB54 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z @ 0x1C0051FEC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054824 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054A00 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005AF64 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSystemMemoryOfferList(VIDMM_GLOBAL *this)
{
  char *v2; // rbp
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  bool v6; // di
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // r15d
  VIDMM_GLOBAL *v10; // rcx
  int v11; // r12d
  __int64 v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // r9
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // r14
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rax
  bool v22; // zf
  bool v23; // si
  unsigned int v24; // edx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r9d
  int v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-30h]

  if ( !qword_1C00352C0 )
    return;
  v2 = (char *)this + 39912;
  v3 = (_QWORD *)((char *)this + 39952);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v2, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v32 = *((_DWORD *)v2 + 4);
      if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v4, &EventBlockThread, v5, v32);
    }
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  v6 = *v3 != (_QWORD)v3;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( !v6 )
    return;
  v7 = 0x8000000000000000uLL;
  v8 = *((_QWORD *)this + 576) - *((_QWORD *)this + 884);
  if ( (*((_DWORD *)this + 1616) & 0x8000) == 0 && v8 < qword_1C00352C0 )
  {
    v7 = v8 - qword_1C00352C0;
    goto LABEL_8;
  }
  v35 = &v34;
  v9 = 0;
  v34 = (__int64)&v34;
LABEL_10:
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
  while ( (_QWORD *)*v3 != v3 && VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    v11 = 0;
    v12 = *v3 - 416LL;
    VIDMM_GLOBAL::RemoveAllocationFromOfferList(v10, (struct _VIDMM_GLOBAL_ALLOC *)v12);
    v15 = *(_WORD *)(*(_QWORD *)(v12 + 504) + 4LL);
    if ( v15 == 2 )
    {
      v16 = *(_QWORD *)(v12 + 136);
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 56) & 0x1001) == 0 )
          goto LABEL_20;
        if ( !v9 )
        {
          v9 = 1;
          VIDMM_GLOBAL::StartPreparation(this, v13, 0LL, 0LL, 1000);
          v14 = &unk_1C00352D0;
        }
        if ( (*((_DWORD *)this + 1616) & 0x8000) != 0
          || *((_QWORD *)this + 576) - *(_QWORD *)(v12 + 456) > v14[*(int *)(v12 + 448)] )
        {
          DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 320));
          *((_QWORD *)v2 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v2, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::MarkGlobalAllocation(this, (DXGFASTMUTEX **)v12, 0LL, 0LL);
          LOBYTE(v25) = 1;
          LOBYTE(v33) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v12 + 136) + 48LL))(
            *(_QWORD *)(v12 + 136),
            v12,
            v25,
            0LL,
            v33,
            0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 320), v26, v27, v28);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v2);
          *((_QWORD *)this + 888) += *(_QWORD *)(v12 + 8);
          ++*((_DWORD *)this + 1778);
        }
        else
        {
LABEL_20:
          v17 = v35;
          v18 = (__int64 *)(v12 + 416);
          if ( (__int64 *)*v35 != &v34 )
            __fastfail(3u);
          v18[1] = (__int64)v35;
          *v18 = (__int64)&v34;
          *v17 = (__int64)v18;
          v35 = v18;
        }
      }
      else
      {
        DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 320));
        if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)v12)
          && (*(_DWORD *)(v12 + 84) & 8) == 0 )
        {
          *((_QWORD *)v2 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v2, 0LL);
          KeLeaveCriticalRegion();
          v11 = 1;
          if ( *(_QWORD *)(v12 + 264) )
            VIDMM_GLOBAL::EvictTemporaryAllocations(this, 1u, *(_DWORD *)(v12 + 76) & 0x3F);
          VIDMM_GLOBAL::ResetBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v12);
          *((_QWORD *)this + 888) += *(_QWORD *)(v12 + 8);
          ++*((_DWORD *)this + 1778);
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 320), v29, v30, v31);
        if ( v11 )
          goto LABEL_10;
      }
    }
    else if ( v15 != 3 && v15 )
    {
      goto LABEL_20;
    }
  }
  if ( (__int64 *)v34 != &v34 )
  {
    v19 = (__int64 *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v19 != v3 )
      __fastfail(3u);
    if ( *(__int64 **)(v34 + 8) != &v34 || (__int64 *)*v35 != &v34 )
      __fastfail(3u);
    *v19 = (__int64)&v34;
    v20 = v35;
    v3[1] = v35;
    *v20 = (__int64)v3;
    v21 = v34;
    v35 = v19;
    if ( *(__int64 **)(v34 + 8) != &v34 || (__int64 *)*v19 != &v34 )
      __fastfail(3u);
    *v19 = v34;
    *(_QWORD *)(v21 + 8) = v19;
  }
  v22 = *v3 == (_QWORD)v3;
  *((_QWORD *)v2 + 1) = 0LL;
  v23 = !v22;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 )
    VIDMM_GLOBAL::EndPreparation(this, v24, 0LL, 0, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 884) = *((_QWORD *)this + 576);
    if ( v23 )
      v7 = -qword_1C00352C0;
  }
LABEL_8:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v7, 4);
}
