/*
 * XREFs of HvlSkBugCheckCallbackRoutine @ 0x1401B4814
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlSkBugCheckCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( qword_1402FCC08 )
  {
    ReasonSpecificData[1] = HvlSkCrashdumpGuid;
    *((_QWORD *)ReasonSpecificData + 4) = qword_1402FCC08;
    *((_DWORD *)ReasonSpecificData + 10) = dword_1402FCC18 << 12;
  }
}
