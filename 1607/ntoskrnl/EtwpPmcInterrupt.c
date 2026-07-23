/*
 * XREFs of EtwpPmcInterrupt @ 0x1402268C4
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpPmcInterrupt(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r10d
  unsigned __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int KernelStack; // [rsp+38h] [rbp-30h]
  __int16 v8; // [rsp+3Ch] [rbp-2Ch]
  __int16 v9; // [rsp+3Eh] [rbp-2Ah]
  _QWORD v10[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 360);
  CurrentThread = KeGetCurrentThread();
  v4 = 34642434;
  if ( v2 <= 0x7FFFFFFEFFFFLL )
    v4 = 34640386;
  v10[1] = 16LL;
  KernelStack = (int)CurrentThread[1].KernelStack;
  v6 = v2;
  v8 = a2;
  v9 = 0;
  v10[0] = &v6;
  return EtwTraceKernelEvent((int)v10, 1, 0x20000400u, 3887, v4);
}
