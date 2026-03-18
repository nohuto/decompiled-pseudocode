/*
 * XREFs of DxgkDestroyAllocation @ 0x1C0133B80
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0062C10 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyAllocation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  ULONG64 v4; // rdi
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r10
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  unsigned int *v11[2]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2006);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_OWORD *)v3 = *(_OWORD *)v4;
    *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)(v4 + 16);
    v8 = DxgkDestroyAllocationHelper(
           Current,
           *v3,
           *(unsigned int *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
           *(unsigned int **)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
           *(_DWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
           0);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v9, 2006);
  return v8;
}
