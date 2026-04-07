/*
 * XREFs of ?IsEnabled@CStoryboard@@QEAA_NXZ @ 0x18000F6DC
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x1800107F4 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004100C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

char __fastcall CStoryboard::IsEnabled(CStoryboard *this)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax

  v1 = 0;
  v2 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165);
  v3 = *(_QWORD *)(v2 + 504);
  if ( !v3 || !*(_BYTE *)(v3 + 312) )
  {
    v4 = *(_QWORD *)(v2 + 528);
    if ( (!v4 || *(_DWORD *)(v4 + 72) != 65 || !*(_BYTE *)(v4 + 68))
      && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21)
      && !CDesktopManager::CheckAnyPreference(0x10u) )
    {
      return 1;
    }
  }
  return v1;
}
