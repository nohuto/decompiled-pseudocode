/*
 * XREFs of HvlBugCheckCallbackRoutine @ 0x1401EEE88
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
  if ( qword_14034D088 )
  {
    if ( (*((_DWORD *)qword_14034D088 + 1) & 1) != 0 )
    {
      ReasonSpecificData[1] = HvlCrashdumpGuid;
      *((_QWORD *)ReasonSpecificData + 4) = qword_14034D088;
      *((_DWORD *)ReasonSpecificData + 10) = dword_14034D098 << 12;
    }
  }
}
