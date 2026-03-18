/*
 * XREFs of HvlBugCheckCallbackRoutine @ 0x1401B44E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlBugCheckCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( qword_1402FCC08 )
  {
    if ( (*((_DWORD *)qword_1402FCC08 + 1) & 1) != 0 )
    {
      ReasonSpecificData[1] = HvlCrashdumpGuid;
      *((_QWORD *)ReasonSpecificData + 4) = qword_1402FCC08;
      *((_DWORD *)ReasonSpecificData + 10) = dword_1402FCC18 << 12;
    }
  }
}
