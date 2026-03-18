/*
 * XREFs of VfDriverLoadImage @ 0x1406FDD58
 * Callers:
 *     MmLoadSystemImage @ 0x140482B2C (MmLoadSystemImage.c)
 *     VfDriverEnableVerifier @ 0x140704AC8 (VfDriverEnableVerifier.c)
 *     VfInitBootDriversLoaded @ 0x1407A52D8 (VfInitBootDriversLoaded.c)
 *     VfDriverLoadBootDrivers @ 0x1407A53BC (VfDriverLoadBootDrivers.c)
 * Callees:
 *     VfTargetDriversAdd @ 0x14008439C (VfTargetDriversAdd.c)
 *     RtlEqualUnicodeString @ 0x14040F720 (RtlEqualUnicodeString.c)
 *     VfNotifyVerifierExtensions @ 0x140704E00 (VfNotifyVerifierExtensions.c)
 *     ViXdvDriverLoadImage @ 0x14070512C (ViXdvDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
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
