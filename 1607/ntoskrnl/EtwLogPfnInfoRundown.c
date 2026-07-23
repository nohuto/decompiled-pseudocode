/*
 * XREFs of EtwLogPfnInfoRundown @ 0x1406A6BE8
 * Callers:
 *     MmLogSystemShareablePfnInfo @ 0x14065E164 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x1406A6F28 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400592C0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwLogPfnInfoRundown(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rsi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  int v13; // [rsp+3Ch] [rbp-4Ch]
  _QWORD *v14; // [rsp+40h] [rbp-48h]
  int i; // [rsp+48h] [rbp-40h]
  int v16; // [rsp+4Ch] [rbp-3Ch]
  _QWORD *v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+58h] [rbp-30h]
  int v19; // [rsp+5Ch] [rbp-2Ch]

  if ( a1 )
    v4 = *(unsigned int *)(a1 + 744);
  else
    v4 = 0xFFFFFFFFLL;
  v13 = 0;
  v5 = a3 + 1;
  v6 = a3[1];
  v7 = a3 + 2;
  v16 = 0;
  *a3 = v4;
  result = 8LL;
  v11 = a3;
  v12 = 8;
  v14 = a3 + 1;
  for ( i = 8; v6; v6 -= *v5 )
  {
    v9 = EtwpHostSiloState;
    v10 = v6;
    v17 = v7;
    if ( v6 > 0x7FC )
      v10 = 2044LL;
    v19 = 0;
    *v5 = v10;
    v18 = 32 * v10;
    EtwpLogKernelEvent((__int64)&v11, v9, a2, 3u, 0x284u, 0x401802u);
    result = 32 * *v5;
    v7 = (_QWORD *)((char *)v7 + result);
  }
  return result;
}
