/*
 * XREFs of PfpScenCtxPrefetchAbortSet @ 0x1403D24E8
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403EE5B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfpScenCtxPrefetchAbortSet(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, int a4, int a5)
{
  unsigned int v9; // esi
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v12; // rax
  _BYTE *v13; // rsi

  if ( !a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v12, BugCheckParameter2);
    if ( v13 )
      v13[26] |= 1u;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    if ( a4 )
    {
      *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
LABEL_5:
      v9 = 0;
      goto LABEL_6;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) != 8 )
    {
      *(_QWORD *)(BugCheckParameter2 + 40) = a3;
      goto LABEL_5;
    }
    v9 = -1073741431;
  }
  else
  {
    v9 = -1073741735;
  }
LABEL_6:
  if ( !a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v9;
}
