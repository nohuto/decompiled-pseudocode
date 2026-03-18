/*
 * XREFs of ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C000F10C
 * Callers:
 *     bInitializeEUDC @ 0x1C000EF50 (bInitializeEUDC.c)
 * Callees:
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C0001D84 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C000E2DC (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C00215DC (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 */

void vInitializeFontAssocStatus(void)
{
  struct _FONTHASH **v0; // rcx
  _QWORD v1[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+8h] BYREF
  struct _FONTHASH **v3; // [rsp+58h] [rbp+10h] BYREF
  struct PFF *v4; // [rsp+60h] [rbp+18h] BYREF

  SharedQueryTable.Flags = 4;
  SharedQueryTable.DefaultType = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontAssocCharsetRoutine;
  *(_OWORD *)&SharedQueryTable.Name = 0LL;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C03232E8 = 0LL;
  dword_1C03232F0 = 0;
  qword_1C03232F8 = 0LL;
  fFontAssocStatus = 0;
  gawcSystemDBCSFontPath = 0;
  if ( RtlQueryRegistryValues(0x80000002, L"FontAssoc\\Associated CharSet", &SharedQueryTable, 0LL, 0LL) < 0 )
    fFontAssocStatus = 0;
  word_1C0323630 = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontAssocDefaultRoutine;
  if ( RtlQueryRegistryValues(0x80000002, L"FontAssoc\\Associated DefaultFonts", &SharedQueryTable, 0LL, 0LL) >= 0 )
  {
    bReadyToInitializeFontAssocDefault = 1;
    if ( gawcSystemDBCSFontPath )
    {
      if ( word_1C0323630 )
      {
        v3 = gpPFTPublic;
        v1[0] = &gappfeSystemDBCS;
        v1[1] = &word_1C0323630;
        if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                             (PUBLIC_PFTOBJ *)&v3,
                             &gawcSystemDBCSFontPath,
                             &v2,
                             8u,
                             &v4,
                             (struct _EUDCLOAD *)v1) )
        {
          qword_1C0323328 = 0LL;
          GreAcquireSemaphore(ghsemEUDC1);
          if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlTTSystem, gappfeSystemDBCS, 0) )
          {
            gbSystemDBCSFontEnabled = 1;
            gbAnyLinkedFonts = 1;
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
          GreReleaseSemaphoreInternal(ghsemEUDC1);
          if ( !gbSystemDBCSFontEnabled )
            PFTOBJ::bUnloadEUDCFont(v0, &gawcSystemDBCSFontPath);
        }
      }
    }
  }
  else
  {
    bReadyToInitializeFontAssocDefault = 0;
  }
  dword_1C0323B94 = 0;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)CountRegistryEntryRoutine;
  SharedQueryTable.EntryContext = &dword_1C0323B90;
  dword_1C0323B90 = 0;
}
