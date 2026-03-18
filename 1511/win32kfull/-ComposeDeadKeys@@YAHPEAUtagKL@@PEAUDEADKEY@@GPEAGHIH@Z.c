/*
 * XREFs of ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C0244950
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0099650 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComposeDeadKeys(
        struct tagKL *a1,
        struct DEADKEY *a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int a7)
{
  int v9; // ecx

  if ( a5 < 1 )
    return 0LL;
  v9 = a3 | (*((unsigned __int16 *)a1 + 37) << 16);
  if ( a2 )
  {
    if ( !a7 && (a6 & 4) == 0 )
      *((_WORD *)a1 + 37) = 0;
    while ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == v9 )
      {
        if ( (*((_BYTE *)a2 + 6) & 1) == 0 )
        {
          *a4 = *((_WORD *)a2 + 2);
          return 1LL;
        }
        if ( !a7 && (a6 & 4) == 0 )
          *((_WORD *)a1 + 37) = *((_WORD *)a2 + 2);
        return 0xFFFFFFFFLL;
      }
      a2 = (struct DEADKEY *)((char *)a2 + 8);
    }
  }
  *a4 = HIWORD(v9);
  if ( a5 <= 1 )
    return 1LL;
  a4[1] = v9;
  return 2LL;
}
