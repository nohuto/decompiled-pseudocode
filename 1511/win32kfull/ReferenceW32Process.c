/*
 * XREFs of ReferenceW32Process @ 0x1C00E2D5C
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C00E296C (xxxWaitForInputIdle.c)
 *     AllocateW32Process @ 0x1C00E2CA0 (AllocateW32Process.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall ReferenceW32Process(__int64 a1)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(*(PVOID *)a1);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 280));
  return result;
}
