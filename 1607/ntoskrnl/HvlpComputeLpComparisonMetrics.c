/*
 * XREFs of HvlpComputeLpComparisonMetrics @ 0x1401BB384
 * Callers:
 *     HvlpSelectLpSet @ 0x1401BBCAC (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1401BC100 (HvlpSelectVpSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpComputeLpComparisonMetrics(unsigned int a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // r10d
  unsigned int v5; // ebp
  __int64 v7; // rdi
  unsigned int v8; // r12d
  __int64 result; // rax
  int v10; // r15d
  int v11; // r14d
  int v12; // ecx
  int v13; // r13d
  int v14; // r12d
  unsigned int v15; // r8d
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, __int64, unsigned int *); // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // [rsp+78h] [rbp+10h]
  unsigned int v23; // [rsp+88h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a3;
  v5 = 0;
  v7 = 9LL * a3;
  *(_DWORD *)(a2 + 4 * v7 + 16) = 0;
  *(_DWORD *)(a2 + 4 * v7 + 24) = 0;
  *(_DWORD *)(a2 + 4 * v7 + 28) = 0;
  *(_DWORD *)(a2 + 4 * v7 + 32) = 0;
  *(_DWORD *)(a2 + 4 * v7 + 20) = -1;
  v8 = *(_DWORD *)(a2 + 36LL * a3 + 4);
  result = v8 >> 4;
  v10 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
  v11 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  v12 = (unsigned __int16)result;
  v13 = v10 & v8;
  v21 = (unsigned __int16)result;
  v14 = v11 & v8;
  if ( v3 )
  {
    v15 = v23;
    v16 = a2 + 4;
    v17 = (__int64 (__fastcall *)(__int64, __int64, unsigned int *))HvlpQueryNodeDistance;
    do
    {
      if ( v5 != v4 && *(_BYTE *)(v16 - 3) )
      {
        if ( *(_WORD *)(v16 + 8) == *(_WORD *)(a2 + 4 * v7 + 12) )
          ++*(_DWORD *)(a2 + 4 * v7 + 16);
        if ( (*(_DWORD *)v16 & v11) == v14 )
          ++*(_DWORD *)(a2 + 4 * v7 + 24);
        if ( (*(_DWORD *)v16 & v10) == v13 )
          ++*(_DWORD *)(a2 + 4 * v7 + 28);
        result = (unsigned __int16)(*(_DWORD *)v16 >> 4);
        if ( (_DWORD)result == v12 )
          ++*(_DWORD *)(a2 + 4 * v7 + 32);
        v18 = *(unsigned __int16 *)(v16 + 6);
        v19 = *(unsigned __int16 *)(a2 + 4 * v7 + 10);
        if ( (_WORD)v18 == (_WORD)v19
          || (!v17
            ? (result = 3221226021LL)
            : (result = v17(v19, v18, &v23),
               v15 = v23,
               v17 = (__int64 (__fastcall *)(__int64, __int64, unsigned int *))HvlpQueryNodeDistance,
               v4 = a3,
               v3 = a1),
              (int)result < 0) )
        {
          v12 = v21;
        }
        else
        {
          v12 = v21;
          if ( v15 < *(_DWORD *)(a2 + 4 * v7 + 20) )
            *(_DWORD *)(a2 + 4 * v7 + 20) = v15;
        }
      }
      ++v5;
      v16 += 36LL;
    }
    while ( v5 < v3 );
  }
  return result;
}
