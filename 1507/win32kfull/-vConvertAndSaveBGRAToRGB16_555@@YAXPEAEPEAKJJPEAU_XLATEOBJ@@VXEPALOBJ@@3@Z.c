/*
 * XREFs of ?vConvertAndSaveBGRAToRGB16_555@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02BD6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall vConvertAndSaveBGRAToRGB16_555(__int64 a1, int *a2, int a3, int a4)
{
  __int64 v4; // r10
  _WORD *v6; // r9
  unsigned __int8 result; // al
  _WORD *v8; // rcx
  unsigned __int64 v9; // r8
  int v10; // eax
  int v11; // ecx

  v4 = 0LL;
  v6 = (_WORD *)(a1 + 2LL * a4);
  result = a3;
  v8 = &v6[a3];
  v9 = (unsigned __int64)(2LL * a3 + 1) >> 1;
  if ( v6 > v8 )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      v10 = *a2;
      ++v4;
      v11 = *a2++;
      result = (unsigned __int8)v10 >> 3;
      *v6++ = result | (unsigned __int16)(4 * (BYTE1(v10) & 0xF8 | (32 * (BYTE2(v11) & 0xF8))));
    }
    while ( v4 != v9 );
  }
  return result;
}
