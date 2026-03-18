/*
 * XREFs of PfSnCheckLogSequenceNumber @ 0x14001A338
 * Callers:
 *     PfSnLogPageFaultCommon @ 0x14001A220 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x14001A3A8 (PfSnTraceGetLogEntry.c)
 */

__int64 __fastcall PfSnCheckLogSequenceNumber(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 result; // rax
  unsigned __int64 *v7; // rcx
  unsigned __int64 *v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = dword_140367DD0;
  if ( dword_140367DD0 == *(_DWORD *)(a1 + 404) )
    return 1075380276LL;
  result = PfSnTraceGetLogEntry(a1, 1LL, &v8, a4);
  if ( (int)result >= 0 )
  {
    v7 = v8;
    *v8 = *v8 & 0xFFFFFFFFFFFFFFF8uLL | 2;
    *((_DWORD *)v7 + 2) = v5;
    *(_DWORD *)(a1 + 404) = v5;
    *(_QWORD *)(a1 + 408) = a1 + 416;
    return 0LL;
  }
  return result;
}
