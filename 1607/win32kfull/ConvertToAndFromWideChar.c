/*
 * XREFs of ConvertToAndFromWideChar @ 0x1C0017E28
 * Callers:
 *     cUnicodeRangesSupported @ 0x1C0017CFC (cUnicodeRangesSupported.c)
 *     bComputeGlyphAttrBits @ 0x1C0157700 (bComputeGlyphAttrBits.c)
 *     CreateGlyphSetFromMITable @ 0x1C0240E64 (CreateGlyphSetFromMITable.c)
 *     bConvertMBCS @ 0x1C0241254 (bConvertMBCS.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C0246070 (RtlMBMessageWParamCharToWCS.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C02461D8 (RtlWCSMessageWParamCharToMB.c)
 *     WCSToMBEx @ 0x1C0246314 (WCSToMBEx.c)
 *     EngMultiByteToWideChar @ 0x1C0268F20 (EngMultiByteToWideChar.c)
 *     EngWideCharToMultiByte @ 0x1C0268F40 (EngWideCharToMultiByte.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02B62B8 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ConvertToAndFromWideCharSymCP @ 0x1C0268C44 (ConvertToAndFromWideCharSymCP.c)
 *     GetNlsTablePath @ 0x1C0268F5C (GetNlsTablePath.c)
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
  USHORT *v10; // rbx
  struct _CPTABLEINFO *p_CodePageTable; // rdi
  NTSTATUS v12; // eax
  unsigned int v13; // ecx
  ULONG v15; // edi
  USHORT *Buffer; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  NTSTATUS v19; // eax
  int v20; // edx
  ULONG v21; // eax
  USHORT *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8
  ULONG BytesInMultiByteString; // [rsp+60h] [rbp-A0h] BYREF
  USHORT AnsiCodePage; // [rsp+64h] [rbp-9Ch] BYREF
  USHORT OemCodePage; // [rsp+68h] [rbp-98h] BYREF
  void *FileHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _BYTE FileInformation[8]; // [rsp+C8h] [rbp-38h] BYREF
  ULONG Length; // [rsp+D0h] [rbp-30h]
  _CPTABLEINFO CodePageTable; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[264]; // [rsp+120h] [rbp+20h] BYREF

  memset(&CodePageTable, 0, sizeof(CodePageTable));
  v10 = 0LL;
  BytesInMultiByteString = 0;
  p_CodePageTable = 0LL;
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
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0) < 0 )
        return 0xFFFFFFFFLL;
      if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation) >= 0 )
      {
        v15 = Length;
        if ( Length )
        {
          Buffer = (USHORT *)PALLOCMEM2(Length);
          v10 = Buffer;
          if ( Buffer )
          {
            if ( ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v15, 0LL, 0LL) < 0 )
            {
              Win32FreePool(v10, v17, v18);
              v10 = 0LL;
            }
          }
        }
      }
      ZwClose(FileHandle);
      if ( !v10 )
        return 0xFFFFFFFFLL;
      RtlInitCodePageTable(v10, &CodePageTable);
      p_CodePageTable = &CodePageTable;
    }
    if ( a6 )
      v19 = RtlCustomCPToUnicodeN(p_CodePageTable, a2, a3, &BytesInMultiByteString, a4, MaxBytesInMultiByteString);
    else
      v19 = RtlUnicodeToCustomCPN(p_CodePageTable, a4, MaxBytesInMultiByteString, &BytesInMultiByteString, a2, a3);
    v20 = v19;
    v21 = BytesInMultiByteString;
    if ( v20 < 0 )
      v21 = -1;
    BytesInMultiByteString = v21;
    if ( p_CodePageTable == &CodePageTable )
    {
      GreAcquireFastMutex(ghfmMemory);
      if ( NlsTableUseCount )
      {
        v22 = v10;
      }
      else
      {
        LastCodePageTranslated = a1;
        memmove(&LastCPTableInfo, p_CodePageTable, 0x40uLL);
        gfLastCPTableInfoInitialized = 1;
        v22 = (USHORT *)LastNlsTableBuffer;
        LastNlsTableBuffer = v10;
      }
      GreReleaseFastMutex(ghfmMemory);
      if ( v22 )
        Win32FreePool(v22, v23, v24);
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
