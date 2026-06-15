/*
 * XREFs of WPP_SF_DDDSSS @ 0x18009E29C
 * Callers:
 *     AudioWriteLogHeader @ 0x180038B38 (AudioWriteLogHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_DDDSSS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9)
{
  __int64 v9; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+B8h] [rbp+20h] BYREF

  v14 = a4;
  v9 = -1LL;
  if ( a9 && *a9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a9[v11] );
  }
  if ( a8 && *a8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a8[v12] );
  }
  if ( a7 && *a7 )
  {
    do
      ++v9;
    while ( a7[v9] );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_7f352500bd04dee852eccd7763aed2fc_Traceguids, 11LL, &v14);
}
