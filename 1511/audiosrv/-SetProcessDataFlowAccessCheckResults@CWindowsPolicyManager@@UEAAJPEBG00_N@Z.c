/*
 * XREFs of ?SetProcessDataFlowAccessCheckResults@CWindowsPolicyManager@@UEAAJPEBG00_N@Z @ 0x18009DE10
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG00@Z @ 0x18009EF5C (-ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG00@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::SetProcessDataFlowAccessCheckResults(
        CApplicationManager **this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  CApplicationManager::ResetProcessDataFlowAccessCheckResults(this[6], a2, a3, a4);
  return 0LL;
}
