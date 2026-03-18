/*
 * XREFs of PopSetDevicesSystemState @ 0x1403EE24C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
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

  v0 = dword_14032E660;
  v3 = 0LL;
  v4 = 0;
  v7 = byte_14032E65D;
  v6 = byte_14032E642;
  v8 = (unsigned __int8)byte_14032E65C;
  v2[0] = dword_14032E66C;
  v2[1] = dword_14032E668;
  v5 = dword_14032E64C;
  if ( (dword_14032E64C & 8) != 0 )
    v0 = 6;
  v3 = __PAIR64__(dword_14032E664, v0);
  v4 = qword_14032E644;
  return PoBroadcastSystemState(v2);
}
