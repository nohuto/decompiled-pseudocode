/*
 * XREFs of ComputeCoreEnergy @ 0x1C0002DB0
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C00016FC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001738 (ResetEnumerationContext.c)
 *     ProcLibTraceEnergyEstimation @ 0x1C0003800 (ProcLibTraceEnergyEstimation.c)
 */

__int64 __fastcall ComputeCoreEnergy(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned __int64 *a4)
{
  __int64 *v7; // r11
  __int64 v8; // rbx
  unsigned int v9; // r10d
  unsigned __int64 v10; // rax
  int v11; // r8d
  unsigned __int64 v12; // rax
  int v13; // edi
  __int64 result; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rcx
  __int64 v17[3]; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+48h] [rbp-20h]
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v19 = *(_QWORD *)DevExts;
  v7 = *(__int64 **)(v19 + 312);
  v8 = *v7;
  v9 = *((_DWORD *)v7 + 2);
  v10 = __readmsr(0x639u);
  v11 = v10;
  if ( (unsigned int)v10 >= v9 )
    v12 = 1000000 * (unsigned __int64)((unsigned int)v10 - v9) / (unsigned int)EnergyFactor;
  else
    v12 = 0LL;
  v17[2] = 0LL;
  v13 = v12 + v8;
  *v7 = v12 + v8;
  *((_DWORD *)v7 + 2) = v11;
  a4[1] = 0LL;
  *a4 = v12;
  v17[0] = (__int64)&qword_1C000D9D8;
  v17[1] = (__int64)&qword_1C000D9D8;
  v18 = 32;
  ResetEnumerationContext(v17);
  while ( 1 )
  {
    result = EnumerateNextDevice((__int64)v17, &v19);
    if ( (_DWORD)result )
      break;
    v15 = v19;
    ProcLibTraceEnergyEstimation(v19, v13, *a1, *a2, *a3);
    v16 = *(_QWORD **)(v15 + 312);
    v16[7] = v16[3];
    v16[8] = v16[4];
    v16[9] = v16[5];
    v16[10] = v16[6];
  }
  return result;
}
