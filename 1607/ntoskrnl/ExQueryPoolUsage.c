/*
 * XREFs of ExQueryPoolUsage @ 0x14008BA60
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140412EC0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExQueryPoolUsage(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        int *a6,
        int *a7,
        _DWORD *a8)
{
  _DWORD *v9; // r13
  unsigned int v10; // r10d
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // r15d
  int v14; // r14d
  int v15; // r12d
  __int64 *result; // rax
  int v17; // ecx
  unsigned int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r10
  __int64 v22; // rbx
  __int64 v23; // r9
  __int64 v24; // r11
  int v25; // edi
  int v26; // esi

  *a1 = 0;
  *a3 = 0;
  *a4 = 0;
  v9 = a2;
  v10 = 0;
  if ( ExpNumberOfPagedPools != -1 )
  {
    do
    {
      v11 = v10++;
      v12 = ExpPagedPoolDescriptor[v11];
      *a1 += *(_QWORD *)(v12 + 80) + *(_QWORD *)(v12 + 72) - *(_QWORD *)(v12 + 136) - *(_QWORD *)(v12 + 144);
      *a3 += *(_DWORD *)(v12 + 64);
      *a4 += *(_DWORD *)(v12 + 128);
    }
    while ( v10 < ExpNumberOfPagedPools + 1 );
  }
  v13 = dword_14033B940 + dword_14033CA80;
  v14 = qword_14033B950
      + qword_14033B948
      + qword_14033CA90
      + qword_14033CA88
      - qword_14033CAC8
      - qword_14033CAD0
      - qword_14033B988
      - qword_14033B990;
  v15 = dword_14033B980 + dword_14033CAC0;
  if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
  {
    v18 = 0;
    do
    {
      v19 = v18++;
      v20 = ExpNonPagedPoolDescriptor[v19];
      v21 = *(_QWORD *)(v20 + 136);
      v22 = *(_QWORD *)(v20 + 72);
      v23 = *(_QWORD *)(v20 + 144);
      v24 = *(_QWORD *)(v20 + 80);
      v25 = *(_DWORD *)(v20 + 64);
      v26 = *(_DWORD *)(v20 + 128);
      v20 += 4416LL;
      v13 += v25 + *(_DWORD *)(v20 + 64);
      v14 += v24
           + v22
           + *(_QWORD *)(v20 + 80)
           + *(_QWORD *)(v20 + 72)
           - *(_QWORD *)(v20 + 136)
           - *(_QWORD *)(v20 + 144)
           - v21
           - v23;
      v15 += v26 + *(_DWORD *)(v20 + 128);
    }
    while ( v18 < ExpNumberOfNonPagedPools );
    v9 = a2;
  }
  *v9 = v14;
  *a6 = v13;
  *a7 = v15;
  *a5 = 0;
  *a8 = 0;
  for ( result = (__int64 *)ExPoolLookasideListHead; result != &ExPoolLookasideListHead; result = (__int64 *)*result )
  {
    v17 = *((_DWORD *)result - 10);
    if ( *((_DWORD *)result - 7) )
      *a5 += v17;
    else
      *a8 += v17;
  }
  return result;
}
