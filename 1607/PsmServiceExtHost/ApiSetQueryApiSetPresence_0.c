/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800206F0
 * Callers:
 *     IsRmRpsHostEmptyNotificationPresent @ 0x1800205BC (IsRmRpsHostEmptyNotificationPresent.c)
 *     IsQueryUserTokenPresent @ 0x1800206FC (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x1800207F0 (IsPsmQueryBackgroundActivationTypePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
