/*
 * XREFs of ?IsTrustedFontFilePath@@YA_NPEBG@Z @ 0x1C002232C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00242E8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

bool __fastcall IsTrustedFontFilePath(PCWSTR SourceString)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = *((_QWORD *)gpxsGlobals + 2);
  GreAcquireSemaphore(v4);
  RtlInitUnicodeStringEx(&DestinationString, SourceString);
  LOBYTE(SourceString) = RtlLookupElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 3), &DestinationString) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
  return (char)SourceString;
}
