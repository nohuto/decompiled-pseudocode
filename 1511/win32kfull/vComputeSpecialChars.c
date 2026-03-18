/*
 * XREFs of vComputeSpecialChars @ 0x1C0117CF8
 * Callers:
 *     vBmfdFill_IFIMETRICS @ 0x1C0117750 (vBmfdFill_IFIMETRICS.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall vComputeSpecialChars(_BYTE *a1, WCHAR *a2, WCHAR *a3)
{
  CHAR MultiByteString; // [rsp+40h] [rbp+8h] BYREF
  CHAR v6; // [rsp+58h] [rbp+20h] BYREF

  MultiByteString = a1[4] + a1[6];
  v6 = a1[4] + a1[7];
  RtlMultiByteToUnicodeN(a2, 2u, 0LL, &MultiByteString, 1u);
  return RtlMultiByteToUnicodeN(a3, 2u, 0LL, &v6, 1u);
}
