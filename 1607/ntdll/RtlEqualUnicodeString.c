/*
 * XREFs of RtlEqualUnicodeString @ 0x18001A1D0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x18000C630 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpCheckKnownDllFullPath @ 0x18000F544 (LdrpCheckKnownDllFullPath.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18000F984 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3DC (LdrpFindLoadedDllByName.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001E290 (RtlpIsDosDeviceName_Ustr.c)
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     RtlEqualDomainName @ 0x180055590 (RtlEqualDomainName.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180056F20 (EtwpGetPrivateLoggerContextByName.c)
 *     RtlpDetermineDosPathNameType4 @ 0x18006C524 (RtlpDetermineDosPathNameType4.c)
 *     RtlpCheckForSameCurdir @ 0x1800791BC (RtlpCheckForSameCurdir.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800EF810 (RtlpGetNtProductTypeFromRegistry.c)
 *     BaseIsThisAConsoleName @ 0x18010312C (BaseIsThisAConsoleName.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlEqualUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // r9
  char *v4; // rax
  __int64 v5; // r11
  char *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  __int64 v11; // r11

  v3 = *a1;
  if ( (_DWORD)v3 == *a2 )
  {
    v4 = (char *)*((_QWORD *)a1 + 1);
    v5 = *((_QWORD *)a2 + 1);
    v6 = &v4[v3];
    if ( a3 )
    {
      if ( v4 < v6 )
      {
        v7 = v5 - (_QWORD)v4;
        while ( 1 )
        {
          v8 = *(unsigned __int16 *)v4;
          v9 = *(unsigned __int16 *)&v4[v7];
          if ( v8 != v9 )
          {
            if ( v8 >= 0x61 )
            {
              if ( v8 > 0x7A )
                v8 = (unsigned __int16)(v8
                                      + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                 + 2LL
                                                 * ((v8 & 0xF)
                                                  + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                        + 2LL
                                                                        * (((unsigned __int8)v8 >> 4)
                                                                         + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v8)))))));
              else
                v8 -= 32;
            }
            if ( v9 >= 0x61 )
            {
              if ( v9 > 0x7A )
                v9 = (unsigned __int16)(v9
                                      + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                 + 2LL
                                                 * ((v9 & 0xF)
                                                  + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                        + 2LL
                                                                        * (((unsigned __int8)v9 >> 4)
                                                                         + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v9)))))));
              else
                v9 -= 32;
            }
            if ( v8 != v9 )
              break;
          }
          v4 += 2;
          if ( v4 >= v6 )
            return 1;
        }
        return 0;
      }
    }
    else if ( v4 < v6 )
    {
      v11 = v5 - (_QWORD)v4;
      while ( *(_WORD *)v4 == *(_WORD *)&v4[v11] )
      {
        v4 += 2;
        if ( v4 >= v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
