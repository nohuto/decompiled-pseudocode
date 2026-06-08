/*
 * XREFs of CalculatePercentageCap @ 0x1C0013BAC
 * Callers:
 *     InitPerfStatesInternal @ 0x1C001347C (InitPerfStatesInternal.c)
 *     RegisterKernelCap @ 0x1C00209E0 (RegisterKernelCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculatePercentageCap(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r10d
  unsigned int v4; // r9d

  v3 = *(_DWORD *)(a1 + 60);
  v4 = 0;
  if ( !v3 || (v4 = a2, a2 == v3 - 1) )
  {
    if ( *(_DWORD *)(a1 + 64) )
      v4 = v3 + a3;
  }
  return *(unsigned __int8 *)(32LL * v4 + *(_QWORD *)(a1 + 48) + 24);
}
