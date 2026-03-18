/*
 * XREFs of EtwLogPfnInfoRundown @ 0x1406E81E4
 * Callers:
 *     MmLogSystemShareablePfnInfo @ 0x1406A7C70 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x1406E84F4 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwLogPfnInfoRundown(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax
  __int64 *v10; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h]
  int v12; // [rsp+3Ch] [rbp-4Ch]
  _QWORD *v13; // [rsp+40h] [rbp-48h]
  int i; // [rsp+48h] [rbp-40h]
  int v15; // [rsp+4Ch] [rbp-3Ch]
  _QWORD *v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+5Ch] [rbp-2Ch]

  if ( a1 )
    v4 = *(unsigned int *)(a1 + 744);
  else
    v4 = 0xFFFFFFFFLL;
  v12 = 0;
  v5 = a3 + 1;
  v6 = a3[1];
  v7 = a3 + 2;
  v15 = 0;
  *a3 = v4;
  result = 8LL;
  v10 = a3;
  v11 = 8;
  v13 = a3 + 1;
  for ( i = 8; v6; v6 -= *v5 )
  {
    v16 = v7;
    v9 = v6;
    if ( v6 > 0x7FC )
      v9 = 2044LL;
    v18 = 0;
    *v5 = v9;
    v17 = 32 * v9;
    EtwpLogKernelEvent((__int64)&v10, a2, 3u, 0x284u, 4200450);
    result = 32 * *v5;
    v7 = (_QWORD *)((char *)v7 + result);
  }
  return result;
}
