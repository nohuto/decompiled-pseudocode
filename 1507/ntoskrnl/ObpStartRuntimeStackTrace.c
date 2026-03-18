/*
 * XREFs of ObpStartRuntimeStackTrace @ 0x1406AE3B8
 * Callers:
 *     ObSetRefTraceInformation @ 0x1406AD52C (ObSetRefTraceInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObpInitStackAndObjectTables @ 0x1406ADCDC (ObpInitStackAndObjectTables.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpStartRuntimeStackTrace(__int64 a1, __int64 a2, __int64 a3, __int64 i)
{
  unsigned int inited; // r14d
  int v5; // edi
  int v6; // r10d
  unsigned __int64 v7; // r11
  unsigned int j; // r10d
  unsigned __int16 v10; // bx
  PVOID PoolWithTag; // r15
  ULONG64 v12; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  int v17; // edx
  wchar_t *Buffer; // rsi
  struct _KTHREAD *v19; // r8
  __int16 v20; // ax
  wchar_t *v21; // rcx
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  char v24; // [rsp+20h] [rbp-C8h]
  int v25; // [rsp+24h] [rbp-C4h]
  PVOID P[2]; // [rsp+28h] [rbp-C0h]
  __int128 v27; // [rsp+48h] [rbp-A0h]
  void *Src[2]; // [rsp+58h] [rbp-90h]
  _OWORD v29[4]; // [rsp+70h] [rbp-78h] BYREF

  memset(v29, 0, sizeof(v29));
  inited = 0;
  *(_OWORD *)P = 0uLL;
  v5 = 0;
  LOBYTE(i) = KeGetCurrentThread()->PreviousMode;
  v24 = i;
  v27 = *(_OWORD *)(a1 + 24);
  *(_OWORD *)Src = *(_OWORD *)(a1 + 8);
  v6 = *(unsigned __int8 *)(a1 + 1);
  v25 = v6;
  if ( (_WORD)v27 )
  {
    if ( (v27 & 1) != 0 || ((((unsigned __int64)(unsigned __int16)v27 >> 1) % 5) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      return 3221225485LL;
    v7 = ((unsigned __int64)(unsigned __int16)v27 + 2) / 0xA;
    if ( (unsigned int)v7 > 0x10 )
      LODWORD(v7) = 16;
    if ( (_BYTE)i )
    {
      if ( (BYTE8(v27) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)(unsigned __int16)v27 + *((_QWORD *)&v27 + 1) > MmUserProbeAddress
        || (unsigned __int64)(unsigned __int16)v27 + *((_QWORD *)&v27 + 1) < *((_QWORD *)&v27 + 1) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
    for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
    {
      for ( j = 0; j < 4; ++j )
        *((_DWORD *)v29 + (unsigned int)i) = (*((_DWORD *)v29 + (unsigned int)i) << 8) | *(unsigned __int16 *)(*((_QWORD *)&v27 + 1) + 2LL * (5 * (_DWORD)i - j + 3));
    }
    v5 = 16;
    v6 = v25;
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
    if ( v24 )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (ULONG64)Src[1] + LOWORD(Src[0]);
      if ( v12 > MmUserProbeAddress || (void *)v12 < Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(PoolWithTag, Src[1], v10);
    *((_WORD *)PoolWithTag + ((unsigned __int64)v10 >> 1)) = 0;
    v5 |= 0x20u;
    inited = 0;
    v6 = v25;
  }
  if ( !v5 )
    return 3221225485LL;
  if ( v6 )
    v5 |= 0x40u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v14 = KeAbPreAcquire((ULONG_PTR)&ObpStackTraceLock, 0LL, 0LL, i);
  v16 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v14, (ULONG_PTR)&ObpStackTraceLock, v15);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
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
    v22 = KeGetCurrentThread();
    v23 = v22->SpecialApcDisable + 1;
    v22->SpecialApcDisable = v23;
    if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
      KiCheckForKernelApcDelivery();
    v21 = (wchar_t *)P[1];
    if ( !P[1] )
      return inited;
  }
  else
  {
    Buffer = ObpRuntimeTraceProcessName.Buffer;
    ObpRuntimeTraceProcessName = *(UNICODE_STRING *)P;
    ObpRuntimeTracePoolTags = v29[0];
    xmmword_14032FEF0 = v29[1];
    xmmword_14032FF00 = v29[2];
    xmmword_14032FF10 = v29[3];
    ObpRuntimeTraceFlags = v5 | v17 & 0xFFFFFF8E | 2;
    ObpTraceFlags = v5 | v17 & 0xFFFFFF8E | 2;
    ObpTracePoolTags = (unsigned __int64)&ObpRuntimeTracePoolTags & -(__int64)((v5 & 0x10) != 0);
    ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRuntimeTraceProcessName & -(__int64)((v5 & 0x20) != 0));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v19 = KeGetCurrentThread();
    v20 = v19->SpecialApcDisable + 1;
    v19->SpecialApcDisable = v20;
    if ( !v20 && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
      KiCheckForKernelApcDelivery();
    if ( !Buffer )
      return inited;
    v21 = Buffer;
  }
  ExFreePoolWithTag(v21, 0x7452624Fu);
  return inited;
}
