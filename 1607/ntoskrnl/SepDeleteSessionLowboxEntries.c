/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x1400AE144
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1404C7CF8 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1405335D4 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlDeleteHashTable @ 0x1400B30C8 (RtlDeleteHashTable.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void SepDeleteSessionLowboxEntries()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  __int64 v4; // rax
  char *i; // rsi
  struct _KTHREAD *v6; // rax
  volatile signed __int64 *v7; // rdi
  char *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned int v13; // r9d
  unsigned int v14; // r11d
  __int64 v15; // r10
  _QWORD *v16; // rcx
  __int64 j; // rax
  unsigned int v18; // ecx
  char *v19; // rcx
  void **v20; // rax

  if ( g_SessionLowboxMap )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v1 = KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&LowboxSessionMapLock, 0LL);
    v3 = v1;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(&LowboxSessionMapLock, v1, &LowboxSessionMapLock);
    if ( v3 )
      *(_BYTE *)(v3 + 26) |= 1u;
    v4 = g_SessionLowboxMap;
    for ( i = *(char **)g_SessionLowboxMap; i != (char *)v4; i = v8 )
    {
      v6 = KeGetCurrentThread();
      v7 = (volatile signed __int64 *)(i + 24);
      v8 = *(char **)i;
      --v6->KernelApcDisable;
      v9 = KeAbPreAcquire((ULONG_PTR)(i + 24), 0LL, 0);
      v10 = v9;
      if ( _interlockedbittestandset64((volatile signed __int32 *)i + 6, 0LL) )
        ExfAcquirePushLockExclusiveEx(i + 24, v9, i + 24);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      v11 = *((_QWORD *)i + 5);
      if ( (v11 & 4) != 0 )
      {
        v12 = 1LL;
        v13 = 32;
      }
      else
      {
        v12 = 0LL;
        v13 = 0;
      }
      v14 = v13 + *((_DWORD *)i + 8) - 1;
      v15 = v11 - 4 * v12;
      if ( !*((_DWORD *)i + 8) )
        goto LABEL_26;
      v16 = (_QWORD *)(v15 + 8 * ((unsigned __int64)v13 >> 6));
      for ( j = ((1LL << (v13 & 0x3F)) - 1) | ~*v16; j == -1; j = ~*v16 )
      {
        if ( (unsigned __int64)++v16 > v15 + 8 * ((unsigned __int64)v14 >> 6) )
          goto LABEL_26;
      }
      _BitScanForward64((unsigned __int64 *)&j, ~j);
      v18 = j + ((unsigned int)(((__int64)v16 - v15) >> 3) << 6);
      if ( v18 > v14 || v18 == -1 || v18 - v13 == -1 )
      {
LABEL_26:
        RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)i + 6));
        ExFreePoolWithTag(*((PVOID *)i + 5), 0);
        v19 = *(char **)i;
        v20 = (void **)*((_QWORD *)i + 1);
        if ( *(char **)(*(_QWORD *)i + 8LL) != i || *v20 != i )
          __fastfail(3u);
        *v20 = v19;
        *((_QWORD *)v19 + 1) = v20;
        if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 24);
        KeAbPostRelease((ULONG_PTR)(i + 24));
        KeLeaveCriticalRegion();
        ExFreePoolWithTag(i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 24);
        KeAbPostRelease((ULONG_PTR)(i + 24));
        KeLeaveCriticalRegion();
      }
      v4 = g_SessionLowboxMap;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
}
