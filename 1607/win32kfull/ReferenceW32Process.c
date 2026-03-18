/*
 * XREFs of ReferenceW32Process @ 0x1C009E9F4
 * Callers:
 *     LockExchangeW32Thread @ 0x1C009C7A8 (LockExchangeW32Thread.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     xxxWaitForInputIdle @ 0x1C01046AC (xxxWaitForInputIdle.c)
 *     AllocateW32Process @ 0x1C0104AC0 (AllocateW32Process.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02B0750 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall ReferenceW32Process(__int64 a1)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(*(PVOID *)a1);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
