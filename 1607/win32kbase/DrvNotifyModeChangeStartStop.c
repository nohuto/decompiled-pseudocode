/*
 * XREFs of DrvNotifyModeChangeStartStop @ 0x1C0065808
 * Callers:
 *     ApplyPathsModality @ 0x1C0065594 (ApplyPathsModality.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031A08 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0031BE0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     hdevEnumerate @ 0x1C0034350 (hdevEnumerate.c)
 *     GreUnlockDisplayDevice @ 0x1C0065B20 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C0065B60 (GreLockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall DrvNotifyModeChangeStartStop(char a1)
{
  int v2; // edx
  int v3; // r8d
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v5; // rax
  struct _LIST_ENTRY *v6; // rbx
  struct _LIST_ENTRY *Flink; // rax
  struct _SURFOBJ *p_Blink; // rdx
  struct _LIST_ENTRY *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange");
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  for ( i = 0LL; ; i = v6 )
  {
    v5 = hdevEnumerate(i, v2, v3);
    v6 = v5;
    if ( !v5 )
      break;
    v10 = v5;
    if ( ((__int64)v5[3].Blink & 0x20401) == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) )
    {
      GreLockDisplayDevice(v6);
      Flink = v6[161].Flink;
      if ( Flink )
        p_Blink = (struct _SURFOBJ *)&Flink[1].Blink;
      else
        p_Blink = 0LL;
      PDEVOBJ::vSync((PDEVOBJ *)&v10, p_Blink, 0LL, (a1 != 0 ? 0xC : 0) | 0x12);
      GreUnlockDisplayDevice(v6);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn");
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock");
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
  return GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
}
