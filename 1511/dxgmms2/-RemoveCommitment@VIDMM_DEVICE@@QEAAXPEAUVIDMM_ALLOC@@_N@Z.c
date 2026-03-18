/*
 * XREFs of ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0053060
 * Callers:
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0049C60 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060E78 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067B40 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0043BC8 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00544D4 (-RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPE.c)
 */

void __fastcall VIDMM_DEVICE::RemoveCommitment(VIDMM_DEVICE *this, __int64 **a2, char a3)
{
  __int64 v6; // rsi
  VIDMM_PROCESS *v7; // r11
  struct VIDMM_SEGMENT *v8; // rcx
  __int64 v9; // r9
  __int64 *v10; // rbx
  __int64 *v11; // r8
  __int64 **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 **v15; // rcx

  v6 = **a2;
  v7 = (VIDMM_PROCESS *)(*a2)[1];
  if ( (*(_DWORD *)(v6 + 76) & 0x20000000) != 0 )
  {
    v9 = *(_DWORD *)(v6 + 80) & 0x1F;
    v8 = *(struct VIDMM_SEGMENT **)(*(_QWORD *)(*(_QWORD *)this + 3712LL) + 8 * v9);
  }
  else
  {
    v8 = *(struct VIDMM_SEGMENT **)(v6 + 128);
    LODWORD(v9) = *((_DWORD *)v8 + 5);
  }
  v10 = (__int64 *)(a2 + 7);
  v11 = a2[7];
  v12 = (__int64 **)a2[8];
  v13 = *((_QWORD *)this + 5) + 56LL * (unsigned int)v9;
  if ( (__int64 **)v11[1] != a2 + 7 || *v12 != v10 )
    __fastfail(3u);
  *v12 = v11;
  v11[1] = (__int64)v12;
  --*(_DWORD *)v13;
  *(_QWORD *)(v13 + 8) -= *(_QWORD *)(v6 + 16);
  *v10 = 0LL;
  a2[8] = 0LL;
  VIDMM_PROCESS::RemoveCommitment(
    v7,
    (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v13,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 184LL),
    v8,
    *(_DWORD *)v13 == 0,
    (struct _VIDMM_GLOBAL_ALLOC *)v6);
  --*(_DWORD *)(v6 + 152);
  *((_DWORD *)a2 + 7) &= 0xFFFFFFEC;
  if ( dword_1C002F3C8 )
    VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(*(VIDMM_GLOBAL **)this, (struct VIDMM_ALLOC *)a2);
  if ( a3 )
  {
    v14 = *(_QWORD *)this + 3720LL;
    v15 = *(__int64 ***)(*(_QWORD *)this + 3728LL);
    *v10 = v14;
    a2[8] = (__int64 *)v15;
    if ( *v15 != (__int64 *)v14 )
      __fastfail(3u);
    *v15 = v10;
    *(_QWORD *)(v14 + 8) = v10;
  }
}
