/*
 * XREFs of MiSelectBitMapForImage @ 0x14046BA2C
 * Callers:
 *     MiSelectCfgBitMap @ 0x140421944 (MiSelectCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x14046B6E4 (MiUpdateCfgSystemWideBitmap.c)
 *     MiSelectImageBase @ 0x14046B754 (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSelectBitMapForImage(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 14) & 0x40) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(v1 + 51) & 0x10) != 0 && (*(_WORD *)(v1 + 44) & 0x2000) != 0 )
    return 3LL;
  return 2 - (unsigned int)(*(_QWORD *)(a1 + 32) < 0x100000000uLL);
}
