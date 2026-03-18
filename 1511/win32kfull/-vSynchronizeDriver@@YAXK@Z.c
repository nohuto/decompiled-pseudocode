/*
 * XREFs of ?vSynchronizeDriver@@YAXK@Z @ 0x1C00C5CC0
 * Callers:
 *     GreFlush @ 0x1C00C5CB0 (GreFlush.c)
 *     ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1C0290BD0 (-GreSynchronizeTimer@@YAXPEAXI_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSynchronizeDriver(int a1)
{
  __int64 i; // rbx
  unsigned int v3; // r9d
  __int64 v4; // rcx
  struct _SURFOBJ *v5; // rdx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 == 64 )
  {
    if ( gcSynchronizeFlush == -1 )
      return;
  }
  else if ( a1 != 128 || gcSynchronizeTimer == -1 )
  {
    return;
  }
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  for ( i = hdevEnumerate(0LL); i; i = hdevEnumerate(i) )
  {
    v6 = i;
    if ( (a1 & *(_DWORD *)(i + 2152)) != 0 )
    {
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6) )
      {
        GreAcquireSemaphore(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
        GreAcquireSemaphore(*(_QWORD *)(v6 + 64));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *(_QWORD *)(v6 + 64), 11LL);
      }
      if ( (a1 & *(_DWORD *)(v6 + 2152)) != 0 && (*(_DWORD *)(v6 + 56) & 0x400) == 0 )
      {
        v3 = 0;
        if ( a1 == 64 )
        {
          if ( gcSynchronizeFlush != -1 )
            v3 = 2;
        }
        else if ( a1 == 128 )
        {
          v3 = gcSynchronizeTimer != -1;
        }
        v4 = *(_QWORD *)(v6 + 2576);
        if ( v4 )
          v5 = (struct _SURFOBJ *)(v4 + 24);
        else
          v5 = 0LL;
        PDEVOBJ::vSync((PDEVOBJ *)&v6, v5, 0LL, v3);
      }
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6) )
      {
        EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *(_QWORD *)(v6 + 64));
        GreReleaseSemaphoreInternal(*(_QWORD *)(v6 + 64));
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
}
