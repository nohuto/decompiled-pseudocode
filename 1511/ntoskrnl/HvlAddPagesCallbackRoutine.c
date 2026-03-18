/*
 * XREFs of HvlAddPagesCallbackRoutine @ 0x1401B42A8
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetPageList @ 0x1401B53F0 (HvlpGetPageList.c)
 *     sub_1401B54A4 @ 0x1401B54A4 (sub_1401B54A4.c)
 *     HvlpStartPageListIteration @ 0x1401B56BC (HvlpStartPageListIteration.c)
 */

void __fastcall HvlAddPagesCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int PageList; // eax
  __int64 v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  ReasonSpecificData[3] = 0LL;
  *((_DWORD *)ReasonSpecificData + 2) = 0;
  if ( qword_1402FCC08 && (*((_DWORD *)qword_1402FCC08 + 1) & 1) != 0 && HvlpFallbackScratchPage )
  {
    if ( !*ReasonSpecificData )
    {
      *ReasonSpecificData = &HvlpCrashdumpIterationState;
      HvlpCrashdumpIterationState = 1;
      HvlpStartPageListIteration(1LL);
    }
    PageList = HvlpGetPageList(1LL, v7, &v8);
    if ( v8 )
    {
      ReasonSpecificData[3] = v8;
      ReasonSpecificData[2] = v7[0];
      *((_DWORD *)ReasonSpecificData + 2) = 2;
    }
    if ( PageList == 261 )
    {
      *((_DWORD *)ReasonSpecificData + 2) |= 0x80000000;
    }
    else
    {
      v6 = sub_1401B54A4(1LL);
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_DWORD *)v6 = 0;
      HvlpCrashdumpIterationState = 0;
      *ReasonSpecificData = 0LL;
    }
  }
}
