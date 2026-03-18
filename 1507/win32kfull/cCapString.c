/*
 * XREFs of cCapString @ 0x1C0033368
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0031660 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00E44D0 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0129B00 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C012A21C (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C013ECC4 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C013F73C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C0140390 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C01408F8 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     vProcessEntry @ 0x1C0149610 (vProcessEntry.c)
 *     FontAssocDefaultRoutine @ 0x1C028A7A0 (FontAssocDefaultRoutine.c)
 *     ?bCheckAndCapThePath@@YAHPEAG0KK@Z @ 0x1C02A6050 (-bCheckAndCapThePath@@YAHPEAG0KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cCapString(WCHAR *a1, WCHAR *a2, int a3)
{
  WCHAR *v4; // rbx
  WCHAR *v5; // r9
  __int64 v6; // rbx
  __int64 result; // rax
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  v5 = &a2[a3 - 1];
  if ( a2 < v5 )
  {
    do
    {
      if ( !*v4 )
        break;
      ++v4;
    }
    while ( v4 < v5 );
  }
  v6 = v4 - a2;
  if ( (_DWORD)v6 )
  {
    SourceString.Buffer = a2;
    SourceString.MaximumLength = 2 * a3;
    DestinationString.MaximumLength = 2 * a3;
    DestinationString.Buffer = a1;
    SourceString.Length = 2 * v6;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  }
  result = (unsigned int)v6;
  a1[(int)v6] = 0;
  return result;
}
