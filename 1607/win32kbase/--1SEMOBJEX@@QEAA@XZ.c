/*
 * XREFs of ??1SEMOBJEX@@QEAA@XZ @ 0x1C00891E0
 * Callers:
 *     HDXDrvEscape @ 0x1C0088F30 (HDXDrvEscape.c)
 *     GreDrvConnect @ 0x1C00C0F00 (GreDrvConnect.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJEX::~SEMOBJEX(struct _ERESOURCE **this)
{
  if ( this[7] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem8");
    GreReleaseSemaphoreInternal(this[7]);
  }
  if ( this[6] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem7");
    GreReleaseSemaphoreInternal(this[6]);
  }
  if ( this[5] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem6");
    GreReleaseSemaphoreInternal(this[5]);
  }
  if ( this[4] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem5");
    GreReleaseSemaphoreInternal(this[4]);
  }
  if ( this[3] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem4");
    GreReleaseSemaphoreInternal(this[3]);
  }
  if ( this[2] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem3");
    GreReleaseSemaphoreInternal(this[2]);
  }
  if ( this[1] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem2");
    GreReleaseSemaphoreInternal(this[1]);
  }
  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem1");
    GreReleaseSemaphoreInternal(*this);
  }
}
