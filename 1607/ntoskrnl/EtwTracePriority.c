/*
 * XREFs of EtwTracePriority @ 0x140226010
 * Callers:
 *     KeBoostPriorityThread @ 0x140004884 (KeBoostPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140070C40 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x140072110 (PsSetIoPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14007EA64 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14007ED94 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D2840 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D2F20 (KeSetPriorityThread.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140014190 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     EtwpPsProvTracePriority @ 0x140226C4C (EtwpPsProvTracePriority.c)
 */

__int64 __fastcall EtwTracePriority(__int64 a1, unsigned __int16 a2, int a3, int a4, _BYTE *a5)
{
  char v5; // di
  char v6; // bl
  __int64 result; // rax
  int v10; // [rsp+30h] [rbp-48h] BYREF
  char v11; // [rsp+34h] [rbp-44h]
  char v12; // [rsp+35h] [rbp-43h]
  __int16 v13; // [rsp+36h] [rbp-42h]
  _QWORD v14[2]; // [rsp+38h] [rbp-40h] BYREF

  if ( a3 != a4 )
  {
    v5 = a4;
    v6 = a3;
    if ( (dword_1402FD544 & 0x2000) != 0 )
      EtwpPsProvTracePriority(a1, a2);
    v10 = *(_DWORD *)(a1 + 1592);
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
