/*
 * XREFs of MiAddWorkingSetPage @ 0x140068A30
 * Callers:
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 * Callees:
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall MiAddWorkingSetPage(__int64 a1)
{
  ULONG_PTR v1; // r14
  unsigned int v2; // r8d
  __int64 v3; // r12
  unsigned __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  ULONG_PTR v8; // rbp
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // r15
  _QWORD *v11; // r9
  unsigned __int64 v12; // rax
  ULONG_PTR v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r8
  unsigned __int64 v16; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_DWORD *)(v1 + 64);
  v3 = *(_QWORD *)(v1 + 496);
  v4 = *(_QWORD *)(v1 + 32);
  v5 = 0x1000 / v2;
  if ( v4 > 0xFFFFFFFFELL - v5 )
    return 0LL;
  v6 = v2;
  v7 = (__int64)((((v3 << 16) + ((v4 * v2) << 16)) & 0xFFFFFFFFF0000000uLL) + 0x10000000) >> 16;
  if ( (unsigned __int64)(v7 + 4096) >= *(_QWORD *)(v1 + 96)
    || !(unsigned int)MiMapNewWorkingSetPage(
                        a1,
                        (__int64)((((v3 << 16) + ((v4 * v2) << 16)) & 0xFFFFFFFFF0000000uLL) + 0x10000000) >> 16) )
  {
    return 0LL;
  }
  v8 = *(_QWORD *)v1;
  v9 = *(_QWORD *)(v1 + 32);
  v10 = v9 + 1;
  if ( *(_QWORD *)v1 != 0xFFFFFFFFFLL )
  {
    if ( v8 < *(_QWORD *)(v1 + 8) || v8 > v9 )
      KeBugCheckEx(0x1Au, 0x5004uLL, v1, v8, *(_QWORD *)(v1 + 32));
    if ( (*(_QWORD *)(v8 * *(unsigned int *)(v1 + 64) + v3) & 0xFFFFFFELL) != 268435454
      || (*(_QWORD *)(v8 * *(unsigned int *)(v1 + 64) + v3) & 1) != 0 )
    {
      KeBugCheckEx(0x1Au, 0x5006uLL, v1, v8, *(_QWORD *)(v8 * *(unsigned int *)(v1 + 64) + v3));
    }
  }
  v11 = (_QWORD *)v7;
  *(_QWORD *)(v1 + 32) = (v7 - v3 + 4096) / v6 - 1;
  LOBYTE(v12) = 0;
  v13 = v10;
  if ( v10 < v10 + v5 )
  {
    v14 = (v10 + 1) << 28;
    do
    {
      v15 = 2LL * (((_DWORD)v13++ - 1) & 0x7FFFFFF);
      v16 = v14 & 0xFFFFFFFFF0000000uLL | v15;
      v14 += 0x10000000LL;
      v12 = v12 & 1 | v16;
      *v11 = v12;
      v11 = (_QWORD *)((char *)v11 + v6);
    }
    while ( v13 < v10 + v5 );
  }
  *(_QWORD *)((char *)v11 - v6) = (v8 << 28) | *(_DWORD *)((_BYTE *)v11 - v6) & 0xFFFFFFF;
  if ( v8 != 0xFFFFFFFFFLL )
    *(_QWORD *)(v8 * *(unsigned int *)(v1 + 64) + v3) ^= (*(_DWORD *)(v8 * *(unsigned int *)(v1 + 64) + v3) ^ (2 * (_DWORD)v13 - 2)) & 0xFFFFFFE;
  *(_QWORD *)v7 |= 0xFFFFFFEuLL;
  result = 1LL;
  *(_QWORD *)v1 = v10;
  return result;
}
