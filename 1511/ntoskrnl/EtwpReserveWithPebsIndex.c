/*
 * XREFs of EtwpReserveWithPebsIndex @ 0x14020EEA8
 * Callers:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     EtwTraceContextSwap @ 0x14011EA60 (EtwTraceContextSwap.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 */

unsigned __int64 __fastcall EtwpReserveWithPebsIndex(
        __int64 a1,
        __int16 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        __int16 a6)
{
  __int16 v6; // bx
  unsigned __int64 result; // rax

  v6 = a3 + 24;
  result = EtwpReserveTraceBuffer(a1, (unsigned int)(a3 + 24), a4, a5, a6);
  if ( result )
  {
    *(_QWORD *)(result + 8) = *a5;
    *(_WORD *)(result + 4) = v6;
    *(_WORD *)(result + 6) = a2;
    *(_DWORD *)result = (unsigned __int8)a6 | 0xC0118000;
    *(_QWORD *)(result + 16) = *(_QWORD *)KeGetCurrentPrcb()->ProfileEventIndexAddress;
    result += 24LL;
  }
  return result;
}
