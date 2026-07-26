/*
 * XREFs of ndisXlatePMParametersToWakeUpEnableOid @ 0x1C00459B8
 * Callers:
 *     ndisOidPostEnableWakeUp @ 0x1C0044DA0 (ndisOidPostEnableWakeUp.c)
 *     ndisPreSetPMParameters @ 0x1C00AC91C (ndisPreSetPMParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisXlatePMParametersToWakeUpEnableOid(__int64 a1)
{
  _QWORD *v1; // r9
  int v2; // edx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (*v1 & 0x200000000LL) != 0;
  if ( (*v1 & 0x100000000LL) != 0 )
    v2 |= 6u;
  *(_DWORD *)v1 = v2;
  result = *(unsigned int *)(a1 + 48);
  *(_DWORD *)(a1 + 152) = result;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 32) = -50265850;
  return result;
}
