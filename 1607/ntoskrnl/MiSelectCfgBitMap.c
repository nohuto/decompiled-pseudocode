/*
 * XREFs of MiSelectCfgBitMap @ 0x140429A6C
 * Callers:
 *     MiCommitVadCfgBits @ 0x140429850 (MiCommitVadCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1404F42BC (MiCfgMarkValidEntries.c)
 * Callees:
 *     MiSelectBitMapForImage @ 0x14046E7F8 (MiSelectBitMapForImage.c)
 */

__int64 __fastcall MiSelectCfgBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( !*(_QWORD *)(a1 + 1064) || a2 >= 0x100000000LL || a3 && (unsigned int)MiSelectBitMapForImage(a3) )
    return qword_140327F90 + 276840664;
  else
    return qword_140327F90 + 276840688;
}
