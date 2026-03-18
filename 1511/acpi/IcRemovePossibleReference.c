/*
 * XREFs of IcRemovePossibleReference @ 0x1C006C484
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0069680 (IrqArbAddAllocation.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C006B59C (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbBacktrackAllocation @ 0x1C0080750 (IrqArbBacktrackAllocation.c)
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
      v4 = 200LL * (a1 - *(_DWORD *)(i + 16));
      result = 0xFFFFFFFFLL;
      --*(_DWORD *)(v4 + i + 36);
      if ( a2 )
        --*(_DWORD *)(v4 + i + 44);
      return result;
    }
  }
  return result;
}
