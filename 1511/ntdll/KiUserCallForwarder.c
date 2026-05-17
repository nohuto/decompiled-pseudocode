/*
 * XREFs of KiUserCallForwarder @ 0x1800A8A20
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A8A70 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcher @ 0x1800A8B70 (KiUserCallbackDispatcher.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall KiUserCallForwarder(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64, __int64); // rax

  return v4(a1, a2, a3, a4);
}
