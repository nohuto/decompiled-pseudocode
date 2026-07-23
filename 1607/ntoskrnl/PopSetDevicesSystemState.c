/*
 * XREFs of PopSetDevicesSystemState @ 0x1403CF5D0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 */

__int64 __fastcall PopSetDevicesSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  _DWORD v6[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-18h]
  unsigned __int64 v8; // [rsp+30h] [rbp-10h]
  char v9; // [rsp+38h] [rbp-8h]
  char v10; // [rsp+39h] [rbp-7h]
  __int16 v11; // [rsp+3Ah] [rbp-6h]

  v7 = 0LL;
  v8 = 0LL;
  v10 = byte_1403033BD;
  v9 = byte_1403033A2;
  v11 = (unsigned __int8)byte_1403033BC;
  v6[0] = dword_1403033CC;
  v6[1] = dword_1403033C8;
  v4 = dword_1403033C0;
  if ( (dword_1403033AC & 8) != 0 )
    v4 = 6;
  v7 = __PAIR64__(dword_1403033C4, v4);
  v8 = __PAIR64__(dword_1403033AC, qword_1403033A4);
  return PoBroadcastSystemState((__int64)v6, 6LL, a3, a4);
}
