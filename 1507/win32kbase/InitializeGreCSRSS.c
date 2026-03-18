/*
 * XREFs of InitializeGreCSRSS @ 0x1C0080CE0
 * Callers:
 *     NtUserInitialize @ 0x1C007A990 (NtUserInitialize.c)
 * Callees:
 *     GetgForceFontAssocCodePage_0 @ 0x1C0001978 (GetgForceFontAssocCodePage_0.c)
 *     GetgSystemOemCodePage_0 @ 0x1C0001980 (GetgSystemOemCodePage_0.c)
 *     GetgSystemAnsiCodePage_0 @ 0x1C0001988 (GetgSystemAnsiCodePage_0.c)
 *     IsInitFNTCacheSupported_0 @ 0x1C0001990 (IsInitFNTCacheSupported_0.c)
 *     InitFNTCache_0 @ 0x1C0001998 (InitFNTCache_0.c)
 *     IsbATMFDDisabledSupported_0 @ 0x1C00019A0 (IsbATMFDDisabledSupported_0.c)
 *     bATMFDDisabled_0 @ 0x1C00019A8 (bATMFDDisabled_0.c)
 *     IsbEnableFontDriverSupported_0 @ 0x1C00019B0 (IsbEnableFontDriverSupported_0.c)
 *     bEnableFontDriver_0 @ 0x1C00019B8 (bEnableFontDriver_0.c)
 *     IsvGetJpn98FixPitchSupported_0 @ 0x1C00019C0 (IsvGetJpn98FixPitchSupported_0.c)
 *     vGetJpn98FixPitch_0 @ 0x1C00019C8 (vGetJpn98FixPitch_0.c)
 *     UmfdSessionInitialize_0 @ 0x1C00019D0 (UmfdSessionInitialize_0.c)
 *     IsbInitFontTablesSupported_0 @ 0x1C00019D8 (IsbInitFontTablesSupported_0.c)
 *     bInitFontTables_0 @ 0x1C00019E0 (bInitFontTables_0.c)
 *     IsbInitStockFontsSupported_0 @ 0x1C00019E8 (IsbInitStockFontsSupported_0.c)
 *     bInitStockFonts_0 @ 0x1C00019F0 (bInitStockFonts_0.c)
 *     IsvInitFontSubTableSupported_0 @ 0x1C00019F8 (IsvInitFontSubTableSupported_0.c)
 *     vInitFontSubTable_0 @ 0x1C0001A00 (vInitFontSubTable_0.c)
 *     IsvInitMapperSupported_0 @ 0x1C0001A08 (IsvInitMapperSupported_0.c)
 *     vInitMapper_0 @ 0x1C0001A10 (vInitMapper_0.c)
 *     IsbInitializeEUDCSupported_0 @ 0x1C0001A18 (IsbInitializeEUDCSupported_0.c)
 *     bInitializeEUDC_0 @ 0x1C0001A20 (bInitializeEUDC_0.c)
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C0080F80 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C008105C (-GetLanguageID@@YAGXZ.c)
 *     DrvNotifySessionStateChange @ 0x1C0081160 (DrvNotifySessionStateChange.c)
 */

_BOOL8 InitializeGreCSRSS()
{
  _DWORD *v0; // rsi
  USHORT *v1; // rbx
  USHORT *v2; // rdi
  USHORT v3; // dx
  __int64 v4; // rcx
  _DWORD *v5; // rax
  unsigned int v6; // eax
  int v8; // ecx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-78h] BYREF
  __int64 v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+70h] [rbp-38h]
  __int64 v12; // [rsp+78h] [rbp-30h]

  DrvNotifySessionStateChange(0LL);
  *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0uLL;
  gcTrueTypeFonts = 0;
  gulFontInformation = 0;
  gusLanguageID = GetLanguageID();
  v0 = (_DWORD *)GetgForceFontAssocCodePage_0();
  v1 = (USHORT *)GetgSystemOemCodePage_0();
  v2 = (USHORT *)GetgSystemAnsiCodePage_0();
  RtlGetDefaultCodePage(v2, v1);
  v3 = *v2;
  gjCurCharset = 0;
  gfsCurSignature = 1;
  v4 = 0LL;
  if ( nCharsets )
  {
    v5 = &codepages;
    while ( *v5 != v3 )
    {
      v4 = (unsigned int)(v4 + 1);
      ++v5;
      if ( (unsigned int)v4 >= nCharsets )
        goto LABEL_5;
    }
    gfsCurSignature = dword_1C00EAAA0[v4];
    gjCurCharset = charsets[4 * v4];
  }
LABEL_5:
  if ( *v2 == 936 || (unsigned __int16)(*v2 - 949) <= 1u )
    *v0 = 3;
  v6 = *v2;
  LOWORD(v6) = v6 - 932;
  if ( (unsigned __int16)v6 > 0x12u || (v8 = 393233, gbDBCSCodePage = 1, !_bittest(&v8, v6)) )
    gbDBCSCodePage = 0;
  if ( (int)IsInitFNTCacheSupported_0() >= 0 )
    InitFNTCache_0();
  vCheckIsSetupRunning();
  QueryTable.Flags = 0;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontDriverQueryRoutineApiExt;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  RtlQueryRegistryValues(0x80000003, L"Font Drivers", &QueryTable, 0LL, 0LL);
  if ( (int)IsbATMFDDisabledSupported_0() >= 0
    && !(unsigned int)bATMFDDisabled_0()
    && (int)IsbEnableFontDriverSupported_0() >= 0
    && !(unsigned int)bEnableFontDriver_0()
    || (int)IsbEnableFontDriverSupported_0() >= 0 && !(unsigned int)bEnableFontDriver_0() )
  {
    return 0LL;
  }
  if ( (int)IsvGetJpn98FixPitchSupported_0() >= 0 )
    vGetJpn98FixPitch_0();
  if ( (int)IsbEnableFontDriverSupported_0() >= 0 && !(unsigned int)bEnableFontDriver_0()
    || (int)IsbEnableFontDriverSupported_0() >= 0 && !(unsigned int)bEnableFontDriver_0()
    || (int)UmfdSessionInitialize_0() < 0
    || (int)IsbInitFontTablesSupported_0() >= 0 && !(unsigned int)bInitFontTables_0()
    || (int)IsbInitStockFontsSupported_0() >= 0 && !(unsigned int)bInitStockFonts_0() )
  {
    return 0LL;
  }
  if ( (int)IsvInitFontSubTableSupported_0() >= 0 )
    vInitFontSubTable_0();
  if ( (int)IsvInitMapperSupported_0() >= 0 )
    vInitMapper_0();
  return (int)IsbInitializeEUDCSupported_0() < 0 || (unsigned int)bInitializeEUDC_0();
}
