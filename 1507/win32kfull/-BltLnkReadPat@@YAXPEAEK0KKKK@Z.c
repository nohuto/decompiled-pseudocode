/*
 * XREFs of ?BltLnkReadPat@@YAXPEAEK0KKKK@Z @ 0x1C02D2720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BltLnkReadPat(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v8; // r10
  unsigned int v9; // edx
  unsigned __int8 v10; // cl

  v8 = a5;
  v9 = a6;
  switch ( a7 )
  {
    case 2u:
      v9 = 2 * a6;
      break;
    case 3u:
      v9 = 3 * a6;
      break;
    case 4u:
      v9 = 4 * a6;
      break;
  }
  for ( ; v9; --v9 )
  {
    if ( (_DWORD)v8 == a4 )
      v8 = 0LL;
    v10 = a3[v8];
    v8 = (unsigned int)(v8 + 1);
    *a1++ = v10;
  }
}
