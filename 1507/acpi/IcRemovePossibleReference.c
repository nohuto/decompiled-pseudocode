/*
 * XREFs of IcRemovePossibleReference @ 0x1C006E80C
 * Callers:
 *     IrqArbAddAllocation @ 0x1C006BB50 (IrqArbAddAllocation.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C006D93C (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbBacktrackAllocation @ 0x1C0080570 (IrqArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcRemovePossibleReference(unsigned int a1, char a2)
{
  __int64 i; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    result = *(unsigned int *)(i + 28);
    if ( (int)result >= 0 && *(_DWORD *)(i + 16) <= a1 && *(_DWORD *)(i + 20) >= a1 )
    {
      v4 = 184LL * (a1 - *(_DWORD *)(i + 16));
      result = 0xFFFFFFFFLL;
      --*(_DWORD *)(v4 + i + 36);
      if ( a2 )
        --*(_DWORD *)(v4 + i + 44);
      return result;
    }
  }
  return result;
}
