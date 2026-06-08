/*
 * XREFs of ComputeAtomEnergy @ 0x1C0002C90
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C00016FC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001738 (ResetEnumerationContext.c)
 *     ProcLibTraceEnergyEstimation @ 0x1C0003800 (ProcLibTraceEnergyEstimation.c)
 */

__int64 __fastcall ComputeAtomEnergy(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned __int64 *a4)
{
  __int64 *v7; // r11
  __int64 v8; // rbx
  unsigned int v9; // r10d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // edi
  __int64 result; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  __int64 v16[3]; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v18 = *(_QWORD *)DevExts;
  v7 = *(__int64 **)(v18 + 312);
  v8 = *v7;
  v9 = *((_DWORD *)v7 + 2);
  v10 = __readmsr(0x639u);
  if ( (unsigned int)v10 >= v9 )
    v11 = (unsigned int)EnergyFactor * (unsigned __int64)((unsigned int)v10 - v9);
  else
    v11 = 0LL;
  v16[2] = 0LL;
  v12 = v11 + v8;
  *((_DWORD *)v7 + 2) = v10;
  *v7 = v11 + v8;
  a4[1] = 0LL;
  *a4 = v11;
  v16[0] = (__int64)&qword_1C000D9D8;
  v16[1] = (__int64)&qword_1C000D9D8;
  v17 = 32;
  ResetEnumerationContext(v16);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64)v16, &v18);
    if ( (_DWORD)result )
      break;
    v14 = v18;
    ProcLibTraceEnergyEstimation(v18, v12, *a1, *a2, *a3);
    v15 = *(_QWORD **)(v14 + 312);
    v15[7] = v15[3];
    v15[8] = v15[4];
    v15[9] = v15[5];
    v15[10] = v15[6];
  }
  return result;
}
