/*
 * XREFs of ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x18000D360
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A804 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x18000C0B0 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoSibling(__int64 a1, struct CVisual **a2)
{
  CVisual *v2; // r8
  int v5; // ecx
  unsigned int v6; // r11d
  struct CVisual *ChildAt; // rax
  unsigned int v8; // r9d
  __int64 v9; // r10
  int v10; // r11d
  __int64 v12; // rdx

  v2 = *(CVisual **)(a1 + 16);
  *a2 = 0LL;
  if ( v2
    && (*(_DWORD *)(a1 + 28) == 1
     && (v5 = *(_DWORD *)(a1 + 24), v5 != -1)
     && ((v12 = *((_QWORD *)v2 + 17), (v12 & 2) == 0)
       ? (LODWORD(v12) = v12 & 1)
       : (v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL)),
         v5 + 1 < (unsigned int)v12)
     || !*(_DWORD *)(a1 + 28) && (v5 = *(_DWORD *)(a1 + 24)) != 0) )
  {
    v6 = v5 + 1;
    if ( *(_DWORD *)(a1 + 28) != 1 )
      v6 = v5 - 1;
    ChildAt = CVisual::GetChildAt(v2, v6);
    *(_QWORD *)(v9 + 8) = ChildAt;
    *a2 = ChildAt;
    *(_DWORD *)(v9 + 24) = v10;
  }
  else
  {
    return 1;
  }
  return v8;
}
