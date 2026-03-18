/*
 * XREFs of sub_1C0054204 @ 0x1C0054204
 * Callers:
 *     sub_1C0053ED0 @ 0x1C0053ED0 (sub_1C0053ED0.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     hdevEnumerate @ 0x1C0037B90 (hdevEnumerate.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037DF4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0037FA0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     GreUnlockDisplayDevice @ 0x1C0045990 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C00459D0 (GreLockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C006E360 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall sub_1C0054204(char a1)
{
  PERESOURCE v1; // rdx
  int v3; // edx
  __int64 v4; // r8
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C i; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  struct _SURFOBJ *v10; // rdx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v1 = ghsemDynamicModeChange;
  }
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", v1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  for ( i = 0LL; ; i = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)v7 )
  {
    v6 = hdevEnumerate(i, v3, v4);
    v7 = (__int64)v6;
    if ( !*(_QWORD *)&v6 )
      break;
    v11 = v6;
    if ( (*(_DWORD *)(*(_QWORD *)&v6 + 56LL) & 0x20401) == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v11) )
    {
      GreLockDisplayDevice(v7);
      v9 = *(_QWORD *)(v7 + 2576);
      if ( v9 )
        v10 = (struct _SURFOBJ *)(v9 + 24);
      else
        v10 = 0LL;
      PDEVOBJ::vSync((PDEVOBJ *)&v11, v10, 0LL, (a1 != 0 ? 0xC : 0) | 0x12);
      GreUnlockDisplayDevice(v7);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn");
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock");
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
  return GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
}
