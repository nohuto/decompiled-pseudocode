/*
 * XREFs of ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C007B1FC
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0043990 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0013530 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C001365C (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00678E4 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockAllocInCpuHostAperture(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        struct VIDMM_CPU_HOST_APERTURE *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  PVOID v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  v3 = *a2;
  P = 0LL;
  v6 = *v3;
  v7 = VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture(this, a2, a3, (struct _MDL **)&P);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v12 = P;
    v13 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, __int64, __int64, PVOID, _QWORD, _QWORD, _QWORD, _DWORD, __int64))(**(_QWORD **)(v3[1] + 24) + 48LL))(
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
    v9 = v13;
    if ( v13 >= 0 )
    {
      *((_BYTE *)v3 + 32) |= 1u;
      *(_BYTE *)(v6 + 95) = 1;
      return (unsigned int)v9;
    }
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = v9;
    WdLogEvent5_WdAssertion(v18);
    ExFreePoolWithTag(v12, 0);
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdWarning(v10);
  }
  if ( *(_QWORD *)(v6 + 432) )
    VIDMM_CPU_HOST_APERTURE::UnmapRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v6, 0);
  if ( *(_DWORD *)(v6 + 456) != -1 )
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(a3, (struct _VIDMM_GLOBAL_ALLOC *)v6, 0LL, v11);
  return (unsigned int)v9;
}
