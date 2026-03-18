/*
 * XREFs of ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C000FBB4
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0032A18 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00F49B8 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall auto_rc<DMMVIDEOPRESENTTARGETSET>::reset(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax

  v4 = *a1;
  if ( v4 && a2 != v4 )
    result = ReferenceCounted::Release((ReferenceCounted *)(v4 + 64));
  *a1 = a2;
  return result;
}
