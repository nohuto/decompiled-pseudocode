/*
 * XREFs of IcClearPossibleData @ 0x1C006CBF0
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C006C260 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C006C5D0 (IrqArbBootAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C006D860 (IrqArbpPrepareForTestOrConflict.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C006F918 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00809D8 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     memset @ 0x1C0023B40 (memset.c)
 */

void *IcClearPossibleData()
{
  __int64 i; // r14
  void *result; // rax
  unsigned int v2; // edi
  unsigned int v3; // ebp
  _DWORD *v4; // rbx
  char *v5; // rsi
  unsigned int v6; // ecx

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    result = (void *)*(unsigned int *)(i + 28);
    if ( (int)result >= 0 )
    {
      v2 = 0;
      v3 = *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1;
      if ( *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) != -1 )
      {
        v4 = (_DWORD *)(i + 128);
        v5 = (char *)(i + 128);
        do
        {
          *(v4 - 23) = 0;
          result = memset(v5, 0, 0x50uLL);
          *v4 = 0;
          v4 += 46;
          v5 += 184;
          v6 = v2 + *(_DWORD *)(i + 16);
          ++v2;
          *(v4 - 32) = v6;
        }
        while ( v2 < v3 );
      }
    }
  }
  return result;
}
