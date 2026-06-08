/*
 * XREFs of ComputeProcessorEnergy @ 0x1C0006A10
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C00016FC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001738 (ResetEnumerationContext.c)
 *     ProcLibTraceEnergyEstimation @ 0x1C0003800 (ProcLibTraceEnergyEstimation.c)
 */

__int64 __fastcall ComputeProcessorEnergy(__int64 a1, __int64 a2, char *a3, unsigned __int64 *a4)
{
  char *v5; // rdi
  unsigned int *v9; // r11
  __int64 v10; // r12
  unsigned __int64 *v11; // r10
  char *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18[3]; // [rsp+38h] [rbp-40h] BYREF
  int v19; // [rsp+50h] [rbp-28h]

  v5 = (char *)((char *)&qword_1C000DEF4 - a3);
  v17 = *(_QWORD *)DevExts;
  v9 = (unsigned int *)a3;
  v10 = *(_QWORD *)(v17 + 320);
  v11 = a4;
  v12 = (char *)(&unk_1C000DEEC - (_UNKNOWN *)a3);
  v13 = 2LL;
  v14 = a1 - (_QWORD)v11;
  do
  {
    v15 = *(unsigned int *)((char *)v9 + (_QWORD)v5);
    if ( (_DWORD)v15 )
      *v11 = 10
           * *v9
           * *(unsigned __int64 *)((char *)v11 + v14)
           * *(unsigned int *)((char *)v9 + (_QWORD)v12)
           / (v10
            * v15);
    else
      *v11 = 0LL;
    ++v9;
    ++v11;
    --v13;
  }
  while ( v13 );
  v18[2] = 0LL;
  v18[0] = (__int64)&qword_1C000D9D8;
  v18[1] = (__int64)&qword_1C000D9D8;
  v19 = 32;
  ResetEnumerationContext(v18);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64)v18, &v17);
    if ( (_DWORD)result )
      break;
    ProcLibTraceEnergyEstimation(
      v17,
      a4[*(unsigned __int8 *)(v17 + 328)],
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v17 + 328)),
      *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(v17 + 328)),
      *(unsigned int *)&a3[4 * *(unsigned __int8 *)(v17 + 328)]);
  }
  return result;
}
