/*
 * XREFs of ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C01141CC
 * Callers:
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0076920 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C010D750 (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     CalcWindowRgn @ 0x1C0056EE4 (CalcWindowRgn.c)
 *     DecPaintCount @ 0x1C005CB80 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 */

unsigned __int64 __fastcall GetNCUpdateRgn(struct tagWND *a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  int v3; // esi
  __int64 EmptyRgnPublic; // rax
  int v7; // eax

  v2 = *((_QWORD *)a1 + 20);
  v3 = a2;
  if ( v2 <= 1 )
    return v2;
  EmptyRgnPublic = CreateEmptyRgnPublic(a1, a2);
  v2 = EmptyRgnPublic;
  if ( EmptyRgnPublic )
  {
    if ( (unsigned int)GreCombineRgn(EmptyRgnPublic, *((_QWORD *)a1 + 20), 0LL, 5LL) )
      goto LABEL_5;
    GreDeleteObject(v2);
  }
  v2 = 1LL;
LABEL_5:
  if ( v3 )
  {
    CalcWindowRgn((__int64)a1, ghrgnInv2, 1);
    v7 = GreCombineRgn(*((_QWORD *)a1 + 20), *((_QWORD *)a1 + 20), ghrgnInv2, 1LL);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        GreDeleteObject(*((_QWORD *)a1 + 20));
        *((_QWORD *)a1 + 20) = 0LL;
        SetOrClrWF(0, a1, 0x120u, 1);
        if ( (*((_BYTE *)a1 + 41) & 0x10) == 0 )
          DecPaintCount((__int64)a1);
      }
    }
    else
    {
      GreDeleteObject(*((_QWORD *)a1 + 20));
      *((_QWORD *)a1 + 20) = 1LL;
    }
  }
  return v2;
}
