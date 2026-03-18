/*
 * XREFs of ?vAltCheckLock@XEPALOBJ2@@QEAAXPEAUHPALETTE__@@@Z @ 0x1C00B1920
 * Callers:
 *     bDeletePalette @ 0x1C005A8C0 (bDeletePalette.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C003AFC0 (HmgShareLockCheck.c)
 */

void __fastcall XEPALOBJ2::vAltCheckLock(XEPALOBJ2 *this, HPALETTE a2)
{
  *(_QWORD *)this = HmgShareLockCheck((int)a2, 8);
}
