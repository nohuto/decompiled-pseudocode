/*
 * XREFs of ?bCleanupFontTable@@YAHPEAPEAVPFT@@@Z @ 0x1C0107C0C
 * Callers:
 *     ?MultiUserGreCleanupAllFonts@@YAXXZ @ 0x1C0107B90 (-MultiUserGreCleanupAllFonts@@YAXXZ.c)
 * Callees:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0022D74 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C0107C9C (-bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z.c)
 */

__int64 __fastcall bCleanupFontTable(struct PFT **a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // edi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v9 = (__int64)*a1;
  v1 = v9;
  if ( v9 )
  {
    v4 = PFTOBJ::bUnloadAllButPermanentFonts((PFTOBJ *)&v9);
    v7 = v4;
    if ( *(_QWORD *)(v1 + 8) )
      v7 = bCleanupFontHash((struct _FONTHASH **)(v1 + 8)) & v4;
    if ( *(_QWORD *)v1 )
      v7 &= bCleanupFontHash((struct _FONTHASH **)v1);
    if ( *(_QWORD *)(v1 + 16) )
      LOBYTE(v7) = bCleanupFontHash((struct _FONTHASH **)(v1 + 16)) & v7;
    if ( !*(_DWORD *)(v1 + 28) )
    {
      Win32FreePool(v1, v5, v6);
      v1 = 0LL;
    }
    v2 = (v1 == 0) & (unsigned __int8)v7;
    *a1 = 0LL;
  }
  return v2;
}
