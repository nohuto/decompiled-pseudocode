/*
 * XREFs of KiUserCallForwarder @ 0x1800A9E60
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A9EB0 (KiUserApcDispatcher.c)
 *     KiUserCallbackDispatcher @ 0x1800A9FB0 (KiUserCallbackDispatcher.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180085D10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall KiUserCallForwarder(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64, __int64); // rax

  return v4(a1, a2, a3, a4);
}
