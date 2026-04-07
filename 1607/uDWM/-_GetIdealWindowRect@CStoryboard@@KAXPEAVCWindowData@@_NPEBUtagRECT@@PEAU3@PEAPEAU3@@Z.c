/*
 * XREFs of ?_GetIdealWindowRect@CStoryboard@@KAXPEAVCWindowData@@_NPEBUtagRECT@@PEAU3@PEAPEAU3@@Z @ 0x180004108
 * Callers:
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180004088 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_GetIdealWindowRect(
        struct CWindowData *a1,
        char a2,
        const struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT **a5)
{
  const RECT *v8; // rdi
  int v9; // ecx
  struct tagRECT *v10; // rsi
  struct tagRECT v11; // xmm0

  v8 = (const RECT *)((char *)a1 + 604);
  if ( a2 )
  {
    v10 = (struct tagRECT *)((char *)a1 + 588);
  }
  else
  {
    v8 = (const RECT *)((char *)a1 + 636);
    v10 = (struct tagRECT *)((char *)a1 + 620);
  }
  v9 = a2 != 0 ? 0x1000000 : 0x800000;
  if ( (v9 & *((_DWORD *)a1 + 146)) != v9 || IsRectEmpty(v8) )
  {
    if ( a3 )
      v11 = *a3;
    else
      v11 = (struct tagRECT)*((_OWORD *)a1 + 3);
    *a4 = v11;
    if ( a5 )
      *a5 = 0LL;
  }
  else
  {
    *a4 = *v8;
    if ( a5 )
      *a5 = v10;
  }
}
