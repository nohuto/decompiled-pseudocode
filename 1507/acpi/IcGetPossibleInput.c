/*
 * XREFs of IcGetPossibleInput @ 0x1C006E184
 * Callers:
 *     IrqArbAddAllocation @ 0x1C006BB50 (IrqArbAddAllocation.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C006D93C (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C006E858 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C006ECA8 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C0080888 (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcGetPossibleInput(unsigned int a1, __int64 a2, _BYTE *a3)
{
  __int64 i; // rdx
  __int64 v5; // rcx
  int v7; // eax
  int v8; // r8d
  char v9; // al

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      return 3221226021LL;
    if ( *(int *)(i + 28) >= 0 && *(_DWORD *)(i + 16) <= a1 && *(_DWORD *)(i + 20) >= a1 )
      break;
  }
  v5 = 184LL * (a1 - *(_DWORD *)(i + 16));
  if ( !*(_DWORD *)(v5 + i + 36) )
    return 3221226021LL;
  if ( a3 )
  {
    v8 = *(_DWORD *)(v5 + i + 140);
    if ( v8 == 3 )
    {
      v9 = 10;
    }
    else if ( v8 == 4 )
    {
      v9 = 8;
    }
    else
    {
      v9 = 0;
      if ( v8 == 2 )
        v9 = 2;
    }
    *a3 = (*(_DWORD *)(v5 + i + 144) == 0) | v9;
  }
  v7 = *(_DWORD *)(v5 + i + 40);
  if ( v7 && v7 == *(_DWORD *)(v5 + i + 32) && *(_DWORD *)(v5 + i + 44) == *(_DWORD *)(v5 + i + 36)
    || *(_BYTE *)(v5 + i + 208) )
  {
    return 263LL;
  }
  else
  {
    return 0LL;
  }
}
