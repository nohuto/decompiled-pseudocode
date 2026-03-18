/*
 * XREFs of EtwpPmcInterrupt @ 0x14025DF00
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall EtwpPmcInterrupt(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // r8
  int v3; // r10d
  unsigned __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int KernelStack; // [rsp+38h] [rbp-30h]
  __int16 v7; // [rsp+3Ch] [rbp-2Ch]
  __int16 v8; // [rsp+3Eh] [rbp-2Ah]
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 360);
  v3 = 34642434;
  if ( v2 <= (unsigned __int64)MmHighestUserAddress )
    v3 = 34640386;
  v9[1] = 16LL;
  KernelStack = (int)KeGetCurrentThread()[1].KernelStack;
  v5 = v2;
  v7 = a2;
  v8 = 0;
  v9[0] = &v5;
  return EtwTraceKernelEvent((int)v9, 1, 0x20000400u, 0xF2Fu, v3);
}
