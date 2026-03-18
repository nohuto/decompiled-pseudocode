/*
 * XREFs of MiSelectCfgBitMap @ 0x140421944
 * Callers:
 *     MiCommitVadCfgBits @ 0x14000FE10 (MiCommitVadCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1404FBBC8 (MiCfgMarkValidEntries.c)
 * Callees:
 *     MiSelectBitMapForImage @ 0x14046BA2C (MiSelectBitMapForImage.c)
 */

unsigned __int64 __fastcall MiSelectCfgBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( !*(_QWORD *)(a1 + 1064) || a2 >= 0x100000000LL || a3 && (unsigned int)MiSelectBitMapForImage(a3) )
    return 0xFFFFF58010804268uLL;
  else
    return 0xFFFFF58010804280uLL;
}
