/*
 * XREFs of PfpLogApplicationEvent @ 0x140006674
 * Callers:
 *     PfCalculateProcessHash @ 0x1403E7E20 (PfCalculateProcessHash.c)
 *     PspExitProcess @ 0x14045F434 (PspExitProcess.c)
 * Callees:
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PfLogEvent @ 0x1400EE5B8 (PfLogEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MmGetSessionGlobalVA @ 0x1403E8F94 (MmGetSessionGlobalVA.c)
 *     MmGetDirectoryFrameFromProcess @ 0x1403E8FB8 (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, UNICODE_STRING *a2, char a3)
{
  UNICODE_STRING *p_DestinationString; // rsi
  unsigned int v5; // r11d
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 DirectoryFrameFromProcess; // rax
  __int64 Length; // rcx
  wchar_t *Buffer; // rdx
  unsigned int v15; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v17[256]; // [rsp+30h] [rbp-D0h] BYREF

  p_DestinationString = a2;
  if ( dword_140328258 >= (unsigned int)dword_14032825C )
    return 3221225659LL;
  v17[255] = 0LL;
  if ( a3 )
  {
    v17[0] = a1;
    v17[2] = 0LL;
    v5 = 14;
    v6 = *(_DWORD *)(a1 + 744);
    v7 = *(_QWORD *)(a1 + 744) ^ *(_QWORD *)(a1 + 776);
    LODWORD(v17[2]) = v6;
    v8 = *(_DWORD *)(a1 + 1180);
    v17[1] = v7 & 0x1FFFFFFFFFFFFFFFLL;
    HIDWORD(v17[2]) = v8;
  }
  else
  {
    if ( !a2 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      p_DestinationString = &DestinationString;
    }
    memset(v17, 0, 0x40uLL);
    v10 = *(_QWORD *)(a1 + 744) ^ *(_QWORD *)(a1 + 776);
    HIDWORD(v17[3]) = *(_DWORD *)(a1 + 744);
    v17[6] = a1;
    v11 = *(_DWORD *)(a1 + 1180);
    v17[4] = v10 & 0x1FFFFFFFFFFFFFFFLL;
    LODWORD(v17[3]) = v11;
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1);
    Length = p_DestinationString->Length;
    Buffer = p_DestinationString->Buffer;
    v15 = p_DestinationString->Length;
    v17[5] = DirectoryFrameFromProcess;
    if ( (unsigned int)Length > 0x7C0 )
      v15 = 1984;
    WORD2(v17[7]) = v15 >> 1;
    memmove((char *)&v17[7] + 6, (char *)Buffer + Length - v15, v15);
    *((_WORD *)&v17[7] + WORD2(v17[7]) + 3) = 0;
    LODWORD(v17[0]) = MmGetSessionId(a1);
    v17[1] = MmGetSessionGlobalVA();
    v5 = 1;
    v17[2] = PsIdleProcess;
  }
  return PfLogEvent(
           v5,
           dword_14032859C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v17);
}
