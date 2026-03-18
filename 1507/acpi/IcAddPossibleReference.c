/*
 * XREFs of IcAddPossibleReference @ 0x1C006E138
 * Callers:
 *     IrqArbAddAllocation @ 0x1C006BB50 (IrqArbAddAllocation.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C006F918 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcAddPossibleReference(unsigned int a1, char a2)
{
  __int64 result; // rax
  __int64 i; // r8

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    result = *(unsigned int *)(i + 28);
    if ( (int)result >= 0 && *(_DWORD *)(i + 16) <= a1 && *(_DWORD *)(i + 20) >= a1 )
    {
      result = a1 - *(_DWORD *)(i + 16);
      ++*(_DWORD *)(184 * result + i + 36);
      if ( a2 )
        ++*(_DWORD *)(184 * result + i + 44);
      return result;
    }
  }
  return result;
}
