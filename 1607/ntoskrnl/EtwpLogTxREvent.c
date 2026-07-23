/*
 * XREFs of EtwpLogTxREvent @ 0x1406A28B4
 * Callers:
 *     EtwpTraceRegistryTransaction @ 0x1406A2FA4 (EtwpTraceRegistryTransaction.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall EtwpLogTxREvent(
        unsigned int a1,
        unsigned __int8 a2,
        __int128 *a3,
        int a4,
        int a5,
        __int64 *a6,
        __int64 a7)
{
  __int128 v7; // xmm0
  unsigned int v9; // r9d
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-21h] BYREF
  __int128 v14; // [rsp+38h] [rbp-19h]
  int v15; // [rsp+48h] [rbp-9h]
  int v16; // [rsp+4Ch] [rbp-5h]
  __int64 *v17; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp+Fh]
  int v19; // [rsp+70h] [rbp+1Fh]
  int v20; // [rsp+74h] [rbp+23h]

  v7 = *a3;
  v15 = a4;
  v18[0] = 32LL;
  v14 = v7;
  v9 = 1;
  v10 = *a6;
  v16 = a5;
  v13 = v10;
  v17 = &v13;
  v11 = *(_WORD *)a7 & 0xFFFE;
  if ( v11 )
  {
    v9 = 2;
    v18[1] = *(_QWORD *)(a7 + 8);
    v19 = v11;
    v20 = 0;
  }
  v12 = 2LL * v9;
  v18[v12 - 1] = &EtwpNull;
  v18[v12] = 2LL;
  EtwpLogKernelEvent((__int64)&v17, 0LL, a1, v9 + 1, a2 | 0x900, 0x501902u);
}
