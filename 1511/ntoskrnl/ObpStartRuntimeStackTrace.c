/*
 * XREFs of ObpStartRuntimeStackTrace @ 0x140630308
 * Callers:
 *     ObSetRefTraceInformation @ 0x14062F5B8 (ObSetRefTraceInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObpInitStackAndObjectTables @ 0x14062FCB0 (ObpInitStackAndObjectTables.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpStartRuntimeStackTrace(__int64 a1)
{
  unsigned int inited; // r14d
  int v2; // edi
  char PreviousMode; // r9
  int v4; // r10d
  unsigned __int64 v5; // r11
  unsigned int i; // r9d
  unsigned int j; // r10d
  unsigned __int16 v9; // bx
  PVOID PoolWithTag; // r15
  ULONG64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // edx
  wchar_t *Buffer; // rsi
  wchar_t *v17; // rcx
  char v18; // [rsp+20h] [rbp-C8h]
  int v19; // [rsp+24h] [rbp-C4h]
  PVOID P[2]; // [rsp+28h] [rbp-C0h]
  __int128 v21; // [rsp+48h] [rbp-A0h]
  void *Src[2]; // [rsp+58h] [rbp-90h]
  _OWORD v23[4]; // [rsp+70h] [rbp-78h] BYREF

  memset(v23, 0, sizeof(v23));
  inited = 0;
  *(_OWORD *)P = 0uLL;
  v2 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v18 = PreviousMode;
  v21 = *(_OWORD *)(a1 + 24);
  *(_OWORD *)Src = *(_OWORD *)(a1 + 8);
  v4 = *(unsigned __int8 *)(a1 + 1);
  v19 = v4;
  if ( (_WORD)v21 )
  {
    if ( (v21 & 1) != 0 || ((((unsigned __int64)(unsigned __int16)v21 >> 1) % 5) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      return 3221225485LL;
    v5 = ((unsigned __int64)(unsigned __int16)v21 + 2) / 0xA;
    if ( (unsigned int)v5 > 0x10 )
      LODWORD(v5) = 16;
    if ( PreviousMode )
    {
      if ( (BYTE8(v21) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)(unsigned __int16)v21 + *((_QWORD *)&v21 + 1) > MmUserProbeAddress
        || (unsigned __int64)(unsigned __int16)v21 + *((_QWORD *)&v21 + 1) < *((_QWORD *)&v21 + 1) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
    for ( i = 0; i < (unsigned int)v5; ++i )
    {
      for ( j = 0; j < 4; ++j )
        *((_DWORD *)v23 + i) = (*((_DWORD *)v23 + i) << 8) | *(unsigned __int16 *)(*((_QWORD *)&v21 + 1)
                                                                                 + 2LL * (5 * i - j + 3));
    }
    v2 = 16;
    v4 = v19;
  }
  if ( LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[0] & 1) != 0 )
      return 3221225485LL;
    if ( LOWORD(Src[0]) >= 0x80u )
      v9 = 126;
    else
      v9 = (unsigned __int16)Src[0];
    LOWORD(P[0]) = v9;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2LL, 0x7452624Fu);
    P[1] = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    WORD1(P[0]) = v9 + 2;
    if ( v18 )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (ULONG64)Src[1] + LOWORD(Src[0]);
      if ( v11 > MmUserProbeAddress || (void *)v11 < Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(PoolWithTag, Src[1], v9);
    *((_WORD *)PoolWithTag + ((unsigned __int64)v9 >> 1)) = 0;
    v2 |= 0x20u;
    inited = 0;
    v4 = v19;
  }
  if ( !v2 )
    return 3221225485LL;
  if ( v4 )
    v2 |= 0x40u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v13 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v13, (ULONG_PTR)&ObpStackTraceLock);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v15 = ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) == 0 )
  {
    inited = ObpInitStackAndObjectTables();
    v15 = ObpTraceFlags;
  }
  if ( (inited & 0x80000000) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = (wchar_t *)P[1];
    if ( !P[1] )
      return inited;
  }
  else
  {
    Buffer = ObpRuntimeTraceProcessName.Buffer;
    ObpRuntimeTraceProcessName = *(UNICODE_STRING *)P;
    ObpRuntimeTracePoolTags = v23[0];
    xmmword_1402DFCB0 = v23[1];
    xmmword_1402DFCC0 = v23[2];
    xmmword_1402DFCD0 = v23[3];
    ObpRuntimeTraceFlags = v2 | v15 & 0xFFFFFF8E | 2;
    ObpTraceFlags = v2 | v15 & 0xFFFFFF8E | 2;
    ObpTracePoolTags = (unsigned __int64)&ObpRuntimeTracePoolTags & -(__int64)((v2 & 0x10) != 0);
    ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRuntimeTraceProcessName & -(__int64)((v2 & 0x20) != 0));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !Buffer )
      return inited;
    v17 = Buffer;
  }
  ExFreePoolWithTag(v17, 0x7452624Fu);
  return inited;
}
