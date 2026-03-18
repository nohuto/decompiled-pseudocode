/*
 * XREFs of HvlAddSecureSkPagesCallbackRoutine @ 0x1401EEE70
 * Callers:
 *     <none>
 * Callees:
 *     HvlAddSecurePagesCallbackRoutine @ 0x1401EED1C (HvlAddSecurePagesCallbackRoutine.c)
 */

void __fastcall HvlAddSecureSkPagesCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        __int64 ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  HvlAddSecurePagesCallbackRoutine(1, (int)Record, ReasonSpecificData, ReasonSpecificData);
}
