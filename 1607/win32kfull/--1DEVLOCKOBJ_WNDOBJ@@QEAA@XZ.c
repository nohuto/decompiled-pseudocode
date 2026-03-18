/*
 * XREFs of ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C026514C
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0266614 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSwapBuffers @ 0x1C02B6F90 (NtGdiSwapBuffers.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0266F38 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ(DEVLOCKOBJ_WNDOBJ *this)
{
  DEVLOCKOBJ::vDestructorNULL(this);
  if ( *((_DWORD *)this + 30) )
    UserLeaveUserCritSec();
  DEVLOCKOBJ::vDestructor(this);
  DCOBJ::~DCOBJ((DEVLOCKOBJ_WNDOBJ *)((char *)this + 32));
}
