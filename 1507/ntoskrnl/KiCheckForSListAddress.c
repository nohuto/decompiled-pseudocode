/*
 * XREFs of KiCheckForSListAddress @ 0x1401020C0
 * Callers:
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x140185AF0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140187990 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140188090 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140188770 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140188E50 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140189530 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140189C20 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x14018A3F0 (KiDispatchInterrupt.c)
 *     KiSwInterrupt @ 0x14018CF90 (KiSwInterrupt.c)
 *     KiNmiInterruptStart @ 0x14018E380 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x140190E00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140191BC0 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckForSListAddress(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(unsigned __int16 *)(a1 + 368);
  v2 = *(_QWORD *)(a1 + 360);
  if ( (_WORD)result == 51 )
  {
    result = KeUserPopEntrySListResume;
    if ( v2 > KeUserPopEntrySListResume && v2 <= KeUserPopEntrySListEnd )
      *(_QWORD *)(a1 + 360) = KeUserPopEntrySListResume;
  }
  else if ( (_WORD)result == 35 )
  {
    result = KeUserPopEntrySListResumeWow64;
    if ( v2 > KeUserPopEntrySListResumeWow64 && v2 <= KeUserPopEntrySListEndWow64 )
      *(_QWORD *)(a1 + 360) = KeUserPopEntrySListResumeWow64;
  }
  else if ( (_WORD)result == 16 && v2 > (unsigned __int64)&ExpInterlockedPopEntrySListResume )
  {
    result = (__int64)&ExpInterlockedPopEntrySListEnd;
    if ( v2 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
      *(_QWORD *)(a1 + 360) = &ExpInterlockedPopEntrySListResume;
  }
  return result;
}
