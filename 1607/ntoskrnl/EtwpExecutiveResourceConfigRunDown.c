/*
 * XREFs of EtwpExecutiveResourceConfigRunDown @ 0x1406A6FE0
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall EtwpExecutiveResourceConfigRunDown(unsigned int a1, char a2)
{
  LONGLONG v2; // r8
  unsigned __int16 v3; // cx
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v2 = a1;
  v3 = 3917;
  if ( !a2 )
    v3 = 3918;
  v7 = 0;
  v4[0] = EtwpExecutiveResourceReleaseSampleRate;
  v4[1] = EtwpExecutiveResourceContentionSampleRate;
  v4[2] = EtwpExecutiveResourceTimeout;
  v5 = v4;
  v6 = 12;
  EtwpLogKernelEvent((__int64)&v5, EtwpHostSiloState, v2, 1u, v3, 0x401902u);
}
