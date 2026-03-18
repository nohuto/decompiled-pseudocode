/*
 * XREFs of ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C004B9E4
 * Callers:
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C004EBD8 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C005FEDC (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 * Callees:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001133C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0011524 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00117DC (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011B34 (-ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        struct VIDMM_CPU_HOST_APERTURE *a3,
        struct _MDL **a4)
{
  __int64 *v4; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  struct _MDL *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax

  v4 = *a2;
  v7 = **a2;
  if ( !VIDMM_CPU_HOST_APERTURE::ReclaimRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7) )
  {
    v10 = VIDMM_CPU_HOST_APERTURE::AcquireRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    if ( v10 < 0 )
    {
      v12 = WdLogNewEntry5_WdWarning(v9, v8, v11);
      *(_QWORD *)(v12 + 24) = v7;
      WdLogEvent5_WdWarning(v12);
      return (unsigned int)v10;
    }
    v10 = VIDMM_CPU_HOST_APERTURE::MapRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    if ( v10 < 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v17 + 24) = v7;
      WdLogEvent5_WdWarning(v17);
LABEL_9:
      *a4 = 0LL;
      return (unsigned int)v10;
    }
  }
  v18 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
          a3,
          (void *)v4[2],
          (const struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v7 + 456),
          *(_QWORD *)(v7 + 136),
          *(_QWORD *)(v7 + 16));
  if ( !v18 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
    *(_QWORD *)(v23 + 24) = 20130LL;
    WdLogEvent5_WdAssertion(v23);
    v10 = -1073741801;
    goto LABEL_9;
  }
  *a4 = v18;
  return 0LL;
}
