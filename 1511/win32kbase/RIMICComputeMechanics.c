/*
 * XREFs of RIMICComputeMechanics @ 0x1C00D4AEC
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CBCA4 (RIMGetMultiContactDeviceState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMICComputeMechanics(__int64 a1, unsigned int a2)
{
  __int64 v3; // r9
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // r11d
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 696) + 2400LL * a2;
  v4 = *(_DWORD *)(v3 + 2280);
  if ( v4 && (v5 = *(_DWORD *)(v3 + 2276)) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 1436) - *(_DWORD *)(a1 + 1440);
    v7 = *(_DWORD *)(v3 + 2304) - v4;
    v8 = *(_DWORD *)(v3 + 2300) - v5;
    v9 = v7 * v7 + v8 * v8;
    *(_QWORD *)(v3 + 2368) = v9;
    if ( !v8 )
      v8 = 1LL;
    result = 100 * v7 / v8;
    *(_QWORD *)(v3 + 2384) = result;
    if ( v6 )
    {
      result = v9 / v6;
      *(_QWORD *)(v3 + 2376) = result;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 2300) = *(_DWORD *)(v3 + 2292);
    result = *(unsigned int *)(v3 + 2296);
    *(_DWORD *)(v3 + 2304) = result;
  }
  return result;
}
