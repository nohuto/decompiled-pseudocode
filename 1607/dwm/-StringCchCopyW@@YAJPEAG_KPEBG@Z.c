/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14000481C
 * Callers:
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x140004D60 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  __int64 v3; // rdx
  unsigned int v4; // r9d
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax

  v3 = 94LL;
  v4 = 0;
  v5 = a3 - a1;
  while ( v3 != -2147483552 )
  {
    v6 = *(_WORD *)&a1[v5];
    if ( !v6 )
      break;
    *(_WORD *)a1 = v6;
    a1 += 2;
    if ( !--v3 )
    {
      a1 -= 2;
      v4 = -2147024774;
      break;
    }
  }
  *(_WORD *)a1 = 0;
  return v4;
}
