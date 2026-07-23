/*
 * XREFs of PpmTranslatePlatformIdleAccounting @ 0x14020A91C
 * Callers:
 *     PpmEventTracePlatformIdleAccounting @ 0x1406740A8 (PpmEventTracePlatformIdleAccounting.c)
 * Callees:
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 */

__int64 __fastcall PpmTranslatePlatformIdleAccounting(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned int v4; // edx
  __int64 result; // rax
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  unsigned int v10; // ecx
  _DWORD *v11; // r12
  __int64 v12; // r13
  __int64 v13; // rbx

  v2 = a2;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)v2 = v4;
  *(_DWORD *)(v2 + 4) = *(_DWORD *)a1;
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 16) = result;
  if ( v4 )
  {
    v6 = PopQpcFrequency;
    v7 = v2 + 40;
    v8 = a1 + 28;
    v9 = v4;
    do
    {
      v10 = *(_DWORD *)(v8 - 4) + *(_DWORD *)v8 + *(_DWORD *)(v8 + 4);
      *(_DWORD *)(v7 - 8) = v10;
      v3 += v10;
      *(_DWORD *)(v7 - 4) = *(_DWORD *)v8;
      *(_DWORD *)v7 = *(_DWORD *)(v8 - 4);
      *(_DWORD *)(v7 + 12) = *(_DWORD *)(v8 + 36);
      *(_QWORD *)(v7 + 16) = PpmConvertTime(*(_QWORD *)(v8 + 28), v6, 0xF4240uLL);
      *(_DWORD *)(v7 + 8) = PpmConvertTime(*(_QWORD *)(v8 + 20), v6, 0xF4240uLL);
      *(_DWORD *)(v7 + 4) = PpmConvertTime(*(_QWORD *)(v8 + 12), v6, 0xF4240uLL);
      v11 = (_DWORD *)(v7 + 44);
      v12 = v8 + 180;
      v13 = 26LL;
      do
      {
        *(_QWORD *)(v11 - 3) = PpmConvertTime(*(_QWORD *)(v12 - 16), v6, 0xF4240uLL);
        *(v11 - 1) = PpmConvertTime(*(_QWORD *)(v12 - 8), v6, 0xF4240uLL);
        *v11 = PpmConvertTime(*(_QWORD *)v12, v6, 0xF4240uLL);
        v11 += 6;
        result = *(unsigned int *)(v12 + 8);
        v12 += 32LL;
        *(v11 - 5) = result;
        --v13;
      }
      while ( v13 );
      v7 += 664LL;
      v8 += 1000LL;
      --v9;
    }
    while ( v9 );
    v2 = a2;
  }
  *(_QWORD *)(v2 + 8) = v3;
  return result;
}
