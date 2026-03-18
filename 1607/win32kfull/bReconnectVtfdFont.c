/*
 * XREFs of bReconnectVtfdFont @ 0x1C0245514
 * Callers:
 *     vtfdQueryFontFile @ 0x1C012F7D0 (vtfdQueryFontFile.c)
 *     vtfdQueryFontData @ 0x1C014D798 (vtfdQueryFontData.c)
 *     vtfdQueryAdvanceWidths @ 0x1C0245584 (vtfdQueryAdvanceWidths.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00C20D4 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bReconnectVtfdFont(__int64 a1)
{
  int v2; // eax
  int v3; // r8d
  __int64 v5; // rdx

  if ( (unsigned int)(*(_DWORD *)a1 - 1) > 1 )
    return 0LL;
  v2 = EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 8), (_QWORD *)(a1 + 16), (_DWORD *)(a1 + 24), 1);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  if ( *(int *)(a1 + 36) > 0 )
  {
    v5 = a1 + 40;
    do
    {
      ++v3;
      *(_QWORD *)v5 = *(_QWORD *)(a1 + 16) + *(int *)(v5 + 8);
      v5 += 48LL;
    }
    while ( v3 < *(_DWORD *)(a1 + 36) );
  }
  *(_DWORD *)(a1 + 28) &= ~1u;
  return 1LL;
}
