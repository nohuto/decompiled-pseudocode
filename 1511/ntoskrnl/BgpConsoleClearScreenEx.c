/*
 * XREFs of BgpConsoleClearScreenEx @ 0x1406DE340
 * Callers:
 *     BgpConsoleInitialize @ 0x1406DC398 (BgpConsoleInitialize.c)
 *     BgpConsoleClearScreen @ 0x1406DE320 (BgpConsoleClearScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x14021EDD0 (BgpClearScreen.c)
 */

__int64 BgpConsoleClearScreenEx()
{
  int v0; // edx
  int v1; // eax
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // r10d
  __int64 v5; // rax
  __int64 v6; // rcx

  dword_1402C98A4 = 0;
  dword_1402C98A8 = 0;
  v0 = BgpClearScreen(dword_1402C9870);
  if ( v0 >= 0 )
  {
    v1 = dword_1402C9864;
    v2 = 0LL;
    v3 = 80LL;
    do
    {
      v4 = 0;
      if ( v1 )
      {
        do
        {
          v5 = v4++;
          v6 = 3 * (v2 + v5);
          LOWORD(dword_1402C9860[v6 + 22]) = 32;
          dword_1402C9860[v6 + 21] = dword_1402C9870;
          dword_1402C9860[v6 + 20] = dword_1402C986C;
          v1 = dword_1402C9864;
        }
        while ( v4 < dword_1402C9864 );
      }
      v2 += 25LL;
      --v3;
    }
    while ( v3 );
  }
  return (unsigned int)v0;
}
