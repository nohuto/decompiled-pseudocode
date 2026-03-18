/*
 * XREFs of MiSelectCfgBitMap @ 0x1403F62DC
 * Callers:
 *     MiCommitVadCfgBits @ 0x140037DF0 (MiCommitVadCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1403CAC70 (MiCfgMarkValidEntries.c)
 * Callees:
 *     MiSelectBitMapForImage @ 0x1403C69B0 (MiSelectBitMapForImage.c)
 */

unsigned __int64 __fastcall MiSelectCfgBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( !*(_QWORD *)(a1 + 1064) || a2 >= 0x100000000LL || a3 && (unsigned int)MiSelectBitMapForImage(a3) )
    return 0xFFFFF580108042C0uLL;
  else
    return 0xFFFFF580108042D8uLL;
}
