/*
 * XREFs of EtwpExecutiveResourceConfigRunDown @ 0x1406E85AC
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall EtwpExecutiveResourceConfigRunDown(unsigned int a1, char a2)
{
  unsigned __int16 v3; // cx
  _DWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v3 = 3917;
  if ( !a2 )
    v3 = 3918;
  v8 = 0;
  v5[0] = EtwpExecutiveResourceReleaseSampleRate;
  v5[1] = EtwpExecutiveResourceContentionSampleRate;
  v5[2] = EtwpExecutiveResourceTimeout;
  v6 = v5;
  v7 = 12;
  return EtwpLogKernelEvent((__int64)&v6, a1, 1u, v3, 4200706);
}
