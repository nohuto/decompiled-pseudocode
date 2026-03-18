/*
 * XREFs of EtwpSpinLockConfigRunDown @ 0x140666614
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall EtwpSpinLockConfigRunDown(unsigned int a1, char a2)
{
  unsigned __int16 v3; // cx
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v3 = 3915;
  if ( !a2 )
    v3 = 3916;
  v7 = 0;
  v4[0] = EtwpSpinLockSpinThreshold;
  v4[2] = EtwpSpinLockAcquireSampleRate;
  v4[1] = EtwpSpinLockContentionSampleRate;
  v4[3] = EtwpSpinLockHoldThreshold;
  v5 = v4;
  v6 = 16;
  EtwpLogKernelEvent((__int64)&v5, a1, 1LL, v3, 0x501903u);
}
