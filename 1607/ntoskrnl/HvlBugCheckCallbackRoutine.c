/*
 * XREFs of HvlBugCheckCallbackRoutine @ 0x1401C025C
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
  if ( qword_1403221C8 )
  {
    if ( (*((_DWORD *)qword_1403221C8 + 1) & 1) != 0 )
    {
      ReasonSpecificData[1] = HvlCrashdumpGuid;
      *((_QWORD *)ReasonSpecificData + 4) = qword_1403221C8;
      *((_DWORD *)ReasonSpecificData + 10) = dword_1403221D8 << 12;
    }
  }
}
