/*
 * XREFs of IopInitializeIoQos @ 0x14015EAF0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExRegisterHost @ 0x140594978 (ExRegisterHost.c)
 */

__int64 __fastcall IopInitializeIoQos(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+24h] [rbp-34h]
  int v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v3 = 65541;
  v5 = 1;
  v4 = 6;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  result = ExRegisterHost(&IopIoQosExtensionHost, a2, &v3);
  if ( (int)result < 0 )
    IopIoQosExtensionHost = 0LL;
  return result;
}
