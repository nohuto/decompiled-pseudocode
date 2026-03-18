/*
 * XREFs of ?vSynchronizeDriver@@YAXK@Z @ 0x1C00D5F0C
 * Callers:
 *     GreFlush @ 0x1C00D5F00 (GreFlush.c)
 *     ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1C0290E00 (-GreSynchronizeTimer@@YAXPEAXI_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSynchronizeDriver(int a1)
{
  __int64 i; // rcx
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // r9d
  __int64 v6; // rcx
  struct _SURFOBJ *v7; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( gcSynchronizeFlush != -1 && a1 == 64 || a1 == 128 && gcSynchronizeTimer != -1 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    for ( i = 0LL; ; i = v4 )
    {
      v3 = hdevEnumerate(i);
      v4 = v3;
      if ( !v3 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
        return;
      }
      v8 = v3;
      if ( (a1 & *(_DWORD *)(v3 + 2152)) != 0 )
        break;
LABEL_21:
      ;
    }
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8) )
    {
      GreAcquireSemaphore(ghsemGreLock);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
      GreAcquireSemaphore(*(_QWORD *)(v8 + 64));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *(_QWORD *)(v8 + 64), 11LL);
    }
    if ( (a1 & *(_DWORD *)(v8 + 2152)) == 0 || (*(_DWORD *)(v8 + 56) & 0x400) != 0 )
    {
LABEL_19:
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8) )
      {
        EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *(_QWORD *)(v8 + 64));
        GreReleaseSemaphoreInternal(*(_QWORD *)(v8 + 64));
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      goto LABEL_21;
    }
    v5 = 0;
    if ( a1 == 64 )
    {
      if ( gcSynchronizeFlush == -1 )
      {
LABEL_16:
        v6 = *(_QWORD *)(v8 + 2576);
        if ( v6 )
          v7 = (struct _SURFOBJ *)(v6 + 24);
        else
          v7 = 0LL;
        PDEVOBJ::vSync((PDEVOBJ *)&v8, v7, 0LL, v5);
        goto LABEL_19;
      }
      v5 = 2;
    }
    if ( a1 == 128 && gcSynchronizeTimer != -1 )
      v5 |= 1u;
    goto LABEL_16;
  }
}
