/*
 * XREFs of ExInitSystem @ 0x1407DF778
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     sub_1407DFED0 @ 0x1407DFED0 (sub_1407DFED0.c)
 */

char ExInitSystem()
{
  if ( (_DWORD)InitializationPhase )
  {
    if ( (_DWORD)InitializationPhase != 1 )
      KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
    return ExpInitSystemPhase1();
  }
  else
  {
    sub_1407DFED0(
      L"\\Registry\\Machine\\System\\Setup",
      L"SetupType",
      L"SystemPrefix",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions",
      L"ProductType",
      L"LanmanNT",
      L"ServerNT",
      L"WinNT",
      L"ProductSuite",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites",
      L"ConcurrentLimit",
      L"Small Business",
      L"Enterprise",
      L"CommunicationServer",
      L"BackOffice",
      L"Small Business(Restricted)",
      L"Terminal Server",
      L"EmbeddedNT",
      L"DataCenter",
      L"Personal",
      L"Blade",
      L"Embedded(Restricted)",
      L"Security Appliance",
      L"Storage Server",
      L"Compute Server",
      L"WH Server",
      L"SystemSetupInProgress",
      L"PhoneNT");
    return ExpInitSystemPhase0();
  }
}
