/*
 * XREFs of PfSnCheckLoggingForThread @ 0x14001A72C
 * Callers:
 *     PfSnLogPageFault @ 0x14001A174 (PfSnLogPageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     PfFileInfoNotify @ 0x1400B82A0 (PfFileInfoNotify.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckLoggingForThread(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // edx
  int v5; // r8d
  __int64 v6; // rax

  v4 = 0;
  if ( (((a3 & 2) == 0) & (*(_BYTE *)(a1 + 1732) >> 6)) == 0 )
  {
    v5 = (*(_DWORD *)(a1 + 1724) >> 9) & 7;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 )
      v5 = 0;
    if ( v5 >= 2 )
      goto LABEL_5;
    if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() && *(_DWORD *)(a1 + 1788) )
      v5 = 2;
    if ( v5 >= 2 )
    {
LABEL_5:
      v6 = *(_QWORD *)(a2 + 432);
      if ( !v6 || v6 == a1 && *(_QWORD *)(a2 + 440) == *(_QWORD *)(a1 + 1584) )
        return 1;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 336));
    }
  }
  return v4;
}
