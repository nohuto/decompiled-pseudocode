/*
 * XREFs of SepSetTokenLowboxNumber @ 0x140475934
 * Callers:
 *     SepGetAnonymousToken @ 0x14007F904 (SepGetAnonymousToken.c)
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x14047991C (SeSetSessionIdToken.c)
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 *     SeExchangePrimaryToken @ 0x140692858 (SeExchangePrimaryToken.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x14021B124 (SepGetTokenSessionMapEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140475ACC (SepGetLowBoxNumberEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x1405489BC (SepInitializeLowBoxNumberTable.c)
 */

__int64 __fastcall SepSetTokenLowboxNumber(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  char v3; // r12
  char v4; // r13
  int LowBoxNumberEntry; // esi
  char *v6; // r15
  struct _KTHREAD *v7; // rax
  volatile signed __int32 *v8; // rdi
  _BYTE *v9; // rax
  signed __int8 v10; // cf
  volatile signed __int64 *v11; // rdi
  _BYTE *v12; // rsi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 *v15; // rdi
  _BYTE *v16; // rax
  volatile signed __int64 *v17; // rdi
  _BYTE *v18; // r14
  struct _KTHREAD *v19; // rax
  __int64 v20; // rdi
  int TokenSessionMapEntry; // eax
  struct _KTHREAD *v22; // rax
  _BYTE *v23; // rax
  _BYTE *v24; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp+58h] BYREF
  __int64 v28; // [rsp+98h] [rbp+60h] BYREF

  v2 = *(unsigned int *)(a1 + 120);
  BugCheckParameter2 = 0LL;
  v28 = 0LL;
  v3 = 0;
  v4 = 0;
  LowBoxNumberEntry = 0;
  if ( (unsigned int)v2 < 5 )
  {
    v6 = (char *)&g_SessionLowboxArray + 40 * v2;
    BugCheckParameter2 = (ULONG_PTR)v6;
LABEL_3:
    if ( !v6[32] )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = (volatile signed __int32 *)BugCheckParameter2;
      v16 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
      v10 = _interlockedbittestandset64(v15, 0LL);
      v17 = (volatile signed __int64 *)BugCheckParameter2;
      v18 = v16;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v16, BugCheckParameter2);
      if ( v18 )
      {
        v18[26] |= 1u;
        v17 = (volatile signed __int64 *)BugCheckParameter2;
      }
      if ( !v6[32] )
        LowBoxNumberEntry = SepInitializeLowBoxNumberTable(v17);
      if ( (_InterlockedExchangeAdd64(v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegion();
    }
    if ( !LowBoxNumberEntry )
    {
      v7 = KeGetCurrentThread();
      --v7->KernelApcDisable;
      v8 = (volatile signed __int32 *)BugCheckParameter2;
      v9 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
      v10 = _interlockedbittestandset64(v8, 0LL);
      v11 = (volatile signed __int64 *)BugCheckParameter2;
      v12 = v9;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
      if ( v12 )
      {
        v12[26] |= 1u;
        v11 = (volatile signed __int64 *)BugCheckParameter2;
      }
      LowBoxNumberEntry = SepGetLowBoxNumberEntry(v11, a2, &v28);
      if ( !LowBoxNumberEntry )
        *(_QWORD *)(a1 + 1080) = v28;
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegion();
    }
    goto LABEL_14;
  }
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  v20 = KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&LowboxSessionMapLock, v20, (ULONG_PTR)&LowboxSessionMapLock);
  if ( v20 )
    *(_BYTE *)(v20 + 26) |= 1u;
  v3 = 1;
  TokenSessionMapEntry = SepGetTokenSessionMapEntry(v2, 0, &BugCheckParameter2);
  LowBoxNumberEntry = TokenSessionMapEntry;
  if ( TokenSessionMapEntry >= 0 )
    goto LABEL_40;
  if ( TokenSessionMapEntry == -1073741275 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    v23 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&LowboxSessionMapLock, 0LL);
    v24 = v23;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&LowboxSessionMapLock, v23, (ULONG_PTR)&LowboxSessionMapLock);
    if ( v24 )
      v24[26] |= 1u;
    v4 = 1;
    v3 = 0;
    LowBoxNumberEntry = SepGetTokenSessionMapEntry(v2, 1, &BugCheckParameter2);
  }
  if ( LowBoxNumberEntry >= 0 )
  {
LABEL_40:
    v6 = (char *)BugCheckParameter2;
    goto LABEL_3;
  }
LABEL_14:
  if ( v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
    goto LABEL_45;
  }
  if ( v3 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
LABEL_45:
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LowBoxNumberEntry;
}
