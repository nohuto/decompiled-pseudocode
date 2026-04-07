/*
 * XREFs of ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180038FD8
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000A73C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18000BD94 (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18001108C (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     sub_1800113BC @ 0x1800113BC (sub_1800113BC.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800339F4 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x180094350 (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x180007724 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 */

char __fastcall CAnimationScheduler::IsWindowCurrentlyAnimating(CAnimationScheduler *this, HWND a2, int a3, int a4)
{
  unsigned int v4; // esi
  char v5; // r10
  __int64 v6; // rbx
  __int64 v9; // r14
  CStoryboard *v10; // rcx

  v4 = *((_DWORD *)this + 10);
  v5 = 0;
  v6 = 0LL;
  if ( v4 )
  {
    v9 = *((_QWORD *)this + 2);
    do
    {
      v10 = *(CStoryboard **)(v9 + 8 * v6);
      if ( *((_DWORD *)v10 + 6) != 4 && (a3 == -1 || a3 == *((_DWORD *)v10 + 18)) )
      {
        v5 = a2 ? CStoryboard::HasAnimationComponent(v10, a2, a4) : 1;
        if ( v5 )
          break;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v4 );
  }
  return v5;
}
