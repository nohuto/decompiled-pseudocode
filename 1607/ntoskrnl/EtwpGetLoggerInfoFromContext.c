/*
 * XREFs of EtwpGetLoggerInfoFromContext @ 0x14048E51C
 * Callers:
 *     EtwpQueryTrace @ 0x14048E7E4 (EtwpQueryTrace.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpStopTrace @ 0x1404946E0 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140495818 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     EtwpMapEnableFlags @ 0x140496E88 (EtwpMapEnableFlags.c)
 */

__int64 __fastcall EtwpGetLoggerInfoFromContext(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int16 v5; // ax
  __int64 v6; // rax
  char PreviousMode; // r13
  _BYTE *v8; // rax
  _BYTE *v9; // r14
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // r14
  __int64 v13; // rcx
  _OWORD v14[2]; // [rsp+38h] [rbp-50h] BYREF

  if ( (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
  {
    v13 = 32LL * *(unsigned __int8 *)(a2 + 818);
    v14[0] = *(_OWORD *)((char *)&EtwpGroupMasks + v13);
    v14[1] = *(_OWORD *)((char *)&EtwpGroupMasks + v13 + 16);
    EtwpMapEnableFlags(v14, 0LL);
    *(_DWORD *)(a1 + 72) = v14[0];
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
  }
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 292);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 4) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 232);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 236);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 228);
  v4 = *(_DWORD *)(a2 + 256);
  if ( *(_DWORD *)(a2 + 248) > v4 )
    v4 = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(a1 + 108) = v4;
  *(_DWORD *)(a1 + 80) = (*(_BYTE *)(a2 + 816) & 0x10) != 0;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 260);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 344);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 212);
  if ( *(_DWORD *)a2 )
    v5 = *(_WORD *)a2;
  else
    v5 = -1;
  *(_WORD *)(a1 + 8) = v5;
  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v6 + 1592);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 200);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = (_BYTE *)KeAbPreAcquire(a2 + 688, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 688), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 688), v8, a2 + 688);
  if ( v9 )
    v9[26] |= 1u;
  v10 = *(_WORD *)(a2 + 152);
  if ( v10 && *(_WORD *)(a1 + 130) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 136), v10 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 128), (PCUNICODE_STRING)(a2 + 152));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 688));
  KeAbPostRelease(a2 + 688);
  v11 = *(_WORD *)(a2 + 136);
  if ( v11
    && *(_WORD *)(a1 + 146)
    && !RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 136), (PCUNICODE_STRING)(a1 + 144), 0) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 152), v11 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 144), (PCUNICODE_STRING)(a2 + 136));
  }
  return 0LL;
}
