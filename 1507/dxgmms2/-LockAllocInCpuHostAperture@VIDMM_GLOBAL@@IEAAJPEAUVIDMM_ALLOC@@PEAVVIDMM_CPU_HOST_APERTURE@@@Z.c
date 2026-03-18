/*
 * XREFs of ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C004EBD8
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C004EEA4 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011BDC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011C90 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C004B9E4 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockAllocInCpuHostAperture(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        struct VIDMM_CPU_HOST_APERTURE *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID v15; // r14
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  v3 = *a2;
  P = 0LL;
  v6 = *v3;
  LODWORD(v9) = VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture(this, a2, a3, (struct _MDL **)&P);
  if ( (int)v9 >= 0 )
  {
    v15 = P;
    v16 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, __int64, __int64, PVOID, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(**(_QWORD **)(v3[1] + 24) + 48LL))(
            *(_QWORD *)(v3[1] + 24),
            this,
            v3[3],
            1LL,
            P,
            *(_QWORD *)(v6 + 16),
            0LL,
            0LL,
            0,
            v6);
    v9 = v16;
    if ( v16 >= 0 )
    {
      *((_BYTE *)v3 + 32) |= 1u;
      *(_BYTE *)(v6 + 95) = 1;
      return (unsigned int)v9;
    }
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = v9;
    WdLogEvent5_WdAssertion(v21);
    ExFreePoolWithTag(v15, 0);
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(v8, v7, v10, v11);
    *(_QWORD *)(v12 + 24) = 20166LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *(_QWORD *)(v6 + 432) )
    VIDMM_CPU_HOST_APERTURE::UnmapRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v6);
  VIDMM_CPU_HOST_APERTURE::ReleaseRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v6, v13, v14);
  return (unsigned int)v9;
}
