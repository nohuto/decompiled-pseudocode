/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C004C5E0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0059590 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C000F93C (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_pqqt @ 0x1C001E61C (Template_pqqt.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00897DC (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00898EC (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00899E8 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCK2_DATA *a2,
        struct VIDMM_ALLOC *a3,
        void **a4,
        unsigned int a5,
        bool *a6,
        struct VIDMM_ALLOC **a7)
{
  struct VIDMM_ALLOC *v7; // rbp
  int v10; // r12d
  int v11; // esi
  _QWORD *v12; // r14
  __int64 v13; // rbx
  void *v14; // rax
  char v15; // bl
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // esi
  __int64 CurrentProcess; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+90h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v32; // [rsp+A0h] [rbp+18h]
  void **v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v7 = a3;
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2091LL) )
  {
    v10 = 0;
    v11 = 0;
    v12 = *(_QWORD **)a3;
    v13 = **(_QWORD **)a3;
    if ( *(int *)a2 < 2 )
    {
LABEL_3:
      ++*(_DWORD *)(v13 + 344);
      ++*((_DWORD *)v12 + 19);
      *(_DWORD *)(v13 + 84) |= 0x20u;
      if ( (**(_DWORD **)(v13 + 504) & 8) != 0 )
        v14 = *(void **)(v13 + 376);
      else
        v14 = (void *)v12[2];
      *a4 = v14;
      *(_BYTE *)(v13 + 97) = 1;
      v15 = a5;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v27 = *(unsigned int *)a2;
        LODWORD(v30) = v27 == 4;
        LODWORD(v29) = *(_DWORD *)a2;
        LODWORD(v28) = a5;
        Template_pqqt(v27, &EventLock2, (__int64)a3, v7, v28, v29, v30);
      }
      if ( *(_DWORD *)a2 == 4 )
        v10 = 1;
      VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7128), v15, 0, v10);
      return (unsigned int)v11;
    }
    switch ( *(_DWORD *)a2 )
    {
      case 2:
        if ( (v12[4] & 1) != 0 )
          goto LABEL_3;
        v11 = VIDMM_GLOBAL::LockAllocInCpuHostAperture(
                this,
                a3,
                *(struct VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(v13 + 136) + 472LL));
        if ( v11 >= 0 )
          goto LABEL_29;
        *(_DWORD *)a2 = 4;
        *((_BYTE *)a2 + 4) = 1;
        break;
      case 3:
        v11 = VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(this, a3);
        break;
      case 4:
        ExReleasePushLockExclusiveEx(v13 + 496, 0LL);
        KeLeaveCriticalRegion();
        v11 = VIDMM_GLOBAL::LockInAperture(this, v7, a6, a7);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v13 + 496, 0LL);
        break;
      case 5:
        v18 = **(unsigned int **)(v13 + 504);
        if ( (v18 & 0x20000000) != 0 )
        {
          LOBYTE(v18) = ~(_BYTE)v18;
          v31 = 0LL;
          v19 = ((v18 & 4) << 8) | 4;
          CurrentProcess = PsGetCurrentProcess(v18);
          v21 = MmMapViewOfSection(
                  *(_QWORD *)(v13 + 368),
                  CurrentProcess,
                  v12 + 2,
                  0LL,
                  *(_QWORD *)(v13 + 8),
                  &v31,
                  v13 + 8,
                  2,
                  0,
                  v19);
          v7 = v32;
          v11 = v21;
          if ( v21 >= 0 )
            goto LABEL_29;
          goto LABEL_22;
        }
        v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v12[1] + 24LL) + 72LL))(
                *(_QWORD *)(v12[1] + 24LL),
                v12[3],
                *(_QWORD *)(v13 + 8));
        v12[2] = v23;
        if ( !v23 )
        {
          v11 = -1073741801;
LABEL_22:
          _InterlockedIncrement(&dword_1C0035660);
          v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v22);
          v24[3] = v13;
          v26 = PsGetCurrentProcess(v25);
          v24[5] = v11;
          v24[4] = v26;
          WdLogEvent5_WdLowResource(v24);
          break;
        }
LABEL_29:
        a4 = v33;
        goto LABEL_3;
      default:
        goto LABEL_3;
    }
    if ( v11 < 0 )
      return (unsigned int)v11;
    goto LABEL_29;
  }
  v17 = WdLogNewEntry5_WdWarning(this);
  WdLogEvent5_WdWarning(v17);
  return 3221226166LL;
}
