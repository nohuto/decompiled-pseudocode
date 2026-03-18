/*
 * XREFs of ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C00824D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     hdevEnumerate @ 0x1C0034180 (hdevEnumerate.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0034590 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     GreUnlockDisplayDevice @ 0x1C0061400 (GreUnlockDisplayDevice.c)
 */

void __fastcall DxgkEngReleaseWin32kAndPDEVLocks(const void *a1, unsigned int a2, __int64 a3)
{
  struct PDEV *i; // rcx
  struct PDEV *v6; // rax
  __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  struct _SURFOBJ *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  struct PDEV *v17; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (struct PDEV *)v7 )
  {
    v6 = hdevEnumerate(i, a2, a3);
    v7 = (__int64)v6;
    if ( !v6 )
      break;
    v8 = (*((_DWORD *)v6 + 14) & 0x20400) == 0;
    v17 = v6;
    if ( v8 )
    {
      v9 = *((_QWORD *)v6 + 325);
      if ( *(const void **)(v9 + 256) == a1 && *(_DWORD *)(v9 + 272) < a2 )
      {
        v10 = *(_QWORD *)(v7 + 2576);
        if ( v10 )
          v11 = (struct _SURFOBJ *)(v10 + 24);
        else
          v11 = 0LL;
        PDEVOBJ::vSync((PDEVOBJ *)&v17, v11, 0LL, 2u);
        GreUnlockDisplayDevice(v7, v12, v13);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, a3);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (__int64)ghsemDCVisRgn, v14);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (__int64)ghsemGreLock, v15);
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v16);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  UserSessionSwitchLeaveCrit();
}
