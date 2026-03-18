/*
 * XREFs of ?SendPendingInteractionTrackerCallbacks@CExpressionManager@@QEAAXXZ @ 0x1800886FC
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 * Callees:
 *     ?SendPendingCallbacks@CInteractionTracker@@QEAAXXZ @ 0x18014B1A8 (-SendPendingCallbacks@CInteractionTracker@@QEAAXXZ.c)
 */

void __fastcall CExpressionManager::SendPendingInteractionTrackerCallbacks(CExpressionManager *this)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 76); i = (unsigned int)(i + 1) )
    CInteractionTracker::SendPendingCallbacks(*(CInteractionTracker **)(*((_QWORD *)this + 35) + 8 * i));
}
