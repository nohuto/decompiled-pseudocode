/*
 * XREFs of EtwpLogTxREvent @ 0x1406E4A04
 * Callers:
 *     EtwpTraceRegistryTransaction @ 0x1406E5624 (EtwpTraceRegistryTransaction.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall EtwpLogTxREvent(
        unsigned int a1,
        unsigned __int8 a2,
        __int128 *a3,
        int a4,
        int a5,
        __int64 *a6,
        __int64 a7)
{
  __int128 v7; // xmm0
  unsigned int v9; // r8d
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-21h] BYREF
  __int128 v15; // [rsp+38h] [rbp-19h]
  int v16; // [rsp+48h] [rbp-9h]
  int v17; // [rsp+4Ch] [rbp-5h]
  __int64 *v18; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp+Fh]
  int v20; // [rsp+70h] [rbp+1Fh]
  int v21; // [rsp+74h] [rbp+23h]

  v7 = *a3;
  v16 = a4;
  v19[0] = 32LL;
  v15 = v7;
  v9 = 1;
  v10 = *a6;
  v17 = a5;
  v14 = v10;
  v18 = &v14;
  v11 = *(_WORD *)a7 & 0xFFFE;
  if ( v11 )
  {
    v9 = 2;
    v19[1] = *(_QWORD *)(a7 + 8);
    v20 = v11;
    v21 = 0;
  }
  v12 = 2LL * v9;
  v19[v12 - 1] = &EtwpNull;
  v19[v12] = 2LL;
  return EtwpLogKernelEvent((__int64)&v18, a1, v9 + 1, a2 | 0x900u, 5249282);
}
