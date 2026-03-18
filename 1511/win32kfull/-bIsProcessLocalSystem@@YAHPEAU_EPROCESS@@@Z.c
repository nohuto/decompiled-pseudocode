/*
 * XREFs of ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027D290
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C0146590 (NtGdiSetPUMPDOBJ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0267750 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0267A20 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@K@Z @ 0x1C0267D78 (-bEndDocInternal@@YAHPEAUHDC__@@K@Z.c)
 *     NtGdiEndPage @ 0x1C0269A00 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x1C026A420 (NtGdiStartPage.c)
 *     NtGdiEngCreateBitmap @ 0x1C02AB360 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C02AB620 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C02B07C0 (NtGdiSetDeviceGammaRamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsProcessLocalSystem(struct _EPROCESS *a1)
{
  unsigned int v1; // esi
  PACCESS_TOKEN v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  TokenInformation = 0LL;
  v2 = PsReferencePrimaryToken(a1);
  v3 = SeQueryInformationToken(v2, TokenUser, &TokenInformation);
  PsDereferencePrimaryToken(v2);
  if ( v3 >= 0 )
  {
    v1 = RtlEqualSid(SeExports->SeLocalSystemSid, *(PSID *)TokenInformation);
    ExFreePoolWithTag(TokenInformation, 0);
  }
  return v1;
}
