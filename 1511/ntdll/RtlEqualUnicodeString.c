/*
 * XREFs of RtlEqualUnicodeString @ 0x1800150E0
 * Callers:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180007E28 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrpFindLoadedDllByName @ 0x180015388 (LdrpFindLoadedDllByName.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x180017960 (RtlpIsDosDeviceName_Ustr.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180047788 (EtwpGetPrivateLoggerContextByName.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800628B0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlEqualDomainName @ 0x1800692D0 (RtlEqualDomainName.c)
 *     RtlpDetermineDosPathNameType4 @ 0x18006EB74 (RtlpDetermineDosPathNameType4.c)
 *     LdrpCheckKnownDllFullPath @ 0x180072BE0 (LdrpCheckKnownDllFullPath.c)
 *     RtlGetNtProductType @ 0x1800743D0 (RtlGetNtProductType.c)
 *     RtlpCheckForSameCurdir @ 0x180077D40 (RtlpCheckForSameCurdir.c)
 *     BaseIsThisAConsoleName @ 0x1800F8798 (BaseIsThisAConsoleName.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlEqualUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  unsigned __int16 *Buffer; // rax
  unsigned __int16 *v5; // r11
  unsigned __int16 *v6; // r10
  signed __int64 v7; // r11
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  signed __int64 v11; // r11

  Length = String1->Length;
  if ( (_DWORD)Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v5 = String2->Buffer;
    v6 = (unsigned __int16 *)((char *)Buffer + Length);
    if ( CaseInSensitive )
    {
      if ( Buffer < v6 )
      {
        v7 = (char *)v5 - (char *)Buffer;
        while ( 1 )
        {
          v8 = *Buffer;
          v9 = *(unsigned __int16 *)((char *)Buffer + v7);
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
          if ( ++Buffer >= v6 )
            return 1;
        }
        return 0;
      }
    }
    else if ( Buffer < v6 )
    {
      v11 = (char *)v5 - (char *)Buffer;
      while ( *Buffer == *(unsigned __int16 *)((char *)Buffer + v11) )
      {
        if ( ++Buffer >= v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
