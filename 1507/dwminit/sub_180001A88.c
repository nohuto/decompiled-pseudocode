/*
 * XREFs of sub_180001A88 @ 0x180001A88
 * Callers:
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 * Callees:
 *     sub_180001228 @ 0x180001228 (sub_180001228.c)
 *     sub_1800018C0 @ 0x1800018C0 (sub_1800018C0.c)
 *     sub_180001984 @ 0x180001984 (sub_180001984.c)
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 *     sub_180003B24 @ 0x180003B24 (sub_180003B24.c)
 *     __security_check_cookie @ 0x1800063A0 (__security_check_cookie.c)
 */

__int64 sub_180001A88()
{
  int v0; // eax
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  NTSTATUS v4; // ebx
  unsigned int v5; // r9d
  NTSTATUS v6; // ebx
  NTSTATUS v7; // ebx
  ULONG SubAuthority2; // [rsp+28h] [rbp-49h]
  int v10; // [rsp+68h] [rbp-9h] BYREF
  PSID v11; // [rsp+70h] [rbp-1h] BYREF
  PSID Sid; // [rsp+78h] [rbp+7h] BYREF
  PSID v13; // [rsp+80h] [rbp+Fh] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp+17h] BYREF
  struct _UNICODE_STRING v15; // [rsp+98h] [rbp+27h] BYREF
  struct _UNICODE_STRING v16; // [rsp+A8h] [rbp+37h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B8h] [rbp+47h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Sid = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v0 = sub_180001228(Buffer, 30LL, L"DWM-%d", NtCurrentPeb()->SessionId);
  v1 = v0;
  if ( v0 < 0 )
  {
    if ( !&unk_180008D64 )
    {
      v2 = 491LL;
LABEL_4:
      v3 = (unsigned int)v0;
LABEL_5:
      sub_180003A80(v3, v2);
      goto LABEL_36;
    }
    SubAuthority2 = 491;
LABEL_34:
    v5 = v0;
    goto LABEL_35;
  }
  RtlInitUnicodeString(&DestinationString, L"Window Manager");
  RtlInitUnicodeString(&v15, L"Window Manager Group");
  RtlInitUnicodeString(&v16, Buffer);
  v4 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v4 >= 0 )
  {
    v6 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &v11);
    if ( v6 >= 0 )
    {
      v7 = RtlAllocateAndInitializeSid(
             &IdentifierAuthority,
             3u,
             0x5Au,
             0,
             NtCurrentPeb()->SessionId,
             0,
             0,
             0,
             0,
             0,
             &v13);
      if ( v7 >= 0 )
      {
        v0 = sub_180001984((__int128 *)&DestinationString, 0LL, (__int64)Sid, &v10);
        v1 = v0;
        if ( v0 >= 0 )
        {
          if ( sub_1800018C0(v10)
            || (v0 = sub_180001984((__int128 *)&DestinationString, &v15, (__int64)v11, &v10), v1 = v0, v0 >= 0) )
          {
            v0 = sub_180001984((__int128 *)&DestinationString, &v16, (__int64)v13, &v10);
            v1 = v0;
            if ( v0 >= 0 )
              goto LABEL_36;
            if ( !&unk_180008D64 )
            {
              v2 = 552LL;
              goto LABEL_4;
            }
            SubAuthority2 = 552;
          }
          else
          {
            if ( !&unk_180008D64 )
            {
              v2 = 548LL;
              goto LABEL_4;
            }
            SubAuthority2 = 548;
          }
        }
        else
        {
          if ( !&unk_180008D64 )
          {
            v2 = 536LL;
            goto LABEL_4;
          }
          SubAuthority2 = 536;
        }
        goto LABEL_34;
      }
      v1 = v7 | 0x10000000;
      if ( !&unk_180008D64 )
      {
        v2 = 534LL;
        goto LABEL_10;
      }
      SubAuthority2 = 534;
    }
    else
    {
      v1 = v6 | 0x10000000;
      if ( !&unk_180008D64 )
      {
        v2 = 521LL;
        goto LABEL_10;
      }
      SubAuthority2 = 521;
    }
  }
  else
  {
    v1 = v4 | 0x10000000;
    if ( !&unk_180008D64 )
    {
      v2 = 508LL;
LABEL_10:
      v3 = v1;
      goto LABEL_5;
    }
    SubAuthority2 = 508;
  }
  v5 = v1;
LABEL_35:
  sub_180003B24(4, (unsigned int)&unk_180008D64, 1, v5, SubAuthority2);
LABEL_36:
  if ( v13 )
    RtlFreeSid(v13);
  if ( v11 )
    RtlFreeSid(v11);
  if ( Sid )
    RtlFreeSid(Sid);
  return v1;
}
