/*
 * XREFs of ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007BBC0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     hdevEnumerate @ 0x1C0037B90 (hdevEnumerate.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0037FA0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0043380 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     GreLockDisplayDevice @ 0x1C00459D0 (GreLockDisplayDevice.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

void __fastcall DxgkEngAcquireWin32kAndPDEVLocks(const void *a1, unsigned int a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // ecx
  LARGE_INTEGER v8; // rbx
  int v9; // r8d
  int v10; // edx
  __int64 v11; // r8
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C i; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  struct _SURFOBJ *v17; // rdx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v18; // [rsp+50h] [rbp+18h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  EnterSharedCritAvoidingDitHitTestHazard(0, 1);
  v6 = PsGetCurrentThreadWin32Thread(v5);
  if ( v6 )
  {
    v8 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v6 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v7) = byte_1C01020C8 - 1;
      Template_xqx(v7, (unsigned int)&AcquiredSharedUserCritEvent, v9, v8.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v8.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v9,
        0,
        1000 * v8.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v6 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  for ( i = 0LL; ; i = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)v14 )
  {
    v13 = hdevEnumerate(i, v10, v11);
    v14 = (__int64)v13;
    if ( !*(_QWORD *)&v13 )
      break;
    v18 = v13;
    v15 = *(_QWORD *)(*(_QWORD *)&v13 + 2600LL);
    if ( v15
      && (*(_DWORD *)(v14 + 56) & 0x20400) == 0
      && *(const void **)(v15 + 256) == a1
      && *(_DWORD *)(v15 + 272) < a2 )
    {
      GreLockDisplayDevice(v14);
      v16 = *(_QWORD *)(v14 + 2576);
      if ( v16 )
        v17 = (struct _SURFOBJ *)(v16 + 24);
      else
        v17 = 0LL;
      PDEVOBJ::vSync((PDEVOBJ *)&v18, v17, 0LL, 0xEu);
    }
  }
}
