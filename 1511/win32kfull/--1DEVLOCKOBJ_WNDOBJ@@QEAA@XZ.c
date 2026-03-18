/*
 * XREFs of ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C026745C
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02682E4 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSwapBuffers @ 0x1C02B3E30 (NtGdiSwapBuffers.c)
 * Callees:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0268BDC (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ(DEVLOCKOBJ_WNDOBJ *this)
{
  DEVLOCKOBJ::vDestructorNULL(this);
  if ( *((_DWORD *)this + 22) )
    UserLeaveUserCritSec();
  DEVLOCKOBJ::vDestructor(this);
}
