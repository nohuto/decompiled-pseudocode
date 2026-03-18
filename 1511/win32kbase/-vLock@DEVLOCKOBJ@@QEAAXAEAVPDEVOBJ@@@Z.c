/*
 * XREFs of ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002C0A4
 * Callers:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002C080 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C002C110 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall DEVLOCKOBJ::vLock(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  HSEMAPHORE v4; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
  *((_DWORD *)this + 6) = 1;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 56LL) & 1) != 0 )
  {
    v4 = *(HSEMAPHORE *)(*(_QWORD *)a2 + 64LL);
    *(_QWORD *)this = v4;
    *((_QWORD *)this + 2) = *(_QWORD *)a2;
    EngAcquireSemaphore(v4);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, 11LL);
  }
}
