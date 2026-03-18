/*
 * XREFs of ReferenceW32Process @ 0x1C00E07F0
 * Callers:
 *     xxxWaitForInputIdle @ 0x1C00E00DC (xxxWaitForInputIdle.c)
 *     AllocateW32Process @ 0x1C00E0710 (AllocateW32Process.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02AEEF0 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
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
