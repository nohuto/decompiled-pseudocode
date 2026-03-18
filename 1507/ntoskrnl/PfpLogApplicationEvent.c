/*
 * XREFs of PfpLogApplicationEvent @ 0x14001A7CC
 * Callers:
 *     PspExitProcess @ 0x14042257C (PspExitProcess.c)
 *     PfCalculateProcessHash @ 0x140443818 (PfCalculateProcessHash.c)
 * Callees:
 *     PfLogEvent @ 0x14001AB30 (PfLogEvent.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MmGetSessionGlobalVA @ 0x140444BBC (MmGetSessionGlobalVA.c)
 *     MmGetDirectoryFrameFromProcess @ 0x140444BE0 (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, UNICODE_STRING *a2, char a3)
{
  UNICODE_STRING *p_DestinationString; // rsi
  unsigned int v5; // r11d
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 DirectoryFrameFromProcess; // rax
  __int64 Length; // rcx
  wchar_t *Buffer; // rdx
  unsigned int v16; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v18[256]; // [rsp+30h] [rbp-D0h] BYREF

  p_DestinationString = a2;
  if ( dword_140350418 >= (unsigned int)dword_14035041C )
    return 3221225659LL;
  v18[255] = 0LL;
  if ( a3 )
  {
    v18[0] = a1;
    v18[2] = 0LL;
    v5 = 14;
    v6 = *(_DWORD *)(a1 + 744);
    v7 = 24LL;
    v8 = *(_QWORD *)(a1 + 744) ^ *(_QWORD *)(a1 + 776);
    LODWORD(v18[2]) = v6;
    v9 = *(_DWORD *)(a1 + 1172);
    v18[1] = v8 & 0x1FFFFFFFFFFFFFFFLL;
    HIDWORD(v18[2]) = v9;
  }
  else
  {
    if ( !a2 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      p_DestinationString = &DestinationString;
    }
    memset(v18, 0, 0x40uLL);
    v11 = *(_QWORD *)(a1 + 744) ^ *(_QWORD *)(a1 + 776);
    HIDWORD(v18[3]) = *(_DWORD *)(a1 + 744);
    v18[6] = a1;
    v12 = *(_DWORD *)(a1 + 1172);
    v18[4] = v11 & 0x1FFFFFFFFFFFFFFFLL;
    LODWORD(v18[3]) = v12;
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1);
    Length = p_DestinationString->Length;
    Buffer = p_DestinationString->Buffer;
    v16 = p_DestinationString->Length;
    v18[5] = DirectoryFrameFromProcess;
    if ( (unsigned int)Length > 0x7C0 )
      v16 = 1984;
    WORD2(v18[7]) = v16 >> 1;
    memmove((char *)&v18[7] + 6, (char *)Buffer + Length - v16, v16);
    *((_WORD *)&v18[7] + WORD2(v18[7]) + 3) = 0;
    LODWORD(v18[0]) = MmGetSessionId(a1);
    v18[1] = MmGetSessionGlobalVA();
    v7 = v16 + 64;
    v5 = 1;
    v18[2] = PsIdleProcess;
  }
  return PfLogEvent(
           v5,
           dword_1403534CC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v18,
           v7);
}
