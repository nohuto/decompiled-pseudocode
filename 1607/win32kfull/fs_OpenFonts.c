/*
 * XREFs of fs_OpenFonts @ 0x1C001C17C
 * Callers:
 *     bInitInAndOut @ 0x1C001C0B4 (bInitInAndOut.c)
 *     bReloadGlyphSet @ 0x1C001C3C8 (bReloadGlyphSet.c)
 *     bLoadTTF @ 0x1C00207C4 (bLoadTTF.c)
 *     pvHandleKerningPairs @ 0x1C02435A8 (pvHandleKerningPairs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fs_OpenFonts(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 4105LL;
  *(_DWORD *)a2 = 1164;
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_QWORD *)(a2 + 20) = 0LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  if ( !a1 )
    return 4098LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  return result;
}
