/*
 * XREFs of KeGetBugMessageText @ 0x1401D4C3C
 * Callers:
 *     KiDisplayBlueScreen @ 0x1401D4F98 (KiDisplayBlueScreen.c)
 * Callees:
 *     <none>
 */

char __fastcall KeGetBugMessageText(unsigned int a1, __int64 a2)
{
  char v3; // r9
  _DWORD *v4; // rax
  __int64 i; // rcx
  unsigned __int16 *v6; // r8
  __int64 j; // rcx
  unsigned __int16 *v8; // r8
  __int64 v9; // rax

  v3 = 0;
  if ( KiBugCodeMessages )
  {
    v4 = (char *)KiBugCodeMessages + 4;
    for ( i = *(unsigned int *)KiBugCodeMessages; i; --i )
    {
      if ( a1 >= *v4 && a1 <= v4[1] )
      {
        v6 = (unsigned __int16 *)((char *)KiBugCodeMessages + (unsigned int)v4[2]);
        for ( j = a1 - *v4; j; --j )
          v6 = (unsigned __int16 *)((char *)v6 + *v6);
        v8 = v6 + 2;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v8 + v9) );
        *(_QWORD *)(a2 + 8) = v8;
        *(_WORD *)a2 = v9;
        *(_WORD *)(a2 + 2) = v9;
        return 1;
      }
      v4 += 3;
    }
  }
  return v3;
}
