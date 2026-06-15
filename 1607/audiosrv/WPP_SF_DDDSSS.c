/*
 * XREFs of WPP_SF_DDDSSS @ 0x180083884
 * Callers:
 *     AudioWriteLogHeader @ 0x180032634 (AudioWriteLogHeader.c)
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
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v14; // [rsp+B8h] [rbp+20h] BYREF

  v14 = a4;
  v9 = -1LL;
  if ( a9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(a9 + 2 * v11) );
  }
  if ( a8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(a8 + 2 * v12) );
  }
  if ( a7 )
  {
    do
      ++v9;
    while ( *(_WORD *)(a7 + 2 * v9) );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_483a8a3c775031d59c363eb705791695_Traceguids, 11LL, &v14, 4LL, &a5);
}
