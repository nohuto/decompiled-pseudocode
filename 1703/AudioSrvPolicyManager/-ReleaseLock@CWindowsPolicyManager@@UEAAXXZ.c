/*
 * XREFs of ?ReleaseLock@CWindowsPolicyManager@@UEAAXXZ @ 0x180005030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowsPolicyManager::ReleaseLock(CWindowsPolicyManager *this)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
}
