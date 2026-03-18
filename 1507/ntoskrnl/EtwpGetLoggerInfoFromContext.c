/*
 * XREFs of EtwpGetLoggerInfoFromContext @ 0x14040EFBC
 * Callers:
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14040ECC0 (EtwpQueryTrace.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpFlushTrace @ 0x14054D090 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     EtwpMapEnableFlags @ 0x14054AF88 (EtwpMapEnableFlags.c)
 */

__int64 __fastcall EtwpGetLoggerInfoFromContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ecx
  __int16 v7; // ax
  __int64 v8; // rax
  char PreviousMode; // r13
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r14
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r14
  __int64 v16; // rcx
  _OWORD v17[2]; // [rsp+38h] [rbp-50h] BYREF

  if ( (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
  {
    v16 = 32LL * *(unsigned __int8 *)(a2 + 834);
    v17[0] = *(_OWORD *)((char *)&EtwpGroupMasks + v16);
    v17[1] = *(_OWORD *)((char *)&EtwpGroupMasks + v16 + 16);
    EtwpMapEnableFlags(v17, 0LL);
    *(_DWORD *)(a1 + 72) = v17[0];
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
  v6 = *(_DWORD *)(a2 + 272);
  if ( *(_DWORD *)(a2 + 264) > v6 )
    v6 = *(_DWORD *)(a2 + 264);
  *(_DWORD *)(a1 + 108) = v6;
  *(_DWORD *)(a1 + 80) = (*(_BYTE *)(a2 + 832) & 0x10) != 0;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 268);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 360);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 228);
  if ( *(_DWORD *)a2 )
    v7 = *(_WORD *)a2;
  else
    v7 = -1;
  *(_WORD *)(a1 + 8) = v7;
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v8 + 1584);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 216);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = KeAbPreAcquire(a2 + 704, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 704), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 704), v10, a2 + 704, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = *(_WORD *)(a2 + 168);
  if ( v13 && *(_WORD *)(a1 + 130) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 136), v13 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 128), (PCUNICODE_STRING)(a2 + 168));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 704));
  KeAbPostRelease(a2 + 704);
  v14 = *(_WORD *)(a2 + 152);
  if ( v14
    && *(_WORD *)(a1 + 146)
    && !RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 152), (PCUNICODE_STRING)(a1 + 144), 0) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 152), v14 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 144), (PCUNICODE_STRING)(a2 + 152));
  }
  return 0LL;
}
