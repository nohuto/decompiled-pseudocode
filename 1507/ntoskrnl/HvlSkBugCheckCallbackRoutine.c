/*
 * XREFs of HvlSkBugCheckCallbackRoutine @ 0x1401EF714
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
  if ( qword_14034D088 )
  {
    ReasonSpecificData[1] = HvlSkCrashdumpGuid;
    *((_QWORD *)ReasonSpecificData + 4) = qword_14034D088;
    *((_DWORD *)ReasonSpecificData + 10) = dword_14034D098 << 12;
  }
}
