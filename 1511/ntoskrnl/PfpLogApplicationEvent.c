/*
 * XREFs of PfpLogApplicationEvent @ 0x14001B76C
 * Callers:
 *     PspExitProcess @ 0x1403E6F28 (PspExitProcess.c)
 *     PfCalculateProcessHash @ 0x1404D6804 (PfCalculateProcessHash.c)
 * Callees:
 *     PfLogEvent @ 0x14001BBB0 (PfLogEvent.c)
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmGetSessionGlobalVA @ 0x1404BAD68 (MmGetSessionGlobalVA.c)
 *     MmGetDirectoryFrameFromProcess @ 0x1404C06E8 (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, UNICODE_STRING *a2, char a3)
{
  UNICODE_STRING *p_DestinationString; // rsi
  unsigned int v5; // r11d
  __int64 v6; // r9
  __int64 v8; // rax
  __int64 DirectoryFrameFromProcess; // rax
  __int64 Length; // rcx
  wchar_t *Buffer; // rdx
  unsigned int v12; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v14[256]; // [rsp+30h] [rbp-D0h] BYREF

  p_DestinationString = a2;
  if ( dword_140302698 >= (unsigned int)dword_14030269C )
    return 3221225659LL;
  v14[255] = 0LL;
  if ( a3 )
  {
    v14[0] = a1;
    v14[2] = 0LL;
    v5 = 14;
    v6 = 24LL;
    LODWORD(v14[2]) = *(_DWORD *)(a1 + 744);
    v14[1] = (a1 ^ *(_QWORD *)(a1 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
    HIDWORD(v14[2]) = *(_DWORD *)(a1 + 1180);
  }
  else
  {
    if ( !a2 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      p_DestinationString = &DestinationString;
    }
    memset(v14, 0, 0x40uLL);
    HIDWORD(v14[3]) = *(_DWORD *)(a1 + 744);
    v8 = a1 ^ *(_QWORD *)(a1 + 776);
    v14[6] = a1;
    v14[4] = v8 & 0x1FFFFFFFFFFFFFFFLL;
    LODWORD(v14[3]) = *(_DWORD *)(a1 + 1180);
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1);
    Length = p_DestinationString->Length;
    Buffer = p_DestinationString->Buffer;
    v12 = p_DestinationString->Length;
    v14[5] = DirectoryFrameFromProcess;
    if ( (unsigned int)Length > 0x7C0 )
      v12 = 1984;
    WORD2(v14[7]) = v12 >> 1;
    memmove((char *)&v14[7] + 6, (char *)Buffer + Length - v12, v12);
    *((_WORD *)&v14[7] + WORD2(v14[7]) + 3) = 0;
    LODWORD(v14[0]) = MmGetSessionId(a1);
    v14[1] = MmGetSessionGlobalVA();
    v6 = v12 + 64;
    v5 = 1;
    v14[2] = PsIdleProcess;
  }
  return PfLogEvent(
           v5,
           dword_14030575C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v14,
           v6);
}
