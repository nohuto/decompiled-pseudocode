/*
 * XREFs of sub_140007D9C @ 0x140007D9C
 * Callers:
 *     sub_1400092A8 @ 0x1400092A8 (sub_1400092A8.c)
 * Callees:
 *     sub_140001FB0 @ 0x140001FB0 (sub_140001FB0.c)
 *     sub_140004C0C @ 0x140004C0C (sub_140004C0C.c)
 *     sub_140008034 @ 0x140008034 (sub_140008034.c)
 *     sub_1400080D4 @ 0x1400080D4 (sub_1400080D4.c)
 *     sub_1400081A4 @ 0x1400081A4 (sub_1400081A4.c)
 *     sub_140009724 @ 0x140009724 (sub_140009724.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_14000FBF4 @ 0x14000FBF4 (sub_14000FBF4.c)
 */

__int64 __fastcall sub_140007D9C(__int64 *a1)
{
  int v2; // ebx
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
  WCHAR SourceString[264]; // [rsp+340h] [rbp+240h] BYREF

  *(_DWORD *)&ValueName.Length = 2097182;
  ValueName.Buffer = L"SwapfileControl";
  *(_DWORD *)&v17.Length = 1179664;
  v17.Buffer = L"SwapFile";
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !byte_14002046D )
  {
    v2 = -1073741637;
    goto LABEL_17;
  }
  if ( NtQueryValueKey(
         KeyHandle,
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
  if ( NtQueryValueKey(KeyHandle, &v17, KeyValuePartialInformation, v27, 0x210u, &v19) >= 0 && v28 <= 0x204 )
  {
    LOWORD(v11) = v28;
    WORD1(v11) = v28;
    *((_QWORD *)&v11 + 1) = &v29;
    v2 = sub_140001FB0(&v11, 0LL, &DestinationString, 0LL, &UnicodeString);
    if ( v2 < 0 )
      goto LABEL_17;
    FileName = DestinationString;
    v2 = sub_140009724(&UnicodeString, &Value, &v13);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v2 < 0 )
      goto LABEL_17;
    if ( !Value || !v13 )
    {
LABEL_22:
      v2 = -1073741710;
      goto LABEL_17;
    }
    v10.QuadPart = (unsigned __int64)Value << 20;
    *(_QWORD *)&v11 = (unsigned __int64)v13 << 20;
    v2 = sub_14000FBF4(&FileName, &v9);
    if ( v2 < 0 )
      goto LABEL_17;
    v3 = v9;
    goto LABEL_11;
  }
  if ( !qword_140020440 )
  {
    v2 = -1073741275;
    goto LABEL_17;
  }
  v2 = sub_140004C0C(
         SourceString,
         0x208uLL,
         L"\\??\\%c:\\%s",
         *(unsigned __int16 *)(qword_140020440 + 24),
         L"swapfile.sys");
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&FileName, SourceString);
    v3 = qword_140020440;
    v4 = (-(__int64)((*(_BYTE *)(qword_140020440 + 16) & 0x20) != 0) & 0xFFFFFFFFF1000000uLL) + 0x10000000;
    v10.QuadPart = v4;
    v5 = (unsigned __int64)(3 * qword_140020480) >> 1;
    if ( v5 >= *(_QWORD *)(qword_140020440 + 40) / 0xAuLL )
      v5 = *(_QWORD *)(qword_140020440 + 40) / 0xAuLL;
    if ( v5 <= v4 )
      v5 = v4;
    *(_QWORD *)&v11 = v5;
LABEL_11:
    sub_1400081A4(&v10, &v11);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &FileName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u) >= 0 )
    {
      sub_1400080D4(FileHandle, &FileName);
      NtClose(FileHandle);
    }
    v6 = 0x80000000;
    if ( (*(_BYTE *)(v3 + 16) & 8) != 0
      && (int)sub_140008034(*(unsigned int *)(v3 + 20), &v8, &v9) >= 0
      && (_DWORD)v9
      && (v8 & 0xFFFFFFF0) == 0 )
    {
      v6 = (v8 | 0xFFFFFFE0) << 26;
    }
    InitialSize = v10;
    MaxiumSize.QuadPart = v11;
    v2 = NtCreatePagingFile(&FileName, &InitialSize, &MaxiumSize, v6);
    if ( v2 >= 0 )
    {
      byte_14002046C = 1;
      *a1 = v3;
    }
  }
LABEL_17:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v2;
}
