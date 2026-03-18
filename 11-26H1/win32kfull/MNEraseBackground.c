/*
 * XREFs of MNEraseBackground @ 0x1402FA5BC
 * Callers:
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     GrePatBlt @ 0x1400AD26C (GrePatBlt.c)
 *     GreSetBrushOrg @ 0x14012768C (GreSetBrushOrg.c)
 *     GreGetBrushOrg @ 0x140242288 (GreGetBrushOrg.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 */

__int64 __fastcall MNEraseBackground(Gre::Base *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v10; // r14d
  int v11; // edi
  int v12; // eax
  unsigned int v13; // edx
  int v14; // r8d
  _QWORD *v15; // rax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF

  v21 = 0LL;
  v10 = 1;
  GreGetBrushOrg((HDC)a1, &v21);
  v11 = 3;
  v12 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL);
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 116);
    if ( (v12 & 8) != 0 )
    {
      v11 = 0;
      LODWORD(v21) = 0;
      v14 = -*(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(a2, v13) + 68LL);
    }
    else
    {
      v11 = -3;
      LODWORD(v21) = -3;
      v15 = (_QWORD *)MNGetpItemFromIndex(a2, v13);
      v16 = *(_DWORD *)(*v15 + 68LL);
      v14 = -3 - *(_DWORD *)(GetDpiMetricsForCurrentThread(*v15, v17, v18) + 28) - v16;
    }
    HIDWORD(v21) = v14;
    goto LABEL_8;
  }
  if ( (v12 & 8) != 0 )
  {
    v21 = 0x300000003LL;
    v14 = 3;
LABEL_8:
    GreSetBrushOrg((HDC)a1, v11, v14, &v21);
    goto LABEL_10;
  }
  v10 = 0;
LABEL_10:
  v19 = GreSelectBrush(a1, *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL));
  GrePatBlt(a1, a3, a4, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg((HDC)a1, v21, SHIDWORD(v21), 0LL);
  return GreSelectBrush(a1, v19);
}
