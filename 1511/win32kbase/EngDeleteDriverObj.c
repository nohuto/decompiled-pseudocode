/*
 * XREFs of EngDeleteDriverObj @ 0x1C00BF9B0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     HmgLockEx @ 0x1C0025B60 (HmgLockEx.c)
 *     HmgRemoveObject @ 0x1C0036F40 (HmgRemoveObject.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rbx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *v13; // [rsp+68h] [rbp+20h] BYREF

  v6 = HmgLockEx((int)hdo, 28, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 40);
    v13 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)v8;
    if ( !bCallBack
      || (EngAcquireSemaphore(*(HSEMAPHORE *)(v8 + 64)),
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(v8 + 64), 11),
          v9 = (*(__int64 (__fastcall **)(__int64))(v7 + 32))(v7 + 24),
          EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(v8 + 64), v10),
          GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v8 + 64)),
          v9) )
    {
      v11 = HmgRemoveObject((__int64)hdo, (unsigned int)bLocked + 1, 0, 1, 28, 0LL);
      if ( v11 )
      {
        PDEVOBJ::vUnreferencePdev(&v13, 0);
        FreeObject(v11);
        return 1;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
  }
  return 0;
}
