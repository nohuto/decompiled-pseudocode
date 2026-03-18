/*
 * XREFs of EngDeleteDriverObj @ 0x1C00BE530
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0035640 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     HmgLockEx @ 0x1C003BFB0 (HmgLockEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00BE4C8 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00BE514 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  int v9; // edi
  __int64 v10; // r8
  BOOL v11; // ebx
  _QWORD *v12; // rdi
  _QWORD v14[6]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v6 = HmgLockEx((int)hdo, 28, 0);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>(v14, v6);
  if ( !HmgLockResultBase<DRVOBJ>::operator bool(v14) )
    goto LABEL_6;
  v7 = *(_QWORD *)(v14[0] + 40LL);
  v8 = v14[0] + 24LL;
  v15 = v7;
  if ( bCallBack )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(v7 + 64));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(v7 + 64), 11);
    v9 = (*(__int64 (__fastcall **)(__int64))(v14[0] + 32LL))(v8);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(v7 + 64), v10);
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v7 + 64));
    if ( !v9 )
      goto LABEL_6;
  }
  v11 = 1;
  v12 = HmgRemoveObjectImpl((struct HOBJ__ *)hdo, bLocked + 1, 0, 1, 28, 0LL);
  if ( v12 )
  {
    v14[0] = 0LL;
    PDEVOBJ::vUnreferencePdev(&v15, 0);
    FreeObject((__int64)v12);
  }
  else
  {
LABEL_6:
    v11 = 0;
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v14);
  return v11;
}
