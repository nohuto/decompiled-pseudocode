/*
 * XREFs of ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00138FC
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0057B10 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00678E4 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0013CE8 (-CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0042E38 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::MapRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  SIZE_T v9; // rax
  PVOID v10; // r15
  SIZE_T v11; // rax
  _QWORD *v12; // rbp
  __int64 v13; // rax
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r12d
  __int64 v21; // rdx
  char *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // r14
  __int64 result; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 v34; // [rsp+38h] [rbp-50h]
  __int16 v35; // [rsp+3Ah] [rbp-4Eh]
  unsigned __int64 v36; // [rsp+40h] [rbp-48h]
  PVOID v37; // [rsp+48h] [rbp-40h]
  _QWORD *v38; // [rsp+50h] [rbp-38h]

  if ( *((_QWORD *)a2 + 54) )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v29[3] = 270LL;
    v29[4] = 44LL;
    v29[5] = this;
    v29[6] = a2;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  v6 = *(unsigned int *)(*((_QWORD *)this + 6) + 368LL);
  v7 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 115));
  v8 = v7;
  v9 = 4 * v7;
  if ( !is_mul_ok(v7, 4uLL) )
    v9 = -1LL;
  v10 = operator new(v9, 0x36346956u, PagedPool);
  if ( !v10 )
  {
    v30 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v30);
    return 3221225495LL;
  }
  v11 = 8 * v7;
  if ( !is_mul_ok(v7, 8uLL) )
    v11 = -1LL;
  v12 = operator new(v11, 0x36346956u, PagedPool);
  if ( !v12 )
  {
    v31 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v31);
    operator delete[](v10);
    return 3221225495LL;
  }
  VIDMM_CPU_HOST_APERTURE::CopyRangeToArray(
    this,
    (unsigned int *)v10,
    (unsigned int)v7,
    (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 456));
  if ( *((_QWORD *)a2 + 16) )
    v13 = *((_QWORD *)a2 + 17);
  else
    v13 = *((_QWORD *)a2 + 26);
  v14 = v12;
  v15 = v13 / v6;
  v16 = v15 + v7;
  while ( v15 < v16 )
    *v14++ = v15++;
  v17 = *((_QWORD *)a2 + 5);
  if ( v17 )
    v18 = *(_QWORD *)(v17 + 16);
  else
    v18 = *((_QWORD *)a2 + 6);
  v19 = *((_QWORD *)this + 6);
  v33 = v18;
  v36 = v7;
  v37 = v10;
  v38 = v12;
  if ( (*(_DWORD *)(v19 + 56) & 0x1000) != 0 )
    v34 = 0;
  else
    v34 = *(_WORD *)(v19 + 16) + 1;
  v35 = *(_WORD *)(v19 + 372);
  v20 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64))DxgCoreInterface[38])(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 24LL) + 1992LL),
          &v33,
          1LL);
  DXGPUSHLOCK::AcquireExclusive((VIDMM_CPU_HOST_APERTURE *)((char *)this + 72));
  v21 = *(_QWORD *)this;
  v22 = (char *)a2 + 440;
  *((_QWORD *)a2 + 55) = *(_QWORD *)this;
  *((_QWORD *)a2 + 56) = this;
  if ( *(VIDMM_CPU_HOST_APERTURE **)(v21 + 8) != this )
    __fastfail(3u);
  *(_QWORD *)(v21 + 8) = v22;
  *(_QWORD *)this = v22;
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( v20 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25, v26);
    v32[7] = &v33;
    v32[3] = 270LL;
    v32[4] = 45LL;
    v32[5] = this;
    v32[6] = a2;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 40688LL) && (_DWORD)v7 )
  {
    v27 = v12;
    do
    {
      VIDMM_GLOBAL::RecordPageMappingHistory(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL), v34, *v27++, 1LL, 2, 0LL, v33);
      --v8;
    }
    while ( v8 );
  }
  operator delete[](v12);
  result = 0LL;
  *((_QWORD *)a2 + 54) = v10;
  return result;
}
