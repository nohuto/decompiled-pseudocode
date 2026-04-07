/*
 * XREFs of ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x18008AED0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x180087BB0 (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x18008AE10 (-Stop@CFlickVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CFlickVisual::UpdateTransition(CFlickVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 42);
  if ( v1 && *(_BYTE *)(v1 + 72) )
    CFlickVisual::Stop(this);
  else
    CContactManager::PostFlickFeedbackUpdate(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18),
      *((_DWORD *)this + 70),
      *((_DWORD *)this + 71),
      (_QWORD *)this + 37,
      v1 != 0);
  return 0LL;
}
