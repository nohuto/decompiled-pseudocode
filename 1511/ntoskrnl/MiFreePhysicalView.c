/*
 * XREFs of MiFreePhysicalView @ 0x14006C290
 * Callers:
 *     MiRemoveVadCharges @ 0x14041AF70 (MiRemoveVadCharges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

char __fastcall MiFreePhysicalView(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  result = *(_DWORD *)(a2 + 48) & 7;
  if ( result == 1 )
  {
    v3 = a1 + 1280;
    LOBYTE(v4) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
    --MEMORY[0xFFFFF58010804268];
    return MiUnlockWorkingSetExclusive(v3, v4, v5);
  }
  return result;
}
