/*
 * XREFs of EngCreatePath @ 0x140296890
 * Callers:
 *     EngLineTo @ 0x1401874C0 (EngLineTo.c)
 *     VerifierEngCreatePath @ 0x1403498D0 (VerifierEngCreatePath.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHPATH__@@@Z @ 0x1401DEB20 (-vLock@EPATHOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHPATH__@@@Z.c)
 */

PATHOBJ *EngCreatePath(void)
{
  Gre::Base *v0; // rcx
  EPATHOBJ *v1; // rbx
  struct Gre::Base::SESSION_GLOBALS *v2; // rax
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  struct HPATH__ **v5; // [rsp+28h] [rbp-80h]

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v4);
  if ( v5 && (v1 = (EPATHOBJ *)Win32AllocPoolZInit(80LL, 1952542791LL)) != 0LL )
  {
    v2 = Gre::Base::Globals(v0);
    EPATHOBJ::vLock(v1, v2, *v5);
  }
  else
  {
    v1 = 0LL;
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v4);
  return (PATHOBJ *)v1;
}
