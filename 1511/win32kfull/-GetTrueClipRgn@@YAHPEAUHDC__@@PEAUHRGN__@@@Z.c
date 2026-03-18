/*
 * XREFs of ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C01474DC
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006A524 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 * Callees:
 *     GreGetRandomRgn @ 0x1C01475A0 (GreGetRandomRgn.c)
 */

__int64 __fastcall GetTrueClipRgn(HDC a1, HRGN a2)
{
  __int64 EmptyRgn; // rbx
  unsigned int v5; // ebp
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+44h] [rbp+1Ch]

  EmptyRgn = CreateEmptyRgn(a1, a2);
  v5 = GreCopyVisRgn(a1, a2);
  if ( !(unsigned int)GreGetDCOrg(a1, &v7) )
    return 0LL;
  if ( (unsigned int)GreGetRandomRgn(a1) )
  {
    GreOffsetRgn(EmptyRgn, v7, v8);
    v5 = GreCombineRgn(a2, a2, EmptyRgn, 1LL);
  }
  GreOffsetRgn(a2, -v7, -v8);
  GreDeleteObject(EmptyRgn);
  return v5;
}
