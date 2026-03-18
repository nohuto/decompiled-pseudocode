/*
 * XREFs of ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00E6ED4
 * Callers:
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C003CA20 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbLengthW(const unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rdx
  const unsigned __int16 *v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  int v8; // ecx

  v3 = a2 >> 1;
  v5 = a1;
  v6 = 0LL;
  if ( !a1 )
    goto LABEL_8;
  if ( v3 > 0x7FFFFFFF )
    goto LABEL_8;
  v7 = v3;
  v8 = 0;
  if ( !v3 )
    goto LABEL_8;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v7;
  }
  while ( v7 );
  if ( v7 )
    v6 = v3 - v7;
  else
LABEL_8:
    v8 = -2147024809;
  if ( a3 )
  {
    if ( v8 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v6;
  }
  return (unsigned int)v8;
}
