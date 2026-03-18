/*
 * XREFs of KeSetSystemTime @ 0x14011784C
 * Callers:
 *     ExpSetSystemTime @ 0x14039D9C4 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14051ECD8 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14066A764 (NtSetSystemTime.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400E2FD8 (KeGenericCallDpc.c)
 */

__int64 __fastcall KeSetSystemTime(__int64 a1, __int64 a2, int a3)
{
  _BYTE v4[4]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+24h] [rbp-34h]
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  char v8; // [rsp+40h] [rbp-18h]

  v6 = a1;
  v7 = a2;
  v4[0] = 0;
  v8 = 0;
  v5 = a3;
  return KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v4);
}
