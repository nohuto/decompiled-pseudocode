/*
 * XREFs of sub_140006D94 @ 0x140006D94
 * Callers:
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 * Callees:
 *     sub_1400064C4 @ 0x1400064C4 (sub_1400064C4.c)
 *     sub_140008D78 @ 0x140008D78 (sub_140008D78.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_1400114A8 @ 0x1400114A8 (sub_1400114A8.c)
 *     sub_1400117BC @ 0x1400117BC (sub_1400117BC.c)
 *     sub_140011CE0 @ 0x140011CE0 (sub_140011CE0.c)
 *     sub_140011DD0 @ 0x140011DD0 (sub_140011DD0.c)
 *     sub_140011F14 @ 0x140011F14 (sub_140011F14.c)
 *     sub_1400121A8 @ 0x1400121A8 (sub_1400121A8.c)
 *     sub_1400123D0 @ 0x1400123D0 (sub_1400123D0.c)
 *     sub_1400124C0 @ 0x1400124C0 (sub_1400124C0.c)
 *     sub_1400127F8 @ 0x1400127F8 (sub_1400127F8.c)
 *     sub_14001290C @ 0x14001290C (sub_14001290C.c)
 */

__int64 __fastcall sub_140006D94(int a1)
{
  char v1; // r15
  __int64 *v2; // rax
  int v3; // r13d
  __int64 v4; // rdi
  NTSTATUS v6; // eax
  unsigned __int8 v7; // cl
  __int64 v8; // rsi
  _WORD *v9; // rax
  int v10; // ebx
  unsigned int v11; // esi
  int v12; // eax
  int v13; // eax
  unsigned __int8 OldValue[8]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v15; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  int v18; // [rsp+A0h] [rbp-68h]
  int v19; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-58h]
  __int64 v21; // [rsp+B8h] [rbp-50h]
  int v22; // [rsp+C0h] [rbp-48h]
  __int128 v23; // [rsp+C8h] [rbp-40h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-30h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE Buffer[512]; // [rsp+F8h] [rbp-10h] BYREF

  v18 = a1;
  v1 = 0;
  OldValue[0] = 1;
  if ( byte_14001FE88 )
  {
    v6 = RtlAdjustPrivilege(0x12u, 1u, 0, OldValue);
    v7 = OldValue[0];
    if ( v6 < 0 )
      v7 = 1;
    OldValue[0] = v7;
  }
  if ( dword_140020150 )
    sub_1400117BC();
  sub_1400064C4(&stru_1400159A8);
  v2 = (__int64 *)qword_140020100;
  v3 = 0;
  v4 = qword_140020100;
  *(_DWORD *)&OldValue[4] = 0;
  while ( v2 != &qword_140020100 )
  {
    Handle = 0LL;
    v8 = v4;
    sub_140011CE0(&qword_140020100, v4 + 16, v4 + 32);
    if ( *(_WORD *)(v4 + 32) )
      goto LABEL_22;
    v9 = *(_WORD **)(v4 + 24);
    if ( *v9 == 64 )
    {
      *(_QWORD *)(v4 + 24) = v9 + 1;
      *(_WORD *)(v4 + 16) -= 2;
    }
    if ( *(_WORD *)(v4 + 32) )
    {
LABEL_22:
      v20 = 0LL;
      v19 = 48;
      v22 = 64;
      v21 = v4 + 16;
      v23 = 0LL;
      v10 = sub_1400123D0(&Handle, 1114112LL, &v19);
      if ( v10 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v4 + 40));
        if ( *DestinationString.Buffer == 33 || *DestinationString.Buffer == 64 )
        {
          v11 = 1;
          ++DestinationString.Buffer;
          DestinationString.Length -= 2;
          DestinationString.MaximumLength -= 2;
        }
        else
        {
          v11 = 0;
        }
        v12 = sub_1400124C0(&DestinationString, Handle, v11);
        v10 = v12;
        if ( v12 < 0 )
        {
          if ( v11 )
          {
            if ( v12 == -1073741790 )
            {
              v10 = sub_14001290C(&DestinationString, Handle);
              if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741638 )
              {
                v10 = sub_1400127F8(&DestinationString, Handle);
                v13 = *(_DWORD *)&OldValue[4];
                if ( v10 >= 0 )
                  v13 = 1;
                *(_DWORD *)&OldValue[4] = v13;
              }
            }
          }
        }
        v8 = v4;
      }
    }
    else
    {
      v10 = sub_140011DD0(v4 + 16);
    }
    if ( Handle )
      NtClose(Handle);
    if ( v10 < 0 )
      v1 |= sub_1400121A8(v4 + 16, v4 + 32, (unsigned int)v10);
    else
      ++v3;
    v4 = *(_QWORD *)v4;
    sub_140008D78(v8);
    v2 = (__int64 *)qword_140020100;
  }
  if ( !OldValue[0] )
    RtlAdjustPrivilege(0x12u, 0, 0, OldValue);
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations");
  RtlDeleteRegistryValue(2u, L"Session Manager", L"PendingFileRenameOperations2");
  if ( v18 )
  {
    RtlDeleteRegistryValue(0, L"\\Registry\\Machine\\Xbox\\Session Manager", L"PendingFileRenameOperations");
    RtlDeleteRegistryValue(0, L"\\Registry\\Machine\\Xbox\\Session Manager", L"PendingFileRenameOperations2");
  }
  if ( *(_DWORD *)&OldValue[4] )
    RtlWriteRegistryValue(2u, L"Session Manager", L"ClearTempFiles", 4u, &OldValue[4], 4u);
  if ( qword_14001FCF0 )
  {
    if ( v1 )
    {
      sub_140011F14(&TimeFields);
      if ( (int)sub_1400114A8(
                  (unsigned int)Buffer,
                  512,
                  0,
                  (unsigned int)&v15,
                  0,
                  (__int64)L"%d/%d/%d %d:%d:%d - %d Successful PFRO operations\r\n\r\n",
                  TimeFields.Month,
                  TimeFields.Day,
                  TimeFields.Year,
                  TimeFields.Hour,
                  TimeFields.Minute,
                  TimeFields.Second,
                  v3) >= 0 )
        NtWriteFile(qword_14001FCF0, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 512 - v15, 0LL, 0LL);
    }
    NtClose(qword_14001FCF0);
    qword_14001FCF0 = 0LL;
  }
  return sub_1400064C4(&stru_140015920);
}
