/*
 * XREFs of ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18000FFD0
 * Callers:
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x180010C2C (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C850 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180070098 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x18000F7C4 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CAnimationScheduler::_ShouldTrack(CAnimationScheduler *this, HWND *a2, struct CStoryboard *a3, char a4)
{
  char v4; // bl
  HWND *v9; // rdi

  v4 = 0;
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( *((_DWORD *)a3 + 6) == 4 || !CStoryboard::HasAnimationComponent(a3, a2[5], 0) )
      return v4;
    return 1;
  }
  v9 = a2;
  if ( a2 )
  {
    while ( (*(unsigned int (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 88LL))(
              a3,
              *((unsigned int *)v9 + 146)) == -1 )
    {
      v9 = (HWND *)v9[66];
      if ( !v9 )
        return v4;
    }
    if ( a4
      || ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 96LL))(
            a3,
            *((unsigned int *)v9 + 146)) & 2) == 0 )
    {
      if ( v9 != a2 )
        return ((_DWORD)v9[73] & 0x10000000) != 0;
      return 1;
    }
  }
  return v4;
}
