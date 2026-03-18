/*
 * XREFs of VerifierFsRtlDissectName @ 0x1406C04B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDissectName @ 0x1400C8D00 (RtlDissectName.c)
 */

void __fastcall VerifierFsRtlDissectName(UNICODE_STRING *a1, UNICODE_STRING *a2, UNICODE_STRING *a3)
{
  UNICODE_STRING Path; // [rsp+20h] [rbp-18h] BYREF

  Path = *a1;
  pXdvFsRtlDissectName(&Path, a2, a3);
}
