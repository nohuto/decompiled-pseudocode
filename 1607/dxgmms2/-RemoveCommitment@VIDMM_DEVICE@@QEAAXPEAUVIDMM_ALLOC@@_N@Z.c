/*
 * XREFs of ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C005BC70
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004C834 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0052154 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D7AC (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004C8DC (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005CA0C (-RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPE.c)
 */

void __fastcall VIDMM_DEVICE::RemoveCommitment(VIDMM_DEVICE *this, __int64 ***a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 *v7; // rbp
  VIDMM_PROCESS *v8; // r15
  __int64 v9; // rax
  struct VIDMM_SEGMENT *v10; // r9
  __int64 v11; // r8
  __int64 *v12; // rbx
  __int64 **v13; // rcx
  __int64 **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 **v17; // rcx

  v4 = a3;
  v7 = **a2;
  v8 = (VIDMM_PROCESS *)(*a2)[1];
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = this;
  }
  if ( (*((_DWORD *)v7 + 19) & 0x20000000) != 0 )
  {
    v11 = v7[10] & 0x1F;
    v10 = *(struct VIDMM_SEGMENT **)(*(_QWORD *)(*(_QWORD *)this + 3712LL) + 8 * v11);
  }
  else
  {
    v10 = (struct VIDMM_SEGMENT *)v7[17];
    LODWORD(v11) = *((_DWORD *)v10 + 5);
  }
  v12 = (__int64 *)(a2 + 7);
  v13 = a2[7];
  v14 = a2[8];
  v15 = *((_QWORD *)this + 5) + 56LL * (unsigned int)v11;
  if ( v13[1] != (__int64 *)(a2 + 7) || *v14 != v12 )
    __fastfail(3u);
  *v14 = (__int64 *)v13;
  v13[1] = (__int64 *)v14;
  --*(_DWORD *)v15;
  *(_QWORD *)(v15 + 8) -= v7[2];
  *v12 = 0LL;
  a2[8] = 0LL;
  VIDMM_PROCESS::RemoveCommitment(
    v8,
    (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v15,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 200LL),
    v10,
    *(_DWORD *)v15 == 0,
    (struct _VIDMM_GLOBAL_ALLOC *)v7);
  --*((_DWORD *)v7 + 40);
  *((_DWORD *)a2 + 7) &= 0xFFFFFFEC;
  if ( dword_1C00353D4 )
    VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(*(VIDMM_GLOBAL **)this, (struct VIDMM_ALLOC *)a2);
  if ( v4 )
  {
    v16 = *(_QWORD *)this + 3720LL;
    v17 = *(__int64 ***)(*(_QWORD *)this + 3728LL);
    if ( *v17 != (__int64 *)v16 )
      __fastfail(3u);
    *v12 = v16;
    a2[8] = v17;
    *v17 = v12;
    *(_QWORD *)(v16 + 8) = v12;
  }
}
