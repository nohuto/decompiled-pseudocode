/*
 * XREFs of ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x18000F7C4
 * Callers:
 *     _lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator() @ 0x180008F74 (_lambda_9b37f3d03e1ad1f523dfdba086665a20_--operator().c)
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x18000FFD0 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180010EDC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CStoryboard::HasAnimationComponent(CStoryboard *this, HWND a2, int a3)
{
  unsigned int v3; // r11d
  char v4; // r9
  unsigned int v5; // r10d
  __int64 v6; // rbx
  __int64 v7; // rcx

  v3 = *((_DWORD *)this + 28);
  v4 = 0;
  v5 = 0;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 11);
    while ( 1 )
    {
      v7 = *(_QWORD *)(v6 + 8LL * v5);
      if ( a2 == *(HWND *)(v7 + 16) && (a3 & *(_DWORD *)(v7 + 24)) == a3 )
        break;
      if ( ++v5 >= v3 )
        return v4;
    }
    return 1;
  }
  return v4;
}
