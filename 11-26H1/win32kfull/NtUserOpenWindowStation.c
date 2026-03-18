/*
 * XREFs of NtUserOpenWindowStation @ 0x1401F79D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _OpenWindowStation @ 0x1401F7BD8 (_OpenWindowStation.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402AE4F0 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall NtUserOpenWindowStation(void *Src, unsigned int a2)
{
  __int64 v4; // rbx
  bool v5; // di
  __m128i v6; // xmm7
  struct _UNICODE_STRING *v7; // xmm6_8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v11; // rcx
  NTSTATUS ProcessLuid; // eax
  volatile void *Address[2]; // [rsp+48h] [rbp-B0h]
  __m128i v15; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+68h] [rbp-90h]
  __int128 v17; // [rsp+78h] [rbp-80h]
  __m128i v18; // [rsp+88h] [rbp-70h]
  __int128 v19; // [rsp+98h] [rbp-60h]
  __int128 v20; // [rsp+A8h] [rbp-50h]
  __int64 v21; // [rsp+110h] [rbp+18h] BYREF

  v4 = 0LL;
  v21 = 0LL;
  v5 = 1;
  EnterCrit(0LL, 0LL);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  RtlCopyFromUser(&v15, Src, 0x30uLL);
  v6 = v15;
  v18 = v15;
  v7 = (struct _UNICODE_STRING *)v16;
  v19 = v16;
  v20 = v17;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v8);
  ProbeForWrite(v7, 0x10uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  *(struct _UNICODE_STRING *)Address = *v7;
  if ( _mm_srli_si128(v6, 8).m128i_u64[0] )
  {
    if ( Address[1] )
    {
      if ( LODWORD(Address[0]) == 3801144 )
      {
        ProbeForWrite(Address[1], 0x3AuLL, 2u);
        if ( !_wcsicmp((const wchar_t *)Address[1], L"Service-0x00000000-00000000$") )
        {
          ProcessLuid = GetProcessLuid(0LL, &v21);
          v5 = ProcessLuid >= 0;
          if ( ProcessLuid < 0 )
          {
            UserSetLastStatus(ProcessLuid, 1);
          }
          else
          {
            RtlStringCbPrintfW((unsigned __int16 *)Address[1], 0x3AuLL, L"Service-0x%x-%x$", HIDWORD(v21), v21);
            RtlInitUnicodeString(v7, (PCWSTR)Address[1]);
          }
        }
      }
    }
  }
  if ( v5 )
    v4 = OpenWindowStation(Src, a2);
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
