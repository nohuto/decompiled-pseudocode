/*
 * XREFs of VfDriverLoadImage @ 0x1406B20A4
 * Callers:
 *     MiFinalizeDriverImage @ 0x1403B66C0 (MiFinalizeDriverImage.c)
 *     VfDriverEnableVerifier @ 0x1406B8A3C (VfDriverEnableVerifier.c)
 *     VfInitBootDriversLoaded @ 0x14074AA04 (VfInitBootDriversLoaded.c)
 *     VfDriverLoadBootDrivers @ 0x14074AAE0 (VfDriverLoadBootDrivers.c)
 * Callees:
 *     VfTargetDriversAdd @ 0x140002384 (VfTargetDriversAdd.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     VfNotifyVerifierExtensions @ 0x1406B8D74 (VfNotifyVerifierExtensions.c)
 *     ViXdvDriverLoadImage @ 0x1406B90A0 (ViXdvDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1406C7770 (VfSuspectDriversLoadCallback.c)
 */

char __fastcall VfDriverLoadImage(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int Image; // eax
  UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&v10.Length = 2097182;
  v10.Buffer = L"VerifierExt.sys";
  LOBYTE(Image) = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &v10, 1u);
  if ( (_BYTE)Image == 1 )
  {
    Image = (unsigned __int8)ViXdvDriverLoadImage(a1);
    XdvEnabled = Image;
    if ( (_BYTE)Image )
      LOBYTE(Image) = VfNotifyVerifierExtensions(0LL, 0LL);
  }
  else if ( ViVerifierDriverAddedThunkListHead )
  {
    LOBYTE(Image) = VfSuspectDriversLoadCallback(a1, a2, a3, a4);
  }
  else if ( !a4 )
  {
    LOBYTE(Image) = VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), 0LL);
  }
  return Image;
}
