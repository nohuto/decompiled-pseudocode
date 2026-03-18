/*
 * XREFs of ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C0038500
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005BEBC (-vCleanupDCs@@YAXK@Z.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C00B3438 (HmgIsObjectOwnedByW32Pid.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ENTRYOBJ::bOwnedBy(ENTRYOBJ *this, int a2)
{
  return *((_BYTE *)this + 14) && ((*((_DWORD *)this + 2) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0;
}
