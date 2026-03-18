/*
 * XREFs of HvlAddSecureHvPagesCallbackRoutine @ 0x1401C00D0
 * Callers:
 *     <none>
 * Callees:
 *     HvlAddSecurePagesCallbackRoutine @ 0x1401C00E8 (HvlAddSecurePagesCallbackRoutine.c)
 */

void __fastcall HvlAddSecureHvPagesCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        PVOID ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  HvlAddSecurePagesCallbackRoutine(2LL, Record, ReasonSpecificData, ReasonSpecificData);
}
