/*
 * XREFs of ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007C590
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     hdevEnumerate @ 0x1C0037B90 (hdevEnumerate.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0037FA0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     GreUnlockDisplayDevice @ 0x1C0045990 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxgkEngReleaseWin32kAndPDEVLocks(const void *a1, unsigned int a2, __int64 a3)
{
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C i; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v6; // rax
  __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _SURFOBJ *v16; // rdx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v17; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)v7 )
  {
    v6 = hdevEnumerate(i, a2, a3);
    v7 = (__int64)v6;
    if ( !*(_QWORD *)&v6 )
      break;
    v8 = (*(_DWORD *)(*(_QWORD *)&v6 + 56LL) & 0x20400) == 0;
    v17 = v6;
    if ( v8 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)&v6 + 2600LL);
      if ( *(const void **)(v9 + 256) == a1 && *(_DWORD *)(v9 + 272) < a2 )
      {
        v15 = *(_QWORD *)(v7 + 2576);
        if ( v15 )
          v16 = (struct _SURFOBJ *)(v15 + 24);
        else
          v16 = 0LL;
        PDEVOBJ::vSync((PDEVOBJ *)&v17, v16, 0LL, 2u);
        GreUnlockDisplayDevice(v7);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (__int64)ghsemDwmState, a3);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (__int64)ghsemDCVisRgn, v10);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (__int64)ghsemGreLock, v11);
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v12);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  UserSessionSwitchLeaveCrit(v14, v13);
}
