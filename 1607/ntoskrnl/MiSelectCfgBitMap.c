/*
 * XREFs of MiSelectCfgBitMap @ 0x14042893C
 * Callers:
 *     MiCommitVadCfgBits @ 0x140428720 (MiCommitVadCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1404D7248 (MiCfgMarkValidEntries.c)
 * Callees:
 *     MiSelectBitMapForImage @ 0x14046D6C8 (MiSelectBitMapForImage.c)
 */

__int64 __fastcall MiSelectCfgBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( !*(_QWORD *)(a1 + 1064) || a2 >= 0x100000000LL || a3 && (unsigned int)MiSelectBitMapForImage(a3) )
    return qword_140327FD0 + 276840664;
  else
    return qword_140327FD0 + 276840688;
}
