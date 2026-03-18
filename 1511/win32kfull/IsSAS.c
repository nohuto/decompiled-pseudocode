/*
 * XREFs of IsSAS @ 0x1C008438C
 * Callers:
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00FC7C0 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsSAS(unsigned __int8 a1, _DWORD *a2)
{
  struct tagSASKEY near **v2; // r8
  int v3; // r9d
  int v4; // r11d

  v2 = &gSasKeyList;
  v3 = 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)v2 + 1);
    if ( !v4 )
      return 0LL;
    if ( a1 == v4 && gfsSASModifiersDown == *(_DWORD *)v2 )
      break;
    ++v3;
    ++v2;
    if ( v3 >= 2 )
      return 0LL;
  }
  *a2 = gfsSASModifiersDown;
  return 1LL;
}
