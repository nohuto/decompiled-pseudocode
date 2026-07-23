/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x18005829C
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x180058054 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180054420 (RtlRunOnceExecuteOnce.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentInitialize(char *a1, unsigned int a2, unsigned int a3)
{
  __int16 v3; // r15
  unsigned int v5; // esi
  unsigned int v6; // ecx
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rcx
  char *v11; // rcx
  char *v12; // rdx
  char *v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 LowFragHeapDataSlot; // rdi
  __int32 v17; // r8d
  int v18; // ecx
  unsigned int v21; // r8d
  unsigned __int64 v22; // rbx
  __int32 v23; // r9d
  int v24; // ecx
  unsigned int v26; // r9d
  unsigned __int64 result; // rax
  int v28; // [rsp+88h] [rbp+10h]

  v3 = a3;
  if ( (RtlpHpAppCompatFlags & 4) != 0 )
  {
    v5 = a2;
  }
  else
  {
    v5 = 2 * a3;
    if ( ((2 * a3 - 1) & (2 * a3)) != 0 )
    {
      _BitScanReverse(&v6, v5);
      v5 = 1 << (v6 + 1);
    }
    if ( v5 <= 0x1000 )
      v5 = 4096;
    if ( v5 >= a2 )
      v5 = a2;
  }
  v7 = a2 / v5;
  v8 = (a2
      - ((2 * (v7 + 4 * (unsigned int)(((unsigned __int64)(2 * ((8 * (a2 - 2 * v7) - 384) / (8 * a3 + 1))) + 63) >> 6))
        + 63) & 0xFFFFFFF0))
     / a3;
  memset(a1, 0, 0x30uLL);
  LOWORD(v28) = v3;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_WORD *)a1 + 16) = v8;
  *((_WORD *)a1 + 17) = v8;
  a1[38] = 2;
  a1[45] = v7;
  HIWORD(v28) = (2 * (v7 + 4 * (((unsigned __int64)(2 * v8) + 63) >> 6)) + 63) & 0xFFF0;
  *((_DWORD *)a1 + 10) = v28 ^ RtlpLFHKey ^ ((unsigned int)a1 >> 12);
  _BitScanForward(&v9, v5);
  v10 = (unsigned __int16)(8 * ((((unsigned __int64)(2 * v8) + 63) >> 6) + 6));
  a1[44] = v9;
  *((_WORD *)a1 + 23) = v10;
  v11 = &a1[v10];
  *(_WORD *)v11 = 0;
  v12 = &v11[2 * (unsigned __int8)v7];
  v13 = v11 + 2;
  v14 = 0LL;
  v15 = (unsigned __int64)(v12 - v13 + 1) >> 1;
  if ( v13 > v12 )
    v15 = 0LL;
  if ( v15 )
  {
    do
    {
      ++v14;
      *(_WORD *)v13 = -1;
      v13 += 2;
    }
    while ( v14 < v15 );
  }
  memset(a1 + 48, 0, ((unsigned __int64)(2 * v8) + 7) >> 3);
  if ( ((2 * (_BYTE)v8) & 0x3F) != 0 )
    *(_QWORD *)&a1[8 * ((unsigned __int64)(2 * v8) >> 6) + 48] |= ~((1LL << ((2 * v8) & 0x3F)) - 1);
  LowFragHeapDataSlot = NtCurrentTeb()->LowFragHeapDataSlot;
  if ( !dword_180145F48
    && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_180145F48, 4u, 0LL) < 0 )
  {
    dword_180145F48 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  RtlRunOnceExecuteOnce(&RtlpRandomExInit, RtlpInitRandomExVector, 0LL, 0LL);
  dword_180145F48 = (2147483629 * (unsigned __int64)(unsigned int)dword_180145F48 + 2147483587) % 0x7FFFFFFF;
  v17 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180145F48);
  if ( MEMORY[0x7FFE0290] )
  {
    v18 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      if ( _CF )
        break;
      if ( (unsigned int)++v18 >= 0xA )
        goto LABEL_22;
    }
  }
  else
  {
LABEL_22:
    LODWORD(_RDX) = 0;
  }
  v21 = _RDX ^ v17;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v21);
  v22 = (unsigned __int64)v21 << 32;
  if ( !dword_180145F48
    && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_180145F48, 4u, 0LL) < 0 )
  {
    dword_180145F48 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  RtlRunOnceExecuteOnce(&RtlpRandomExInit, RtlpInitRandomExVector, 0LL, 0LL);
  dword_180145F48 = (2147483629 * (unsigned __int64)(unsigned int)dword_180145F48 + 2147483587) % 0x7FFFFFFF;
  v23 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180145F48);
  if ( MEMORY[0x7FFE0290] )
  {
    v24 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      if ( _CF )
        break;
      if ( (unsigned int)++v24 >= 0xA )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    LODWORD(_RDX) = 0;
  }
  v26 = _RDX ^ v23;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v26);
  result = LowFragHeapDataSlot >> 3;
  *(_QWORD *)&RtlpLowFragHeapRandomData[8 * (LowFragHeapDataSlot >> 3)] = (v22 | v26) & 0x7F7F7F7F7F7F7F7FLL;
  return result;
}
