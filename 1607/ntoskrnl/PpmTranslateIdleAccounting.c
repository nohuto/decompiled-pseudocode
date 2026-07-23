/*
 * XREFs of PpmTranslateIdleAccounting @ 0x14020A6F0
 * Callers:
 *     PpmWmiFireIdleAccountingEvent @ 0x14020B1DC (PpmWmiFireIdleAccountingEvent.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14020CF0C (PpmEventTraceProcessorIdleAccounting.c)
 * Callees:
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x140146334 (PpmUpdateProcessorIdleAccounting.c)
 */

unsigned __int64 __fastcall PpmTranslateIdleAccounting(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r12
  int *v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned int v8; // edx
  unsigned __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // r15
  _DWORD *v12; // rdi
  unsigned __int64 v13; // r12
  _DWORD *v14; // rsi
  _DWORD *v15; // r14
  __int64 v16; // r13
  int v17; // eax
  _DWORD *v18; // rsi
  __int64 v19; // r14
  unsigned int v20; // r13d
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  _DWORD *v24; // rcx

  v3 = a3;
  PpmUpdateProcessorIdleAccounting(a1);
  v6 = (int *)a1[1];
  v7 = PopQpcFrequency;
  v8 = *v6;
  *(_DWORD *)a2 = *v6;
  *(_DWORD *)(a2 + 4) = v6[1];
  *(_DWORD *)(a2 + 8) = v6[2];
  *(_DWORD *)(a2 + 12) = v6[3];
  *(_QWORD *)(a2 + 16) = *((_QWORD *)v6 + 2);
  result = *((_QWORD *)v6 + 3);
  if ( v8 )
  {
    v10 = a2 + 32;
    v11 = v8;
    v12 = v6 + 216;
    v13 = *((_QWORD *)v6 + 3);
    do
    {
      v13 += *((_QWORD *)v12 - 103);
      *(_DWORD *)v10 = *(v12 - 204) + *(v12 - 203) + *(v12 - 202);
      *(_DWORD *)(v10 + 4) = *(v12 - 203);
      *(_DWORD *)(v10 + 20) = *(v12 - 204);
      *(_DWORD *)(v10 + 8) = *(v12 - 201);
      *(_QWORD *)(v10 - 8) = PpmConvertTime(*((_QWORD *)v12 - 103), v7, 0xF4240uLL);
      *(_DWORD *)(v10 + 12) = PpmConvertTime(*((_QWORD *)v12 - 100), v7, 0xF4240uLL);
      *(_DWORD *)(v10 + 16) = PpmConvertTime(*((_QWORD *)v12 - 99), v7, 0xF4240uLL);
      v14 = v12 - 130;
      v15 = (_DWORD *)(v10 + 36);
      v16 = 16LL;
      do
      {
        *(_QWORD *)(v15 - 3) = PpmConvertTime(*((_QWORD *)v14 - 2), v7, 0xF4240uLL);
        *(v15 - 1) = PpmConvertTime(*((_QWORD *)v14 - 1), v7, 0xF4240uLL);
        *v15 = PpmConvertTime(*(_QWORD *)v14, v7, 0xF4240uLL);
        v15 += 6;
        v17 = v14[2];
        v14 += 8;
        *(v15 - 5) = v17;
        --v16;
      }
      while ( v16 );
      v18 = v12 - 160;
      v19 = 4LL;
      do
      {
        if ( *v18 )
        {
          *(_DWORD *)(v10 + 40) += *v18;
          *(_QWORD *)(v10 + 24) += PpmConvertTime(*((_QWORD *)v18 - 3), v7, 0xF4240uLL);
          v20 = PpmConvertTime(*((_QWORD *)v18 - 2), v7, 0xF4240uLL);
          v21 = PpmConvertTime(*((_QWORD *)v18 - 1), v7, 0xF4240uLL);
          if ( *(_DWORD *)(v10 + 32) > v20 )
            *(_DWORD *)(v10 + 32) = v20;
          if ( *(_DWORD *)(v10 + 36) < v21 )
            *(_DWORD *)(v10 + 36) = v21;
        }
        v18 += 8;
        --v19;
      }
      while ( v19 );
      v22 = *(_DWORD *)(v10 + 8);
      v23 = 6LL;
      v24 = v12;
      do
      {
        v22 += *v24;
        v24 += 8;
        *(_DWORD *)(v10 + 8) = v22;
        --v23;
      }
      while ( v23 );
      v10 += 416LL;
      v12 += 248;
      --v11;
    }
    while ( v11 );
    result = v13;
    v3 = a3;
  }
  if ( v3 )
  {
    result = PpmConvertTime(result, v7, 0xF4240uLL);
    *v3 = result;
  }
  return result;
}
