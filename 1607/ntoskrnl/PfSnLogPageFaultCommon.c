/*
 * XREFs of PfSnLogPageFaultCommon @ 0x1400ED3E0
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140031410 (MiMakeSystemCacheRangeValid.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 *     PfSnLogPageFault @ 0x1400FBBA0 (PfSnLogPageFault.c)
 * Callees:
 *     PfSnGetFileInformation @ 0x1400371B0 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x1400ED550 (PfSnTraceGetLogEntry.c)
 */

__int64 __fastcall PfSnLogPageFaultCommon(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, char a5)
{
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  int v10; // esi
  int v11; // ebp
  __int64 result; // rax
  __int64 *v13; // rdx
  unsigned __int64 *v14; // rcx
  __int64 *v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 *v16; // [rsp+68h] [rbp+20h] BYREF

  PfSnGetFileInformation(a1, a2);
  if ( (*(_BYTE *)(a1 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(a1 + 352) + 1466LL) == 2 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 1u);
  if ( a4 >= 0x20000000000LL )
    return 3221227780LL;
  v9 = a4 >> 9;
  if ( (a5 & 1) != 0 )
  {
    v10 = 1;
  }
  else
  {
    v10 = 0;
    if ( (a5 & 2) != 0 )
      v10 = 3;
  }
  v11 = dword_14033B850;
  if ( dword_14033B850 != *(_DWORD *)(a1 + 404) && (int)PfSnTraceGetLogEntry(a1, 1LL, &v16, v8) >= 0 )
  {
    v14 = v16;
    *v16 = *v16 & 0xFFFFFFFFFFFFFFF8uLL | 2;
    *((_DWORD *)v14 + 2) = v11;
    *(_DWORD *)(a1 + 404) = v11;
    *(_QWORD *)(a1 + 408) = a1 + 416;
  }
  if ( v10 || (v15 = *(__int64 **)(a1 + 408), (unsigned __int64)*v15 >> 3 != v9) || v15[1] != a3 )
  {
    result = PfSnTraceGetLogEntry(a1, 1LL, &v15, v8);
    if ( (int)result < 0 )
      return result;
    v13 = v15;
    *v15 = (8 * v9) | *(_DWORD *)v15 & 7;
    v13[1] = a3;
    *v13 = (*(_DWORD *)v13 ^ v10) & 7 ^ (unsigned __int64)*v13;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 332));
    if ( !v10 )
      *(_QWORD *)(a1 + 408) = v15;
  }
  return 0LL;
}
