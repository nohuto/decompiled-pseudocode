/*
 * XREFs of ?vConvertAndSaveBGRAToRGB16Bitfields@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BFA20
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00F95E0 (XLATEOBJ_iXlate.c)
 */

ULONG __fastcall vConvertAndSaveBGRAToRGB16Bitfields(__int64 a1, ULONG *a2, signed int a3, int a4, XLATEOBJ *pxlo)
{
  __int64 v5; // rdi
  _WORD *v7; // rbx
  ULONG result; // eax
  unsigned __int64 v9; // rsi

  v5 = 0LL;
  v7 = (_WORD *)(a1 + 2LL * a4);
  result = a3;
  v9 = (unsigned __int64)(2LL * a3 + 1) >> 1;
  if ( v7 > &v7[a3] )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      result = XLATEOBJ_iXlate(pxlo, *a2);
      ++v5;
      *v7 = result;
      ++a2;
      ++v7;
    }
    while ( v5 != v9 );
  }
  return result;
}
