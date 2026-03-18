/*
 * XREFs of DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00BB190
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C001EEA0 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 */

__int64 __fastcall DrvDisplayConfigGetScaleFactorOverrides(__int64 a1, int a2)
{
  __int64 v4; // r8
  struct PDEV *i; // rbx
  _DWORD *v6; // rcx
  int v7; // eax

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  for ( i = gppdevList; i; i = (struct PDEV *)*((_QWORD *)i + 3) )
  {
    if ( (*((_DWORD *)i + 14) & 0x401) == 1 )
    {
      v6 = (_DWORD *)*((_QWORD *)i + 325);
      if ( ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v7 = v6[40];
        if ( (v7 & 0x800000) != 0 )
        {
          if ( a2 )
          {
            if ( (v7 & 4) != 0 )
              goto LABEL_7;
          }
          else if ( *(_DWORD *)(a1 + 8) == v6[66] && *(_DWORD *)(a1 + 12) == v6[67] && *(_DWORD *)(a1 + 16) == v6[68] )
          {
LABEL_7:
            *(_QWORD *)(a1 + 20) = *((_QWORD *)i + 320);
            *(_DWORD *)(a1 + 28) = *((_DWORD *)i + 642);
            break;
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v4);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  return i == 0LL ? 0xC000000D : 0;
}
