/*
 * XREFs of ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00125C0
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C006D5D0 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C001245C (-CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C004B970 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::MapRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r12
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
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // r14
  __int64 result; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 v32; // [rsp+38h] [rbp-50h]
  __int16 v33; // [rsp+3Ah] [rbp-4Eh]
  unsigned __int64 v34; // [rsp+40h] [rbp-48h]
  PVOID v35; // [rsp+48h] [rbp-40h]
  _QWORD *v36; // [rsp+50h] [rbp-38h]

  if ( *((_QWORD *)a2 + 58) )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v27[3] = 270LL;
    v27[4] = 44LL;
    v27[5] = this;
    v27[6] = a2;
    v27[7] = 0LL;
    WdLogEvent5_WdCriticalError(v27);
  }
  v6 = *(unsigned int *)(*((_QWORD *)this + 6) + 368LL);
  v7 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 123));
  v8 = v7;
  v9 = 4 * v7;
  if ( !is_mul_ok(v7, 4uLL) )
    v9 = -1LL;
  v10 = operator new(v9, 0x36346956u, PagedPool);
  if ( !v10 )
  {
    v28 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v28);
    return 3221225495LL;
  }
  v11 = 8 * v7;
  if ( !is_mul_ok(v7, 8uLL) )
    v11 = -1LL;
  v12 = operator new(v11, 0x36346956u, PagedPool);
  if ( !v12 )
  {
    v29 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v29);
    operator delete[](v10);
    return 3221225495LL;
  }
  VIDMM_CPU_HOST_APERTURE::CopyRangeToArray(
    (unsigned __int64)this,
    (unsigned int *)v10,
    (unsigned int)v7,
    (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 488));
  if ( *((_QWORD *)a2 + 17) )
    v13 = *((_QWORD *)a2 + 18);
  else
    v13 = *((_QWORD *)a2 + 27);
  v14 = v12;
  v15 = v13 / v6;
  v16 = v7 + v15;
  while ( v15 < v16 )
    *v14++ = v15++;
  v17 = *((_QWORD *)a2 + 5);
  if ( v17 )
    v18 = *(_QWORD *)(v17 + 16);
  else
    v18 = *((_QWORD *)a2 + 6);
  v19 = *((_QWORD *)this + 6);
  v31 = v18;
  v34 = v7;
  v35 = v10;
  v36 = v12;
  if ( (*(_DWORD *)(v19 + 56) & 0x1000) != 0 )
    v32 = 0;
  else
    v32 = *(_WORD *)(v19 + 16) + 1;
  v33 = *(_WORD *)(v19 + 372);
  v20 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64))DxgCoreInterface[38])(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 24LL) + 2136LL),
          &v31,
          1LL);
  v23 = *(_QWORD *)this;
  v24 = (_QWORD *)((char *)a2 + 472);
  if ( *(VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)this + 8LL) != this )
    __fastfail(3u);
  *v24 = v23;
  *((_QWORD *)a2 + 60) = this;
  *(_QWORD *)(v23 + 8) = v24;
  *(_QWORD *)this = v24;
  if ( v20 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v21, v22);
    v30[7] = &v31;
    v30[3] = 270LL;
    v30[4] = 45LL;
    v30[5] = this;
    v30[6] = a2;
    WdLogEvent5_WdCriticalError(v30);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 40952LL) && (_DWORD)v7 )
  {
    v25 = v12;
    do
    {
      VIDMM_GLOBAL::RecordPageMappingHistory(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL), v32, *v25++, 1LL, 2, 0LL, v31);
      --v8;
    }
    while ( v8 );
  }
  operator delete[](v12);
  result = 0LL;
  *((_QWORD *)a2 + 58) = v10;
  return result;
}
