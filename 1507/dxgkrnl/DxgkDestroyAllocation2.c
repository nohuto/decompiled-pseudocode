/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C005BED0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C005C100 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  ULONG64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // r10
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v15; // edi
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int *v19[2]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2105);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_OWORD *)v3 = *(_OWORD *)v4;
    *(_QWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)(v4 + 16);
    v10.0 = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS::$D35BDED8E381779C59C0009B00E168F7::$815964D178D3487C3146BEBBE8BF611F *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
    if ( (v10.Value & 0x7FFFFFFC) != 0 )
    {
      v11 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
      *(_QWORD *)(v11 + 24) = 8015LL;
      WdLogEvent5_WdWarning(v11);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v12, &EventProfilerExit, v13, 2105);
      return 3221225485LL;
    }
    else
    {
      v15 = DxgkDestroyAllocationHelper(
              Current,
              *v3,
              *(_DWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
              *(const unsigned int **)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
              *(_DWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
              v10);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(qword_1C00467F0, &EventProfilerExit, v16, 2105);
      return v15;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v18, 2105);
    return 3221225485LL;
  }
}
