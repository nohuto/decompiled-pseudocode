/*
 * XREFs of IcClearPossibleData @ 0x1C006A750
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0069DA0 (IrqArbCommitAllocation.c)
 *     IrqArbBootAllocation @ 0x1C006A110 (IrqArbBootAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C006B4C0 (IrqArbpPrepareForTestOrConflict.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C006D578 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbpQueryConflictIsa @ 0x1C0080BB8 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
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
        v4 = (_DWORD *)(i + 136);
        v5 = (char *)(i + 136);
        do
        {
          *(v4 - 25) = 0;
          result = memset(v5, 0, 0x58uLL);
          *v4 = 0;
          v4 += 50;
          v5 += 200;
          v6 = v2 + *(_DWORD *)(i + 16);
          ++v2;
          *(v4 - 36) = v6;
        }
        while ( v2 < v3 );
      }
    }
  }
  return result;
}
