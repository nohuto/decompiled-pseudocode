/*
 * XREFs of EtwpSpinLockConfigRunDown @ 0x1406E97FC
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall EtwpSpinLockConfigRunDown(unsigned int a1, char a2)
{
  unsigned __int16 v3; // cx
  _DWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v3 = 3915;
  if ( !a2 )
    v3 = 3916;
  v8 = 0;
  v5[0] = EtwpSpinLockSpinThreshold;
  v5[2] = EtwpSpinLockAcquireSampleRate;
  v5[1] = EtwpSpinLockContentionSampleRate;
  v5[3] = EtwpSpinLockHoldThreshold;
  v6 = v5;
  v7 = 16;
  return EtwpLogKernelEvent((__int64)&v6, a1, 1u, v3, 5249283);
}
