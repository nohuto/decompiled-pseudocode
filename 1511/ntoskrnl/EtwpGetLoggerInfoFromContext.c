/*
 * XREFs of EtwpGetLoggerInfoFromContext @ 0x1404CC370
 * Callers:
 *     EtwpFlushTrace @ 0x1404B5FCC (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1404CBFCC (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     EtwpMapEnableFlags @ 0x1404CFC18 (EtwpMapEnableFlags.c)
 */

__int64 __fastcall EtwpGetLoggerInfoFromContext(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int16 v5; // ax
  __int64 v6; // rax
  char PreviousMode; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // r14
  __int64 v13; // rcx
  _OWORD v14[2]; // [rsp+38h] [rbp-50h] BYREF

  if ( (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
  {
    v13 = 32LL * *(unsigned __int8 *)(a2 + 834);
    v14[0] = *(_OWORD *)((char *)&EtwpGroupMasks + v13);
    v14[1] = *(_OWORD *)((char *)&EtwpGroupMasks + v13 + 16);
    EtwpMapEnableFlags(v14, 0LL);
    *(_DWORD *)(a1 + 72) = v14[0];
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
  }
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 292);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 308);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 4) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 244);
  v4 = *(_DWORD *)(a2 + 272);
  if ( *(_DWORD *)(a2 + 264) > v4 )
    v4 = *(_DWORD *)(a2 + 264);
  *(_DWORD *)(a1 + 108) = v4;
  *(_DWORD *)(a1 + 80) = (*(_BYTE *)(a2 + 832) & 0x10) != 0;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 268);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 360);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 228);
  if ( *(_DWORD *)a2 )
    v5 = *(_WORD *)a2;
  else
    v5 = -1;
  *(_WORD *)(a1 + 8) = v5;
  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v6 + 1584);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 216);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = KeAbPreAcquire(a2 + 704, 0LL, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 704), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 704), v8, a2 + 704);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = *(_WORD *)(a2 + 168);
  if ( v10 && *(_WORD *)(a1 + 130) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 136), v10 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 128), (PCUNICODE_STRING)(a2 + 168));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 704));
  KeAbPostRelease(a2 + 704);
  v11 = *(_WORD *)(a2 + 152);
  if ( v11
    && *(_WORD *)(a1 + 146)
    && !RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 152), (PCUNICODE_STRING)(a1 + 144), 0) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 152), v11 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 144), (PCUNICODE_STRING)(a2 + 152));
  }
  return 0LL;
}
