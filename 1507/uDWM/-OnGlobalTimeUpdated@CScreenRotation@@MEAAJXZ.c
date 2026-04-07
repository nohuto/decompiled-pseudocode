/*
 * XREFs of ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x18008E8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x180005B4C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x18008E230 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18008E54C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18008E95C (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x18008EEC8 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::OnGlobalTimeUpdated(CScreenRotation *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  int v4; // ebx
  int v5; // eax
  int v6; // eax

  v1 = *((_QWORD *)this + 35);
  v2 = 0;
  if ( v1 && *(_BYTE *)(v1 + 72) )
  {
    v4 = *((_DWORD *)this + 72);
    CScreenRotation::CleanupTimeline(this);
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24));
    if ( v4 == 1 )
    {
      v5 = CScreenRotation::PreDelayExpired(this);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x27Cu);
LABEL_8:
        CScreenRotation::Stop(this, 0);
      }
    }
    else
    {
      v6 = CScreenRotation::MidDelayExpired(this);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x282u);
        goto LABEL_8;
      }
    }
  }
  return v2;
}
