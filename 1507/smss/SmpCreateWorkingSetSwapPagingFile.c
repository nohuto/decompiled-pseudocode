/*
 * XREFs of SmpCreateWorkingSetSwapPagingFile @ 0x14000986C
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000AF10 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpParseSwapOrPageFileArguments @ 0x140002780 (SmpParseSwapOrPageFileArguments.c)
 *     SmpParseCommandLine @ 0x140003620 (SmpParseCommandLine.c)
 *     RtlStringCbPrintfW @ 0x1400084FC (RtlStringCbPrintfW.c)
 *     SmpCheckHybridPriority @ 0x140009B04 (SmpCheckHybridPriority.c)
 *     SmpTrimPagingFileExtents @ 0x140009BA4 (SmpTrimPagingFileExtents.c)
 *     SmpUpdatePagingFileSizes @ 0x140009C74 (SmpUpdatePagingFileSizes.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     SmpGetVolumeDescriptorForPath @ 0x14000FD18 (SmpGetVolumeDescriptorForPath.c)
 */

__int64 __fastcall SmpCreateWorkingSetSwapPagingFile(__int64 *a1)
{
  int VolumeDescriptorForPath; // ebx
  __int64 v3; // rdi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  ULONG v6; // ebx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  union _LARGE_INTEGER v10; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Value; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v13; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _UNICODE_STRING FileName; // [rsp+60h] [rbp-A0h] BYREF
  void *FileHandle; // [rsp+70h] [rbp-90h] BYREF
  union _LARGE_INTEGER InitialSize; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING v17; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  ULONG v19; // [rsp+A0h] [rbp-60h] BYREF
  union _LARGE_INTEGER MaxiumSize; // [rsp+A8h] [rbp-58h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+B0h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-38h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+8h] BYREF
  _DWORD KeyValueInformation[6]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v27[8]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v28; // [rsp+138h] [rbp+38h]
  char v29; // [rsp+13Ch] [rbp+3Ch] BYREF
  wchar_t pszDest[264]; // [rsp+340h] [rbp+240h] BYREF

  *(_DWORD *)&ValueName.Length = 2097182;
  ValueName.Buffer = L"SwapfileControl";
  *(_DWORD *)&v17.Length = 1179664;
  v17.Buffer = L"SwapFile";
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !SmpClientSku )
  {
    VolumeDescriptorForPath = -1073741637;
    goto LABEL_17;
  }
  if ( NtQueryValueKey(
         SmpMmKey,
         &ValueName,
         KeyValuePartialInformationAlign64,
         KeyValueInformation,
         0x10u,
         &ResultLength) >= 0
    && KeyValueInformation[0] == 4
    && KeyValueInformation[1] == 4
    && !KeyValueInformation[2] )
  {
    goto LABEL_22;
  }
  if ( NtQueryValueKey(SmpMmKey, &v17, KeyValuePartialInformation, v27, 0x210u, &v19) >= 0 && v28 <= 0x204 )
  {
    LOWORD(v11) = v28;
    WORD1(v11) = v28;
    *((_QWORD *)&v11 + 1) = &v29;
    VolumeDescriptorForPath = SmpParseCommandLine(&v11, 0LL, &DestinationString, 0LL, &UnicodeString);
    if ( VolumeDescriptorForPath < 0 )
      goto LABEL_17;
    FileName = DestinationString;
    VolumeDescriptorForPath = SmpParseSwapOrPageFileArguments(&UnicodeString, &Value, &v13);
    RtlFreeUnicodeString(&UnicodeString);
    if ( VolumeDescriptorForPath < 0 )
      goto LABEL_17;
    if ( !Value || !v13 )
    {
LABEL_22:
      VolumeDescriptorForPath = -1073741710;
      goto LABEL_17;
    }
    v10.QuadPart = (unsigned __int64)Value << 20;
    *(_QWORD *)&v11 = (unsigned __int64)v13 << 20;
    VolumeDescriptorForPath = SmpGetVolumeDescriptorForPath(&FileName, &v9);
    if ( VolumeDescriptorForPath < 0 )
      goto LABEL_17;
    v3 = v9;
    goto LABEL_11;
  }
  if ( !SmpOsVolumeDescriptor )
  {
    VolumeDescriptorForPath = -1073741275;
    goto LABEL_17;
  }
  VolumeDescriptorForPath = RtlStringCbPrintfW(
                              pszDest,
                              0x208uLL,
                              L"\\??\\%c:\\%s",
                              *(unsigned __int16 *)(SmpOsVolumeDescriptor + 24),
                              L"swapfile.sys");
  if ( VolumeDescriptorForPath >= 0 )
  {
    RtlInitUnicodeString(&FileName, pszDest);
    v3 = SmpOsVolumeDescriptor;
    v4 = (-(__int64)((*(_BYTE *)(SmpOsVolumeDescriptor + 16) & 0x20) != 0) & 0xFFFFFFFFF1000000uLL) + 0x10000000;
    v10.QuadPart = v4;
    v5 = (unsigned __int64)(3 * SmpMemorySize) >> 1;
    if ( v5 >= *(_QWORD *)(SmpOsVolumeDescriptor + 40) / 0xAuLL )
      v5 = *(_QWORD *)(SmpOsVolumeDescriptor + 40) / 0xAuLL;
    if ( v5 <= v4 )
      v5 = v4;
    *(_QWORD *)&v11 = v5;
LABEL_11:
    SmpUpdatePagingFileSizes(&v10, &v11);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &FileName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u) >= 0 )
    {
      SmpTrimPagingFileExtents(FileHandle, &FileName);
      NtClose(FileHandle);
    }
    v6 = 0x80000000;
    if ( (*(_BYTE *)(v3 + 16) & 8) != 0
      && (int)SmpCheckHybridPriority(*(unsigned int *)(v3 + 20), &v8, &v9) >= 0
      && (_DWORD)v9
      && (v8 & 0xFFFFFFF0) == 0 )
    {
      v6 = (v8 | 0xFFFFFFE0) << 26;
    }
    InitialSize = v10;
    MaxiumSize.QuadPart = v11;
    VolumeDescriptorForPath = NtCreatePagingFile(&FileName, &InitialSize, &MaxiumSize, v6);
    if ( VolumeDescriptorForPath >= 0 )
    {
      SmpWsSwapPagefileCreated = 1;
      *a1 = v3;
    }
  }
LABEL_17:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)VolumeDescriptorForPath;
}
