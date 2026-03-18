/*
 * XREFs of ?vConvertAndSaveBGRATo32Bitfields@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BC850
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00DF4B0 (XLATEOBJ_iXlate.c)
 */

ULONG __fastcall vConvertAndSaveBGRATo32Bitfields(__int64 a1, ULONG *a2, signed int a3, int a4, XLATEOBJ *pxlo)
{
  __int64 v5; // rsi
  ULONG *v6; // rbx
  unsigned __int64 v7; // rdi
  ULONG result; // eax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi

  v5 = 0LL;
  v6 = a2;
  v7 = a1 + 4LL * a4;
  result = a3;
  v9 = (unsigned __int64)(4LL * a3 + 3) >> 2;
  if ( v7 > v7 + 4LL * a3 )
    v9 = 0LL;
  if ( v9 )
  {
    v10 = v7 - (_QWORD)a2;
    do
    {
      result = XLATEOBJ_iXlate(pxlo, *v6);
      ++v5;
      *(ULONG *)((char *)v6++ + v10) = result;
    }
    while ( v5 != v9 );
  }
  return result;
}
