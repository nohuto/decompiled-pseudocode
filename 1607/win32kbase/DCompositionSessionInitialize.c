/*
 * XREFs of DCompositionSessionInitialize @ 0x1C0080B70
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C0080B88 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0080C54 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 */

__int64 __fastcall DCompositionSessionInitialize(int a1)
{
  __int64 result; // rax

  result = DirectComposition::CConnection::OnSessionCreation(a1);
  if ( (int)result >= 0 )
    return DirectComposition::CSynchronizationManager::OnSessionCreation();
  return result;
}
