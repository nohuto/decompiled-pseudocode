/*
 * XREFs of PpmTranslateIdleAccounting @ 0x14023FBDC
 * Callers:
 *     PpmWmiFireIdleAccountingEvent @ 0x1402406B8 (PpmWmiFireIdleAccountingEvent.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402418E8 (PpmEventTraceProcessorIdleAccounting.c)
 * Callees:
 *     PpmConvertTime @ 0x140014C30 (PpmConvertTime.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x140168CB8 (PpmUpdateProcessorIdleAccounting.c)
 */

unsigned __int64 __fastcall PpmTranslateIdleAccounting(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  int *v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned int v8; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // r13
  _DWORD *v11; // r11
  __int64 v12; // r15
  _DWORD *v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // r11
  int v16; // eax
  __int64 v17; // r11
  int v18; // eax
  __int64 v19; // r11
  _DWORD *v20; // rdi
  _DWORD *v21; // r14
  __int64 v22; // rbp
  _DWORD *v23; // r11
  int v24; // eax
  _DWORD *v25; // rdi
  __int64 v26; // rbp
  unsigned __int64 v27; // rax
  __int64 v28; // r11
  unsigned int v29; // r14d
  unsigned int v30; // eax
  __int64 v31; // rdx
  _DWORD *v32; // rcx

  PpmUpdateProcessorIdleAccounting(a1);
  v6 = (int *)a1[1];
  v7 = PopQpcFrequency;
  v8 = *v6;
  *(_DWORD *)a2 = *v6;
  *(_DWORD *)(a2 + 4) = v6[1];
  *(_DWORD *)(a2 + 8) = v6[2];
  *(_DWORD *)(a2 + 12) = v6[3];
  result = *((_QWORD *)v6 + 2);
  *(_QWORD *)(a2 + 16) = result;
  v10 = *((_QWORD *)v6 + 3);
  if ( v8 )
  {
    v11 = (_DWORD *)(a2 + 32);
    v12 = v8;
    v13 = v6 + 214;
    do
    {
      v10 += *((_QWORD *)v13 - 102);
      *v11 = *(v13 - 202) + *(v13 - 201) + *(v13 - 200);
      v11[1] = *(v13 - 201);
      v11[5] = *(v13 - 202);
      v11[2] = *(v13 - 199);
      v14 = PpmConvertTime(*((_QWORD *)v13 - 102), v7, 0xF4240uLL);
      *(_QWORD *)(v15 - 8) = v14;
      v16 = PpmConvertTime(*((_QWORD *)v13 - 99), v7, 0xF4240uLL);
      *(_DWORD *)(v17 + 12) = v16;
      v18 = PpmConvertTime(*((_QWORD *)v13 - 98), v7, 0xF4240uLL);
      *(_DWORD *)(v19 + 16) = v18;
      v20 = v13 - 130;
      v21 = (_DWORD *)(v19 + 36);
      v22 = 16LL;
      do
      {
        *(_QWORD *)(v21 - 3) = PpmConvertTime(*((_QWORD *)v20 - 2), v7, 0xF4240uLL);
        *(v21 - 1) = PpmConvertTime(*((_QWORD *)v20 - 1), v7, 0xF4240uLL);
        *v21 = PpmConvertTime(*(_QWORD *)v20, v7, 0xF4240uLL);
        v21 += 6;
        v24 = v20[2];
        v20 += 8;
        *(v21 - 5) = v24;
        --v22;
      }
      while ( v22 );
      v25 = v13 - 160;
      v26 = 4LL;
      do
      {
        if ( *v25 )
        {
          v23[10] += *v25;
          v27 = PpmConvertTime(*((_QWORD *)v25 - 3), v7, 0xF4240uLL);
          *(_QWORD *)(v28 + 24) += v27;
          v29 = PpmConvertTime(*((_QWORD *)v25 - 2), v7, 0xF4240uLL);
          v30 = PpmConvertTime(*((_QWORD *)v25 - 1), v7, 0xF4240uLL);
          if ( v23[8] > v29 )
            v23[8] = v29;
          if ( v23[9] < v30 )
            v23[9] = v30;
        }
        v25 += 8;
        --v26;
      }
      while ( v26 );
      LODWORD(result) = v23[2];
      v31 = 6LL;
      v32 = v13;
      do
      {
        result = (unsigned int)(*v32 + result);
        v32 += 8;
        v23[2] = result;
        --v31;
      }
      while ( v31 );
      v11 = v23 + 104;
      v13 += 246;
      --v12;
    }
    while ( v12 );
  }
  if ( a3 )
  {
    result = PpmConvertTime(v10, v7, 0xF4240uLL);
    *a3 = result;
  }
  return result;
}
