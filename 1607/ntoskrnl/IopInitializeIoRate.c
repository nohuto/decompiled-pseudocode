/*
 * XREFs of IopInitializeIoRate @ 0x14013CCC8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExRegisterHost @ 0x140553960 (ExRegisterHost.c)
 */

__int64 __fastcall IopInitializeIoRate(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+24h] [rbp-34h]
  int v5; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall **v6)(int, int, int, int, __int64, __int64); // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v3 = 524294;
  v5 = 512;
  v4 = 3;
  v7 = 0LL;
  v8 = 0LL;
  v6 = &IopIoRateHostTable;
  result = ExRegisterHost(&IopIoRateExtensionHost, a2, &v3);
  if ( (int)result < 0 )
    IopIoRateExtensionHost = 0LL;
  return result;
}
