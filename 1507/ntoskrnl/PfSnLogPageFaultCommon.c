/*
 * XREFs of PfSnLogPageFaultCommon @ 0x14001A220
 * Callers:
 *     PfSnLogPageFault @ 0x14001A174 (PfSnLogPageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     PfFileInfoNotify @ 0x1400B82A0 (PfFileInfoNotify.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 * Callees:
 *     PfSnCheckLogSequenceNumber @ 0x14001A338 (PfSnCheckLogSequenceNumber.c)
 *     PfSnTraceGetLogEntry @ 0x14001A3A8 (PfSnTraceGetLogEntry.c)
 *     PfSnGetFileInformation @ 0x1400B7EF0 (PfSnGetFileInformation.c)
 */

__int64 __fastcall PfSnLogPageFaultCommon(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // r9
  __int64 result; // rax
  __int64 *v12; // rdx
  __int64 *v13; // [rsp+40h] [rbp+8h] BYREF

  PfSnGetFileInformation();
  if ( (*(_BYTE *)(a1 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(a1 + 352) + 1490LL) == 2 )
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
  if ( v9 || (v13 = *(__int64 **)(a1 + 408), (unsigned __int64)*v13 >> 3 != v8) || v13[1] != a3 )
  {
    result = PfSnTraceGetLogEntry(a1, 1LL, &v13, v10);
    if ( (int)result < 0 )
      return result;
    v12 = v13;
    *v13 = (8 * v8) | *(_DWORD *)v13 & 7;
    v12[1] = a3;
    *v12 = (*(_DWORD *)v12 ^ v9) & 7 ^ (unsigned __int64)*v12;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 332));
    if ( !v9 )
      *(_QWORD *)(a1 + 408) = v13;
  }
  return 0LL;
}
