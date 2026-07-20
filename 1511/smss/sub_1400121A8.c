/*
 * XREFs of sub_1400121A8 @ 0x1400121A8
 * Callers:
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_1400114A8 @ 0x1400114A8 (sub_1400114A8.c)
 *     sub_140011F14 @ 0x140011F14 (sub_140011F14.c)
 */

bool __fastcall sub_1400121A8(__int64 a1, const wchar_t *a2, int a3)
{
  ULONG v6; // ebx
  NTSTATUS v8; // eax
  HANDLE v9; // rcx
  const wchar_t *v10; // r11
  wchar_t *v11; // rdi
  __int64 ShareAccess; // [rsp+30h] [rbp-D0h]
  ULONG CreateDisposition[2]; // [rsp+38h] [rbp-C8h]
  ULONG CreateOptions[2]; // [rsp+40h] [rbp-C0h]
  PVOID EaBuffer; // [rsp+48h] [rbp-B8h]
  __int64 EaLength; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE FileInformation[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-20h]
  _WORD v23[256]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = 48;
  if ( !qword_14001FCF0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"(*";
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtCreateFile(&qword_14001FCF0, 0x120002u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 0, 3u, 0x64u, 0LL, 0) < 0 )
    {
LABEL_3:
      qword_14001FCF0 = 0LL;
      return 0;
    }
    v8 = NtQueryInformationFile(qword_14001FCF0, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
    v9 = qword_14001FCF0;
    if ( v8 < 0 )
    {
LABEL_5:
      NtClose(v9);
      goto LABEL_3;
    }
    v17 = v22;
    if ( NtSetInformationFile(qword_14001FCF0, &IoStatusBlock, &v17, 8u, FilePositionInformation) < 0 )
    {
      v9 = qword_14001FCF0;
      goto LABEL_5;
    }
  }
  sub_140011F14(&TimeFields);
  v10 = L"$&";
  if ( *a2 )
    v10 = a2;
  v11 = v23;
  LODWORD(EaLength) = TimeFields.Minute;
  LODWORD(EaBuffer) = TimeFields.Hour;
  CreateOptions[0] = TimeFields.Year;
  CreateDisposition[0] = TimeFields.Day;
  LODWORD(ShareAccess) = TimeFields.Month;
  if ( (int)sub_1400114A8(
              v23,
              0x200uLL,
              0LL,
              &v17,
              0,
              L"%d/%d/%d %d:%d:%d - PFRO Error: %wZ, %wZ, 0x%x\r\n",
              ShareAccess,
              *(_QWORD *)CreateDisposition,
              *(_QWORD *)CreateOptions,
              EaBuffer,
              EaLength,
              TimeFields.Second,
              a1,
              v10,
              a3) >= 0 )
    v6 = 512 - v17;
  else
    v11 = L"Error logging PFRO error";
  return NtWriteFile(qword_14001FCF0, 0LL, 0LL, 0LL, &IoStatusBlock, v11, v6, 0LL, 0LL) >= 0;
}
