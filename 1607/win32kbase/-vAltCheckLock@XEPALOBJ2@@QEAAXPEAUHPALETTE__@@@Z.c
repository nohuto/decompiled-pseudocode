/*
 * XREFs of ?vAltCheckLock@XEPALOBJ2@@QEAAXPEAUHPALETTE__@@@Z @ 0x1C00BF694
 * Callers:
 *     bDeletePalette @ 0x1C005C930 (bDeletePalette.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 */

void __fastcall XEPALOBJ2::vAltCheckLock(XEPALOBJ2 *this, HPALETTE a2)
{
  *(_QWORD *)this = HmgShareLockCheck((unsigned int)a2, 8);
}
