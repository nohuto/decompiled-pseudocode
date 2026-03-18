/*
 * XREFs of NtUserResolveDesktopForWOW @ 0x1C0218F70
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     xxxResolveDesktopForWOW @ 0x1C01DF6EC (xxxResolveDesktopForWOW.c)
 */

__int64 __fastcall NtUserResolveDesktopForWOW(struct _UNICODE_STRING *a1)
{
  struct _UNICODE_STRING *v2; // rax
  int v3; // ecx
  WCHAR *Buffer; // rdi
  char *v5; // r8
  unsigned __int16 epi16; // ax
  WCHAR *v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+20h] [rbp-68h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+60h] [rbp-28h] BYREF
  int v19; // [rsp+98h] [rbp+10h]

  v15 = 0;
  EnterCrit(0LL, 1LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v2 = (struct _UNICODE_STRING *)W32UserProbeAddress;
  v3 = *(_DWORD *)&v2->Length;
  v19 = *(_DWORD *)&v2->Length;
  *(_DWORD *)&SourceString.Length = *(_DWORD *)&v2->Length;
  Buffer = v2->Buffer;
  SourceString.Buffer = Buffer;
  if ( ((unsigned __int8)Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (char *)Buffer + HIWORD(v19);
  if ( (unsigned __int64)v5 >= W32UserProbeAddress
    || (unsigned __int16)v3 > HIWORD(v19)
    || (v3 & 1) != 0
    || v5 <= (char *)Buffer )
  {
    *W32UserProbeAddress = 0;
    Buffer = SourceString.Buffer;
  }
  DestinationString = SourceString;
  epi16 = _mm_extract_epi16((__m128i)SourceString, 1);
  if ( epi16 )
  {
    v7 = (WCHAR *)Win32AllocPoolWithQuota(epi16, 2037674837LL);
    SourceString.Buffer = v7;
    if ( !v7 )
      ExRaiseStatus(-1073741801);
    v15 = 1;
    PushW32ThreadLock((__int64)v7, v18, (__int64)Win32FreePool, v8);
    memmove(SourceString.Buffer, Buffer, SourceString.Length);
  }
  else
  {
    SourceString.Buffer = 0LL;
  }
  v11 = xxxResolveDesktopForWOW(&SourceString);
  if ( v11 >= 0 )
  {
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    *a1 = DestinationString;
  }
  if ( v15 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v18, v9, v12, v13);
  UserSessionSwitchLeaveCrit(v10, v9);
  return (unsigned int)v11;
}
