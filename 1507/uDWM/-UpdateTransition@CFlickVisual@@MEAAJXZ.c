/*
 * XREFs of ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x180088010
 * Callers:
 *     <none>
 * Callees:
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x18008056C (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x180087F50 (-Stop@CFlickVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CFlickVisual::UpdateTransition(CFlickVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 42);
  if ( v1 && *(_BYTE *)(v1 + 72) )
    CFlickVisual::Stop(this);
  else
    CContactManager::PostFlickFeedbackUpdate(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20),
      *((_DWORD *)this + 70),
      *((_DWORD *)this + 71),
      (_QWORD *)this + 37,
      v1 != 0);
  return 0LL;
}
