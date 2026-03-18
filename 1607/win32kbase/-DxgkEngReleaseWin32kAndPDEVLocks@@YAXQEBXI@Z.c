/*
 * XREFs of ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C00699B0
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0031BE0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     hdevEnumerate @ 0x1C0034350 (hdevEnumerate.c)
 *     GreUnlockDisplayDevice @ 0x1C0065B20 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxgkEngReleaseWin32kAndPDEVLocks(struct _LIST_ENTRY *a1, unsigned int a2, int a3)
{
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v6; // rax
  __int64 v7; // rbx
  bool v8; // zf
  struct _LIST_ENTRY *Blink; // rax
  __int64 v10; // rax
  struct _SURFOBJ *v11; // rdx
  struct _LIST_ENTRY *v12; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (struct _LIST_ENTRY *)v7 )
  {
    v6 = hdevEnumerate(i, a2, a3);
    v7 = (__int64)v6;
    if ( !v6 )
      break;
    v8 = ((__int64)v6[3].Blink & 0x20400) == 0;
    v12 = v6;
    if ( v8 )
    {
      Blink = v6[162].Blink;
      if ( Blink[16].Flink == a1 && LODWORD(Blink[17].Flink) < a2 )
      {
        v10 = *(_QWORD *)(v7 + 2576);
        if ( v10 )
          v11 = (struct _SURFOBJ *)(v10 + 24);
        else
          v11 = 0LL;
        PDEVOBJ::vSync((PDEVOBJ *)&v12, v11, 0LL, 2u);
        GreUnlockDisplayDevice(v7);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn");
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock");
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
  UserSessionSwitchLeaveCrit();
}
