/*
 * XREFs of ??1SEMOBJEX@@QEAA@XZ @ 0x1C0088100
 * Callers:
 *     HDXDrvEscape @ 0x1C0087E50 (HDXDrvEscape.c)
 *     GreDrvConnect @ 0x1C00B6320 (GreDrvConnect.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJEX::~SEMOBJEX(SEMOBJEX *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx

  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem8", v3, a3);
    GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)this + 7));
  }
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem7", v5, a3);
    GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)this + 6));
  }
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem6", v6, a3);
    GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)this + 5));
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem5", v7, a3);
    GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)this + 4));
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem4", v8, a3);
    GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)this + 3));
  }
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem3", v9, a3);
    GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)this + 2));
  }
  v10 = *((_QWORD *)this + 1);
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem2", v10, a3);
    GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)this + 1));
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hSem1", *(_QWORD *)this, a3);
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)this);
  }
}
