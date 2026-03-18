/*
 * XREFs of MiLockTrackerCompare @ 0x140214134
 * Callers:
 *     MiAddMdlTracker @ 0x140213DCC (MiAddMdlTracker.c)
 *     MiFreeMdlTracker @ 0x140213FEC (MiFreeMdlTracker.c)
 *     MmUpdateMdlTracker @ 0x140214574 (MmUpdateMdlTracker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLockTrackerCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
