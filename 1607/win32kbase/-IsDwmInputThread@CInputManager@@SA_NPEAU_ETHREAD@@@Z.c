/*
 * XREFs of ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C001566C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     IsDwmInputThread @ 0x1C0015650 (IsDwmInputThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CInputManager::IsDwmInputThread(struct _ETHREAD *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( g_pInputManager )
    return *((_QWORD *)g_pInputManager + 1) == (_QWORD)a1;
  return result;
}
