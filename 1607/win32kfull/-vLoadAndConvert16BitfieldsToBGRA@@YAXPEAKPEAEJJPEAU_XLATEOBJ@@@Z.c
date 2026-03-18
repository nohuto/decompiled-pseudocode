/*
 * XREFs of ?vLoadAndConvert16BitfieldsToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02BFC30
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00F95E0 (XLATEOBJ_iXlate.c)
 */

void __fastcall vLoadAndConvert16BitfieldsToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4, XLATEOBJ *pxlo)
{
  __int64 v5; // rdi
  unsigned __int8 *v7; // rbx
  unsigned __int64 v8; // rsi
  ULONG v9; // eax

  v5 = 0LL;
  v7 = &a2[2 * a3];
  v8 = (unsigned __int64)(2LL * a4 + 1) >> 1;
  if ( v7 > &v7[2 * a4] )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      v9 = XLATEOBJ_iXlate(pxlo, *(unsigned __int16 *)v7);
      v7 += 2;
      ++v5;
      *a1++ = v9 | 0xFF000000;
    }
    while ( v5 != v8 );
  }
}
