/*
 * XREFs of ReferenceW32Thread @ 0x1C0046520
 * Callers:
 *     LockExchangeW32Thread @ 0x1C00438FC (LockExchangeW32Thread.c)
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall ReferenceW32Thread(__int64 a1)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(*(PVOID *)a1);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 344));
  return result;
}
