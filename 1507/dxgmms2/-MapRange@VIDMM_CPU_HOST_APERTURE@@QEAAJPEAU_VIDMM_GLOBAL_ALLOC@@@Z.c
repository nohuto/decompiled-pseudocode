/*
 * XREFs of ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00117DC
 * Callers:
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C004B9E4 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006D5E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C00116A8 (-CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0052098 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::MapRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  SIZE_T v8; // rax
  PVOID v9; // r15
  __int64 v10; // rax
  __int64 result; // rax
  SIZE_T v12; // rax
  _QWORD *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r12d
  __int64 v23; // rdx
  char *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // r14
  __int64 v29; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 v30; // [rsp+38h] [rbp-50h]
  __int16 v31; // [rsp+3Ah] [rbp-4Eh]
  unsigned __int64 v32; // [rsp+40h] [rbp-48h]
  PVOID v33; // [rsp+48h] [rbp-40h]
  _QWORD *v34; // [rsp+50h] [rbp-38h]

  if ( *((_QWORD *)a2 + 54) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v4[3] = 270LL;
    v4[4] = 44LL;
    v4[5] = this;
    v4[6] = a2;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  v5 = *(unsigned int *)(*((_QWORD *)this + 6) + 368LL);
  v6 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 115));
  v7 = v6;
  v8 = 4 * v6;
  if ( !is_mul_ok(v6, 4uLL) )
    v8 = -1LL;
  v9 = operator new(v8, 0x36346956u, PagedPool);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v10);
    return 3221225495LL;
  }
  v12 = 8 * v6;
  if ( !is_mul_ok(v6, 8uLL) )
    v12 = -1LL;
  v13 = operator new(v12, 0x36346956u, PagedPool);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v14);
    operator delete(v9);
    return 3221225495LL;
  }
  VIDMM_CPU_HOST_APERTURE::CopyRangeToArray(
    (unsigned __int64)this,
    (unsigned int *)v9,
    v6,
    (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 456));
  if ( *((_QWORD *)a2 + 16) )
    v15 = *((_QWORD *)a2 + 17);
  else
    v15 = *((_QWORD *)a2 + 26);
  v16 = v13;
  v17 = v15 / v5;
  v18 = v17 + v6;
  while ( v17 < v18 )
    *v16++ = v17++;
  v19 = *((_QWORD *)a2 + 5);
  if ( v19 )
    v20 = *(_QWORD *)(v19 + 16);
  else
    v20 = *((_QWORD *)a2 + 6);
  v21 = *((_QWORD *)this + 6);
  v29 = v20;
  v32 = v6;
  v33 = v9;
  v34 = v13;
  if ( (*(_DWORD *)(v21 + 56) & 0x1000) != 0 )
    v30 = 0;
  else
    v30 = *(_WORD *)(v21 + 16) + 1;
  v31 = *(_WORD *)(v21 + 372);
  v22 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64))DxgCoreInterface[38])(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 24LL) + 1984LL),
          &v29,
          1LL);
  DXGPUSHLOCK::AcquireExclusive((VIDMM_CPU_HOST_APERTURE *)((char *)this + 72));
  v23 = *(_QWORD *)this;
  v24 = (char *)a2 + 440;
  *((_QWORD *)a2 + 55) = *(_QWORD *)this;
  *((_QWORD *)a2 + 56) = this;
  if ( *(VIDMM_CPU_HOST_APERTURE **)(v23 + 8) != this )
    __fastfail(3u);
  *(_QWORD *)(v23 + 8) = v24;
  *(_QWORD *)this = v24;
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( v22 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25);
    v27[7] = &v29;
    v27[3] = 270LL;
    v27[4] = 45LL;
    v27[5] = this;
    v27[6] = a2;
    WdLogEvent5_WdCriticalError(v27);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 40632LL) && (_DWORD)v6 )
  {
    v28 = v13;
    do
    {
      VIDMM_GLOBAL::RecordPageMappingHistory(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL), v30, *v28++, 1LL, 2, 0LL, v29);
      --v7;
    }
    while ( v7 );
  }
  operator delete(v13);
  result = 0LL;
  *((_QWORD *)a2 + 54) = v9;
  return result;
}
