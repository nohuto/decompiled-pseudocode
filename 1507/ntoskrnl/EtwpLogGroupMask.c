/*
 * XREFs of EtwpLogGroupMask @ 0x14054A654
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x14054A404 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1406E8638 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall EtwpLogGroupMask(unsigned int a1, __int128 *a2, unsigned __int16 a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  _OWORD *v6; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+38h] [rbp-40h]
  int v8; // [rsp+3Ch] [rbp-3Ch]
  _OWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+60h] [rbp-18h]

  v3 = *a2;
  v8 = 0;
  v4 = a2[1];
  v10 = 60;
  v6 = v9;
  v7 = 36;
  v9[0] = v3;
  v9[1] = v4;
  return EtwpLogKernelEvent((__int64)&v6, a1, 1u, a3, 4200450);
}
