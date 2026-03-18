/*
 * XREFs of PopSetDevicesSystemState @ 0x1403A492C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 */

__int64 PopSetDevicesSystemState()
{
  int v0; // ecx
  _DWORD v2[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-18h]
  int v4; // [rsp+30h] [rbp-10h]
  int v5; // [rsp+34h] [rbp-Ch]
  char v6; // [rsp+38h] [rbp-8h]
  char v7; // [rsp+39h] [rbp-7h]
  __int16 v8; // [rsp+3Ah] [rbp-6h]

  v0 = dword_1402DE0A0;
  v3 = 0LL;
  v4 = 0;
  v7 = byte_1402DE09D;
  v6 = byte_1402DE082;
  v8 = (unsigned __int8)byte_1402DE09C;
  v2[0] = dword_1402DE0AC;
  v2[1] = dword_1402DE0A8;
  v5 = dword_1402DE08C;
  if ( (dword_1402DE08C & 8) != 0 )
    v0 = 6;
  v3 = __PAIR64__(dword_1402DE0A4, v0);
  v4 = qword_1402DE084;
  return PoBroadcastSystemState(v2);
}
