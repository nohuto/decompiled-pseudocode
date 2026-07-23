/*
 * XREFs of SepFreeCapturedTokenSecurityAttributesInformation @ 0x14047B0EC
 * Callers:
 *     NtCreateTokenEx @ 0x140476AAC (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14047B1E0 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeCapturedTokenSecurityAttributesInformation(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 i; // rbp

  v1 = *(PVOID **)(a1 + 8);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
  {
    ExFreePoolWithTag(v1[5 * i + 1], 0);
    if ( LODWORD(v1[5 * i + 3]) && LOWORD(v1[5 * i + 2]) && (LOWORD(v1[5 * i + 2]) <= 6u || LOWORD(v1[5 * i + 2]) == 16) )
      ExFreePoolWithTag(v1[5 * i + 4], 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  ExFreePoolWithTag((PVOID)a1, 0);
}
