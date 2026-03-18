/*
 * XREFs of PfSnLogPageFaultCommon @ 0x140079800
 * Callers:
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 *     PfSnLogPageFault @ 0x1400A7010 (PfSnLogPageFault.c)
 * Callees:
 *     PfSnCheckLogSequenceNumber @ 0x140079918 (PfSnCheckLogSequenceNumber.c)
 *     PfSnGetFileInformation @ 0x140079990 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x140079C34 (PfSnTraceGetLogEntry.c)
 */

__int64 __fastcall PfSnLogPageFaultCommon(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v8; // rdi
  int v9; // esi
  __int64 result; // rax
  __int64 *v11; // rdx
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF

  PfSnGetFileInformation(a1, a2, a3, a4);
  if ( (*(_BYTE *)(a1 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(a1 + 352) + 1498LL) == 2 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 1u);
  if ( a4 >= 0x20000000000LL )
    return 3221227780LL;
  v8 = a4 >> 9;
  if ( (a5 & 1) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( (a5 & 2) != 0 )
      v9 = 3;
  }
  PfSnCheckLogSequenceNumber(a1);
  if ( v9 || (v12 = *(__int64 **)(a1 + 408), (unsigned __int64)*v12 >> 3 != v8) || v12[1] != a3 )
  {
    result = PfSnTraceGetLogEntry(a1, 1LL, &v12);
    if ( (int)result < 0 )
      return result;
    v11 = v12;
    *v12 = (8 * v8) | *(_DWORD *)v12 & 7;
    v11[1] = a3;
    *v11 = (*(_DWORD *)v11 ^ v9) & 7 ^ (unsigned __int64)*v11;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 332));
    if ( !v9 )
      *(_QWORD *)(a1 + 408) = v12;
  }
  return 0LL;
}
