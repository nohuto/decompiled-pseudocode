/*
 * XREFs of RIMEnsureUsageWithinLogicalBoundary @ 0x1C00CA19C
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMEnsureUsageWithinLogicalBoundary(__int64 a1)
{
  int v1; // r9d
  int v2; // r10d
  int v3; // r8d
  int v4; // r8d
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 < 0 )
  {
    v2 = *(_DWORD *)(a1 + 52);
    v3 = 1 << (*(_WORD *)(a1 + 56) - 1);
    if ( (v3 & v2) != 0 )
      v4 = v2 | -v3;
    else
      v4 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 52) = v4;
  }
  if ( *(_DWORD *)(a1 + 52) < v1 )
    *(_DWORD *)(a1 + 52) = v1;
  result = *(unsigned int *)(a1 + 36);
  if ( *(_DWORD *)(a1 + 52) > (int)result )
    *(_DWORD *)(a1 + 52) = result;
  return result;
}
