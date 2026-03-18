/*
 * XREFs of ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00678E4
 * Callers:
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C0067188 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C007B1FC (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 * Callees:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001370C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00138FC (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0013B5C (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 *     ?ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0015090 (-ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        struct VIDMM_CPU_HOST_APERTURE *a3,
        struct _MDL **a4)
{
  __int64 *v4; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _MDL *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax

  v4 = *a2;
  v7 = **a2;
  if ( !VIDMM_CPU_HOST_APERTURE::ReclaimRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7) )
  {
    v9 = VIDMM_CPU_HOST_APERTURE::AcquireRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    if ( v9 < 0 )
    {
      v12 = WdLogNewEntry5_WdWarning(v8);
      *(_QWORD *)(v12 + 24) = v7;
      WdLogEvent5_WdWarning(v12);
      return (unsigned int)v9;
    }
    v9 = VIDMM_CPU_HOST_APERTURE::MapRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v7, v10, v11);
    if ( v9 < 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(v14);
      *(_QWORD *)(v15 + 24) = v7;
      WdLogEvent5_WdWarning(v15);
LABEL_9:
      *a4 = 0LL;
      return (unsigned int)v9;
    }
  }
  v16 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
          a3,
          (void *)v4[2],
          (const struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v7 + 456),
          *(_QWORD *)(v7 + 136),
          *(_QWORD *)(v7 + 16));
  if ( !v16 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = 20542LL;
    WdLogEvent5_WdAssertion(v21);
    v9 = -1073741801;
    goto LABEL_9;
  }
  *a4 = v16;
  return 0LL;
}
