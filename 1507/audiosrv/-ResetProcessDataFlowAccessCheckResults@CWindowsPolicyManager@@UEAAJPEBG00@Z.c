/*
 * XREFs of ?ResetProcessDataFlowAccessCheckResults@CWindowsPolicyManager@@UEAAJPEBG00@Z @ 0x1800A0BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG00@Z @ 0x1800A1E88 (-ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG00@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::ResetProcessDataFlowAccessCheckResults(
        CApplicationManager **this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  CApplicationManager::ResetProcessDataFlowAccessCheckResults(this[6], a2, a3, a4);
  return 0LL;
}
