/*
 * XREFs of ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0042FD0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0041B8C (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0042F20 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0043318 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0046760 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0046924 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004C8A8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004CB60 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessSystemMemoryOfferList(VIDMM_GLOBAL *this)
{
  char *v2; // rbx
  char *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  bool v6; // bp
  __int64 v7; // rbp
  __int64 v8; // rcx
  int v9; // r12d
  __int64 v10; // rdx
  __int64 *v11; // rax
  int v12; // r15d
  __int64 v13; // rcx
  __int64 *v14; // r14
  int v15; // ecx
  __int64 v16; // rax
  VIDMM_GLOBAL *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  bool v21; // bl
  unsigned int v22; // edx
  __int64 *v23; // rax
  __int64 *v24; // r14
  __int64 *v25; // rdx
  char **v26; // rax
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-30h]

  if ( !qword_1C002F2B0 )
    return;
  v2 = (char *)this + 39880;
  v3 = (char *)this + 39840;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v3, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v28 = *((_DWORD *)v3 + 4);
      if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v4, &EventBlockThread, v5, v28);
    }
    ExAcquirePushLockSharedEx(v3, 0LL);
  }
  v6 = *(_QWORD *)v2 != (_QWORD)v2;
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( !v6 )
    return;
  v7 = 0x8000000000000000uLL;
  v8 = *((_QWORD *)this + 576) - *((_QWORD *)this + 880);
  if ( v8 < qword_1C002F2B0 )
  {
    v7 = v8 - qword_1C002F2B0;
    goto LABEL_7;
  }
  v35 = &v34;
  v9 = 0;
  v34 = (__int64)&v34;
LABEL_9:
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v3);
  while ( *(char **)v2 != v2 && VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    v11 = *(__int64 **)v2;
    v12 = 0;
    v13 = **(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *(__int64 **)(v13 + 8) != v11 )
      __fastfail(3u);
    *(_QWORD *)v2 = v13;
    v14 = v11 - 50;
    *(_QWORD *)(v13 + 8) = v2;
    *v11 = 0LL;
    v15 = *(_DWORD *)(v11[9] + 4);
    if ( v15 == 2 )
    {
      v16 = v14[16];
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 56) & 1) == 0 )
          goto LABEL_31;
        if ( !v9 )
        {
          v9 = 1;
          VIDMM_GLOBAL::StartPreparation(this, v10, 0LL, 0LL, 1000);
        }
        if ( *((_QWORD *)this + 576) - v14[53] > qword_1C002F2C0[*((int *)v14 + 104)] )
        {
          DXGFASTMUTEX::Acquire((union _LARGE_INTEGER *)v14[39]);
          *((_QWORD *)v3 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v3, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::MarkGlobalAllocation(this, (union _LARGE_INTEGER **)v14, 0LL, 0LL);
          LOBYTE(v29) = 1;
          LOBYTE(v33) = 0;
          (*(void (__fastcall **)(__int64, __int64 *, __int64, _QWORD, int, _QWORD))(*(_QWORD *)v14[16] + 48LL))(
            v14[16],
            v14,
            v29,
            0LL,
            v33,
            0LL);
          DXGFASTMUTEX::Release((DXGFASTMUTEX *)v14[39], v30, v31, v32);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v3);
          *((_QWORD *)this + 884) += v14[1];
          ++*((_DWORD *)this + 1770);
        }
        else
        {
LABEL_31:
          v23 = v35;
          v24 = v14 + 50;
          *v24 = (__int64)&v34;
          v24[1] = (__int64)v23;
          if ( (__int64 *)*v23 != &v34 )
            __fastfail(3u);
          *v23 = (__int64)v24;
          v35 = v24;
        }
      }
      else
      {
        DXGFASTMUTEX::Acquire((union _LARGE_INTEGER *)v14[39]);
        if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(v17, (struct _VIDMM_GLOBAL_ALLOC *)v14) )
        {
          if ( (*((_DWORD *)v14 + 21) & 8) == 0 )
          {
            *((_QWORD *)v3 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v3, 0LL);
            KeLeaveCriticalRegion();
            v12 = 1;
            VIDMM_GLOBAL::ResetBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v14);
            *((_QWORD *)this + 884) += v14[1];
            ++*((_DWORD *)this + 1770);
          }
        }
        DXGFASTMUTEX::Release((DXGFASTMUTEX *)v14[39], v18, v19, v20);
        if ( v12 )
          goto LABEL_9;
      }
    }
    else if ( v15 && v15 != 3 )
    {
      goto LABEL_31;
    }
  }
  if ( (__int64 *)v34 != &v34 )
  {
    v25 = (__int64 *)*((_QWORD *)v2 + 1);
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (char *)*v25 != v2 )
      __fastfail(3u);
    if ( *(__int64 **)(v34 + 8) != &v34 || (__int64 *)*v35 != &v34 )
      __fastfail(3u);
    *v25 = (__int64)&v34;
    v26 = (char **)v35;
    *((_QWORD *)v2 + 1) = v35;
    *v26 = v2;
    v27 = v34;
    v35 = v25;
    if ( *(__int64 **)(v34 + 8) != &v34 || (__int64 *)*v25 != &v34 )
      __fastfail(3u);
    *v25 = v34;
    *(_QWORD *)(v27 + 8) = v25;
  }
  v21 = *(_QWORD *)v2 != (_QWORD)v2;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 )
    VIDMM_GLOBAL::EndPreparation(this, v22, 0LL, 0, 0LL, 0LL);
  if ( VIDMM_GLOBAL::UnderCleanupLimit(this) )
  {
    *((_QWORD *)this + 880) = *((_QWORD *)this + 576);
    if ( v21 )
      v7 = -qword_1C002F2B0;
  }
LABEL_7:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v7, 4);
}
