/*
 * XREFs of NtUserResolveDesktopForWOW @ 0x1C021F600
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E882C (xxxResolveDesktopForWOW.c)
 */

__int64 __fastcall NtUserResolveDesktopForWOW(struct _UNICODE_STRING *a1)
{
  struct _UNICODE_STRING *v2; // rax
  int v3; // ecx
  WCHAR *Buffer; // rdi
  char *v5; // r8
  unsigned __int16 epi16; // ax
  WCHAR *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  int v12; // [rsp+20h] [rbp-68h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp-28h] BYREF
  int v16; // [rsp+98h] [rbp+10h]

  v12 = 0;
  EnterCrit(1LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v2 = (struct _UNICODE_STRING *)W32UserProbeAddress;
  v3 = *(_DWORD *)&v2->Length;
  v16 = *(_DWORD *)&v2->Length;
  *(_DWORD *)&SourceString.Length = *(_DWORD *)&v2->Length;
  Buffer = v2->Buffer;
  SourceString.Buffer = Buffer;
  if ( ((unsigned __int8)Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (char *)Buffer + HIWORD(v16);
  if ( (unsigned __int64)v5 >= W32UserProbeAddress
    || (unsigned __int16)v3 > HIWORD(v16)
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
    v12 = 1;
    PushW32ThreadLock((__int64)v7, v15, (__int64)Win32FreePool);
    memmove(SourceString.Buffer, Buffer, SourceString.Length);
  }
  else
  {
    SourceString.Buffer = 0LL;
  }
  v10 = xxxResolveDesktopForWOW(&SourceString);
  if ( v10 >= 0 )
  {
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    *a1 = DestinationString;
  }
  if ( v12 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v15);
  UserSessionSwitchLeaveCrit(v9, v8);
  return (unsigned int)v10;
}
