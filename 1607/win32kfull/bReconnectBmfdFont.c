/*
 * XREFs of bReconnectBmfdFont @ 0x1C0018740
 * Callers:
 *     BmfdQueryAdvanceWidths @ 0x1C000B76C (BmfdQueryAdvanceWidths.c)
 *     BmfdQueryFontData @ 0x1C0018508 (BmfdQueryFontData.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00C20D4 (EngMapFontFileFDInternal.c)
 */

__int64 __fastcall bReconnectBmfdFont(__int64 a1)
{
  int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h]

  EngAcquireSemaphore(ghsemBMFD);
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    v2 = 0;
    if ( !(unsigned int)EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 16)) )
      goto LABEL_3;
    if ( *(int *)(a1 + 28) > 0 )
    {
      v4 = a1 + 40;
      do
      {
        ++v2;
        *(_QWORD *)v4 = v5 + *(int *)(v4 + 8);
        v4 += 88LL;
      }
      while ( v2 < *(_DWORD *)(a1 + 28) );
    }
    *(_DWORD *)(a1 + 4) &= ~1u;
  }
  v2 = 1;
LABEL_3:
  EngReleaseSemaphore(ghsemBMFD);
  return (unsigned int)v2;
}
