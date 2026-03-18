/*
 * XREFs of XEPATHOBJ_vConstructHPATH @ 0x1401DEAA8
 * Callers:
 *     XEPATHOBJ_vConstructHPATHWrap @ 0x1401DEA90 (XEPATHOBJ_vConstructHPATHWrap.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHPATH__@@@Z @ 0x1401DEB20 (-vLock@EPATHOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHPATH__@@@Z.c)
 */

void __fastcall XEPATHOBJ_vConstructHPATH(EPATHOBJ *this, struct HPATH__ *a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax

  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 28) )
  {
    PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 28) = 1;
  }
  v4 = Gre::Base::Globals(this);
  EPATHOBJ::vLock(this, v4, a2);
}
