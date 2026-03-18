/*
 * XREFs of ConvertToAndFromWideChar @ 0x1C000F948
 * Callers:
 *     cUnicodeRangesSupported @ 0x1C000F81C (cUnicodeRangesSupported.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C0148DC4 (RtlWCSMessageWParamCharToMB.c)
 *     bComputeGlyphAttrBits @ 0x1C014F920 (bComputeGlyphAttrBits.c)
 *     CreateGlyphSetFromMITable @ 0x1C0244E64 (CreateGlyphSetFromMITable.c)
 *     bConvertMBCS @ 0x1C0245254 (bConvertMBCS.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0249D5C (RtlMBMessageWParamCharToWCS.c)
 *     WCSToMBEx @ 0x1C0249EC4 (WCSToMBEx.c)
 *     EngMultiByteToWideChar @ 0x1C026AA60 (EngMultiByteToWideChar.c)
 *     EngWideCharToMultiByte @ 0x1C026AA80 (EngWideCharToMultiByte.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02B317C (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ConvertToAndFromWideCharSymCP @ 0x1C026A784 (ConvertToAndFromWideCharSymCP.c)
 *     GetNlsTablePath @ 0x1C026AA9C (GetNlsTablePath.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ConvertToAndFromWideChar(
        unsigned int a1,
        WCHAR *a2,
        ULONG a3,
        CHAR *a4,
        ULONG MaxBytesInMultiByteString,
        int a6)
{
  struct _CPTABLEINFO *p_CodePageTable; // rdi
  USHORT *v11; // rbx
  NTSTATUS v12; // eax
  unsigned int v13; // ecx
  ULONG v15; // edi
  USHORT *v16; // rax
  NTSTATUS v17; // eax
  int v18; // edx
  ULONG v19; // eax
  USHORT *v20; // rdi
  ULONG BytesInMultiByteString; // [rsp+60h] [rbp-A0h] BYREF
  USHORT AnsiCodePage; // [rsp+64h] [rbp-9Ch] BYREF
  USHORT OemCodePage; // [rsp+68h] [rbp-98h] BYREF
  void *FileHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE FileInformation[8]; // [rsp+C8h] [rbp-38h] BYREF
  ULONG Length; // [rsp+D0h] [rbp-30h]
  _CPTABLEINFO CodePageTable; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[264]; // [rsp+120h] [rbp+20h] BYREF

  memset(&CodePageTable, 0, sizeof(CodePageTable));
  BytesInMultiByteString = 0;
  p_CodePageTable = 0LL;
  v11 = 0LL;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  if ( AnsiCodePage == a1 )
  {
    if ( a6 )
      v12 = RtlMultiByteToUnicodeN(a2, a3, &BytesInMultiByteString, a4, MaxBytesInMultiByteString);
    else
      v12 = RtlUnicodeToMultiByteN(a4, MaxBytesInMultiByteString, &BytesInMultiByteString, a2, a3);
    v13 = -1;
    if ( v12 >= 0 )
      return BytesInMultiByteString;
    return v13;
  }
  else
  {
    if ( a1 == 42 )
      return ConvertToAndFromWideCharSymCP((_DWORD)a2, a3, (_DWORD)a4, MaxBytesInMultiByteString, a6);
    GreAcquireFastMutex(ghfmMemory);
    if ( a1 == LastCodePageTranslated && gfLastCPTableInfoInitialized == 1 )
    {
      ++NlsTableUseCount;
      p_CodePageTable = (struct _CPTABLEINFO *)&LastCPTableInfo;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !p_CodePageTable )
    {
      if ( !(unsigned int)GetNlsTablePath(a1, SourceString) )
        return 0xFFFFFFFFLL;
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0) < 0 )
        return 0xFFFFFFFFLL;
      if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation) >= 0 )
      {
        v15 = Length;
        if ( Length )
        {
          v16 = (USHORT *)PALLOCMEM2(Length);
          v11 = v16;
          if ( v16 )
          {
            if ( ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v16, v15, 0LL, 0LL) < 0 )
            {
              Win32FreePool(v11);
              v11 = 0LL;
            }
          }
        }
      }
      ZwClose(FileHandle);
      if ( !v11 )
        return 0xFFFFFFFFLL;
      RtlInitCodePageTable(v11, &CodePageTable);
      p_CodePageTable = &CodePageTable;
    }
    if ( a6 )
      v17 = RtlCustomCPToUnicodeN(p_CodePageTable, a2, a3, &BytesInMultiByteString, a4, MaxBytesInMultiByteString);
    else
      v17 = RtlUnicodeToCustomCPN(p_CodePageTable, a4, MaxBytesInMultiByteString, &BytesInMultiByteString, a2, a3);
    v18 = v17;
    v19 = BytesInMultiByteString;
    if ( v18 < 0 )
      v19 = -1;
    BytesInMultiByteString = v19;
    if ( p_CodePageTable == &CodePageTable )
    {
      GreAcquireFastMutex(ghfmMemory);
      if ( NlsTableUseCount )
      {
        v20 = v11;
      }
      else
      {
        LastCodePageTranslated = a1;
        memmove(&LastCPTableInfo, p_CodePageTable, 0x40uLL);
        gfLastCPTableInfoInitialized = 1;
        v20 = (USHORT *)LastNlsTableBuffer;
        LastNlsTableBuffer = v11;
      }
      GreReleaseFastMutex(ghfmMemory);
      if ( v20 )
        Win32FreePool(v20);
    }
    else
    {
      GreAcquireFastMutex(ghfmMemory);
      --NlsTableUseCount;
      GreReleaseFastMutex(ghfmMemory);
    }
    return BytesInMultiByteString;
  }
}
