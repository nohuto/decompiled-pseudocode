/*
 * XREFs of EngDeleteDriverObj @ 0x1C00CBCF0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     HmgLockEx @ 0x1C002A600 (HmgLockEx.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031C50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00CBC80 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00CBCCC (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

BOOL __stdcall EngDeleteDriverObj(HDRVOBJ hdo, BOOL bCallBack, BOOL bLocked)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  int v9; // edi
  BOOL v10; // ebx
  struct OBJECT *v11; // rdi
  _QWORD v13[6]; // [rsp+30h] [rbp-48h] BYREF
  struct _LIST_ENTRY *v14; // [rsp+98h] [rbp+20h] BYREF

  v6 = HmgLockEx((unsigned int)hdo, 28, 0);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>(v13, v6);
  if ( !HmgLockResultBase<DRVOBJ>::operator bool(v13) )
    goto LABEL_6;
  v7 = *(_QWORD *)(v13[0] + 40LL);
  v8 = v13[0] + 24LL;
  v14 = (struct _LIST_ENTRY *)v7;
  if ( bCallBack )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(v7 + 64));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(v7 + 64), 11);
    v9 = (*(__int64 (__fastcall **)(__int64))(v13[0] + 32LL))(v8);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()");
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v7 + 64));
    if ( !v9 )
      goto LABEL_6;
  }
  v10 = 1;
  v11 = HmgRemoveObjectImpl((struct HOBJ__ *)hdo, (unsigned int)bLocked + 1, 0, 1, 28, 0LL);
  if ( v11 )
  {
    v13[0] = 0LL;
    PDEVOBJ::vUnreferencePdev(&v14, 0);
    FreeObject((__int64)v11);
  }
  else
  {
LABEL_6:
    v10 = 0;
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v13);
  return v10;
}
