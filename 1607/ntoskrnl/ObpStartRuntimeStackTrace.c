/*
 * XREFs of ObpStartRuntimeStackTrace @ 0x1406684E8
 * Callers:
 *     ObSetRefTraceInformation @ 0x140667780 (ObSetRefTraceInformation.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObpInitStackAndObjectTables @ 0x140667E80 (ObpInitStackAndObjectTables.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpStartRuntimeStackTrace(__int64 a1)
{
  unsigned int inited; // r14d
  int v3; // esi
  char PreviousMode; // r9
  int v5; // r10d
  unsigned __int64 v6; // r11
  unsigned int i; // r9d
  unsigned int j; // r10d
  unsigned __int16 v10; // bx
  PVOID PoolWithTag; // r15
  unsigned __int64 v12; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v14; // rax
  _BYTE *v15; // rdi
  int v17; // edx
  wchar_t *Buffer; // rdi
  wchar_t *v19; // rcx
  char v20; // [rsp+20h] [rbp-C8h]
  int v21; // [rsp+24h] [rbp-C4h]
  PVOID P[2]; // [rsp+28h] [rbp-C0h]
  __int128 v23; // [rsp+48h] [rbp-A0h]
  void *Src[2]; // [rsp+58h] [rbp-90h]
  _OWORD v25[4]; // [rsp+70h] [rbp-78h] BYREF

  memset(v25, 0, sizeof(v25));
  inited = 0;
  *(_OWORD *)P = 0uLL;
  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  v23 = *(_OWORD *)(a1 + 24);
  *(_OWORD *)Src = *(_OWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(a1 + 1);
  v21 = v5;
  if ( (_WORD)v23 )
  {
    if ( (v23 & 1) != 0 || ((((unsigned __int64)(unsigned __int16)v23 >> 1) % 5) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      return 3221225485LL;
    v6 = ((unsigned __int64)(unsigned __int16)v23 + 2) / 0xA;
    if ( (unsigned int)v6 > 0x10 )
      LODWORD(v6) = 16;
    if ( PreviousMode )
    {
      if ( (BYTE8(v23) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)(unsigned __int16)v23 + *((_QWORD *)&v23 + 1) > 0x7FFFFFFF0000LL
        || (unsigned __int64)(unsigned __int16)v23 + *((_QWORD *)&v23 + 1) < *((_QWORD *)&v23 + 1) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    for ( i = 0; i < (unsigned int)v6; ++i )
    {
      for ( j = 0; j < 4; ++j )
        *((_DWORD *)v25 + i) = (*((_DWORD *)v25 + i) << 8) | *(unsigned __int16 *)(*((_QWORD *)&v23 + 1)
                                                                                 + 2LL * (5 * i - j + 3));
    }
    v3 = 16;
    v5 = v21;
  }
  if ( LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[0] & 1) != 0 )
      return 3221225485LL;
    if ( LOWORD(Src[0]) >= 0x80u )
      v10 = 126;
    else
      v10 = (unsigned __int16)Src[0];
    LOWORD(P[0]) = v10;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 2LL, 0x7452624Fu);
    P[1] = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    WORD1(P[0]) = v10 + 2;
    if ( v20 )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)Src[1] + LOWORD(Src[0]);
      if ( v12 > 0x7FFFFFFF0000LL || (void *)v12 < Src[1] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, Src[1], v10);
    *((_WORD *)PoolWithTag + ((unsigned __int64)v10 >> 1)) = 0;
    v3 |= 0x20u;
    inited = 0;
    v5 = v21;
  }
  if ( !v3 )
    return 3221225485LL;
  if ( v5 )
    v3 |= 0x40u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v14 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v14, (ULONG_PTR)&ObpStackTraceLock);
  if ( v15 )
    v15[26] |= 1u;
  v17 = ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) == 0 )
  {
    inited = ObpInitStackAndObjectTables();
    v17 = ObpTraceFlags;
  }
  if ( (inited & 0x80000000) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v19 = (wchar_t *)P[1];
    if ( !P[1] )
      return inited;
  }
  else
  {
    Buffer = ObpRuntimeTraceProcessName.Buffer;
    ObpRuntimeTraceProcessName = *(UNICODE_STRING *)P;
    ObpRuntimeTracePoolTags = v25[0];
    xmmword_140305230 = v25[1];
    xmmword_140305240 = v25[2];
    xmmword_140305250 = v25[3];
    ObpRuntimeTraceFlags = v3 | v17 & 0xFFFFFF8E | 2;
    ObpTraceFlags = v3 | v17 & 0xFFFFFF8E | 2;
    ObpTracePoolTags = (unsigned __int64)&ObpRuntimeTracePoolTags & -(__int64)((v3 & 0x10) != 0);
    ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRuntimeTraceProcessName & -(__int64)((v3 & 0x20) != 0));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !Buffer )
      return inited;
    v19 = Buffer;
  }
  ExFreePoolWithTag(v19, 0x7452624Fu);
  return inited;
}
