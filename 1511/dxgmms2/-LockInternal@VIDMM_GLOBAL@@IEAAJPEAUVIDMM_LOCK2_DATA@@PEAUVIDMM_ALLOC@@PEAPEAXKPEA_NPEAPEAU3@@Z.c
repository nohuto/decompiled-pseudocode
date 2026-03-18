/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0043990
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0051FD0 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0011610 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_pqqt @ 0x1C001D2A8 (Template_pqqt.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C007B1FC (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C007B314 (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C007B410 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
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
  int v18; // ecx
  int v19; // esi
  __int64 CurrentProcess; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v31; // [rsp+A0h] [rbp+18h]
  void **v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v7 = a3;
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 1951LL) )
  {
    v10 = 0;
    v11 = 0;
    v12 = *(_QWORD **)a3;
    v13 = **(_QWORD **)a3;
    if ( *(int *)a2 < 2 )
    {
LABEL_3:
      ++*(_DWORD *)(v13 + 336);
      ++*((_DWORD *)v12 + 19);
      *(_DWORD *)(v13 + 84) |= 0x20u;
      if ( (**(_DWORD **)(v13 + 472) & 8) != 0 )
        v14 = *(void **)(v13 + 360);
      else
        v14 = (void *)v12[2];
      *a4 = v14;
      *(_BYTE *)(v13 + 94) = 1;
      v15 = a5;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        v26 = *(unsigned int *)a2;
        LODWORD(v29) = v26 == 4;
        LODWORD(v28) = *(_DWORD *)a2;
        LODWORD(v27) = a5;
        Template_pqqt(v26, &EventLock2, (__int64)a3, v7, v27, v28, v29);
      }
      if ( *(_DWORD *)a2 == 4 )
        v10 = 1;
      VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7128), v15, 0, v10);
      return (unsigned int)v11;
    }
    switch ( *(_DWORD *)a2 )
    {
      case 2:
        v11 = VIDMM_GLOBAL::LockAllocInCpuHostAperture(
                this,
                a3,
                *(struct VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(v13 + 128) + 440LL));
        if ( v11 >= 0 )
          goto LABEL_28;
        *(_DWORD *)a2 = 4;
        *((_BYTE *)a2 + 4) = 1;
        break;
      case 3:
        v11 = VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(this, a3);
        break;
      case 4:
        ExReleasePushLockExclusiveEx(v13 + 464, 0LL);
        KeLeaveCriticalRegion();
        v11 = VIDMM_GLOBAL::LockInAperture(this, v7, a6, a7);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v13 + 464, 0LL);
        break;
      case 5:
        v18 = **(_DWORD **)(v13 + 472);
        if ( (v18 & 0x20000000) != 0 )
        {
          v30 = 0LL;
          v19 = ((~(_BYTE)v18 & 4) << 8) | 4;
          CurrentProcess = PsGetCurrentProcess();
          v21 = MmMapViewOfSection(
                  *(_QWORD *)(v13 + 352),
                  CurrentProcess,
                  v12 + 2,
                  0LL,
                  *(_QWORD *)(v13 + 8),
                  &v30,
                  v13 + 8,
                  2,
                  0,
                  v19);
          v7 = v31;
          v11 = v21;
          if ( v21 >= 0 )
            goto LABEL_28;
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
          _InterlockedIncrement(&dword_1C002F5E0);
          v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v22);
          v24[3] = v13;
          v25 = PsGetCurrentProcess();
          v24[5] = v11;
          v24[4] = v25;
          WdLogEvent5_WdLowResource(v24);
          break;
        }
LABEL_28:
        a4 = v32;
        goto LABEL_3;
      default:
        goto LABEL_3;
    }
    if ( v11 < 0 )
      return (unsigned int)v11;
    goto LABEL_28;
  }
  v17 = WdLogNewEntry5_WdWarning(this);
  WdLogEvent5_WdWarning(v17);
  return 3221226166LL;
}
