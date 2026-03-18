/*
 * XREFs of ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x18016A3C4
 * Callers:
 *     ?CloseEndpoint@CInputSinkStruct@@AEAAJPEAI@Z @ 0x180170904 (-CloseEndpoint@CInputSinkStruct@@AEAAJPEAI@Z.c)
 *     ?OpenEndpoint@CInputSinkStruct@@AEAAJW4CompositionInputType@@PEAI@Z @ 0x180170980 (-OpenEndpoint@CInputSinkStruct@@AEAAJW4CompositionInputType@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

struct IMessageSession *CInputManager::GetInputThreadMessageSession(void)
{
  __int64 v0; // rax

  if ( CInputManager::s_pInputManager && (v0 = *((_QWORD *)CInputManager::s_pInputManager + 27)) != 0 )
    return *(struct IMessageSession **)(v0 + 24);
  else
    return 0LL;
}
