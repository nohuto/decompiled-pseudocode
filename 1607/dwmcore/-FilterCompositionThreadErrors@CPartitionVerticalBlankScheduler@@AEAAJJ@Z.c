/*
 * XREFs of ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x180113F8C
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x18016186C (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x180169310 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?GetChipSetInfo@@YAKXZ @ 0x1801873A4 (-GetChipSetInfo@@YAKXZ.c)
 *     ?MilShipAssert@@YAXKJ@Z @ 0x1801875EC (-MilShipAssert@@YAXKJ@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::FilterCompositionThreadErrors(
        CPartitionVerticalBlankScheduler *this,
        int a2)
{
  int v2; // ebx
  int ChipSetInfo; // eax
  unsigned int v4; // ecx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v2 = a2;
  if ( a2 == -2003304293 || *((_DWORD *)this + 6324) == -2003304293 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_QPC_FAILURE);
    ChipSetInfo = GetChipSetInfo();
    MilShipAssert(v4, ChipSetInfo);
  }
  if ( v2 < 0 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    MilUnexpectedErrorWithAsimovEvent(v2, L"The render thread failed unexpectedly.");
    pExceptionRecord.ExceptionCode = v2;
    pExceptionRecord.ExceptionAddress = GetStackCaptureRootFailureAddress(v2);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    return (unsigned int)-2003303418;
  }
  return (unsigned int)v2;
}
