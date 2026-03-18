/*
 * XREFs of EtwTracePriority @ 0x14025D438
 * Callers:
 *     IoSetIoPriorityHintIntoThread @ 0x140009A64 (IoSetIoPriorityHintIntoThread.c)
 *     IoApplyPriorityInfoThread @ 0x140009AEC (IoApplyPriorityInfoThread.c)
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14000A20C (KeSetPriorityAndQuantumProcess.c)
 *     CcPerformReadAhead @ 0x1400333F0 (CcPerformReadAhead.c)
 *     CcApplyLowIoPriorityToThread @ 0x140041E40 (CcApplyLowIoPriorityToThread.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     SmSetThreadPagePriority @ 0x1400DB534 (SmSetThreadPagePriority.c)
 *     KeBoostPriorityThread @ 0x1400DBC80 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x14011ABD0 (KeSetBasePriorityThread.c)
 *     CcCompleteAsyncRead @ 0x14011D990 (CcCompleteAsyncRead.c)
 *     CmpSetIoPriorityThread @ 0x14012CB1C (CmpSetIoPriorityThread.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpPsProvTracePriority @ 0x14025E094 (EtwpPsProvTracePriority.c)
 */

void *__fastcall EtwTracePriority(__int64 a1, unsigned __int16 a2, int a3, int a4, _BYTE *a5)
{
  char v5; // di
  char v6; // bl
  void *result; // rax
  int v10; // [rsp+30h] [rbp-48h] BYREF
  char v11; // [rsp+34h] [rbp-44h]
  char v12; // [rsp+35h] [rbp-43h]
  __int16 v13; // [rsp+36h] [rbp-42h]
  _QWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF

  if ( a3 != a4 )
  {
    v5 = a4;
    v6 = a3;
    if ( (dword_1403277E4 & 0x2000) != 0 )
      EtwpPsProvTracePriority(a1, a2);
    v10 = *(_DWORD *)(a1 + 1584);
    v11 = v6;
    v12 = v5;
    v13 = 0;
    if ( a5 )
      LOBYTE(v13) = *a5;
    v14[1] = 8LL;
    v14[0] = &v10;
    return EtwTraceKernelEvent((int)v14, 1, 0x20002000u, a2, 22026499);
  }
  return result;
}
