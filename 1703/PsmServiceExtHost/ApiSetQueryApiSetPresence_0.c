/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180021470
 * Callers:
 *     IsRmRpsHostEmptyNotificationPresent @ 0x180021414 (IsRmRpsHostEmptyNotificationPresent.c)
 *     IsQueryUserTokenPresent @ 0x180021478 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x18002154C (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x1800216A4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
