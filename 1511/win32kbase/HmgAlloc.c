/*
 * XREFs of HmgAlloc @ 0x1C0080B30
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0088818 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 *     ?hGetFreeHandle@@YAPEAUHOBJ__@@E@Z @ 0x1C002A5E0 (-hGetFreeHandle@@YAPEAUHOBJ__@@E@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C002A680 (HmgIncProcessHandleCount.c)
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
 *     ?vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z @ 0x1C0034240 (-vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5CC0 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 */

struct _BASEOBJECT *__fastcall HmgAlloc(size_t a1, unsigned __int8 a2, unsigned __int16 a3)
{
  struct _BASEOBJECT *Object; // r14
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct HOBJ__ *FreeHandle; // rax
  struct HOBJ__ *v20; // rbx
  unsigned int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // zf

  Object = (struct _BASEOBJECT *)AllocateObject(a1, a2, ((unsigned __int8)~(_BYTE)a3 >> 2) & 1);
  if ( !Object )
    return 0LL;
  v6 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8);
  if ( !ThreadWin32Thread || (a3 & 0x10) != 0 )
    v13 = 0LL;
  else
    v13 = *(_QWORD *)(ThreadWin32Thread + 72);
  if ( v13 )
    v6 = *(_DWORD *)(v13 + 8);
  GreAcquireHmgrSemaphore(v11, v10, v12);
  if ( (a3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCount(v6, v14, v15) )
  {
LABEL_19:
    GreReleaseHmgrSemaphore(v17, v16, v18);
    FreeObject((__int64)Object);
    return 0LL;
  }
  FreeHandle = hGetFreeHandle(a2);
  v20 = FreeHandle;
  if ( !FreeHandle )
  {
    if ( (a3 & 8) == 0 )
      HmgDecProcessHandleCount(v6, v16, v18);
    goto LABEL_19;
  }
  v21 = (unsigned __int16)FreeHandle;
  ENTRYOBJ::vSetup(
    (ENTRYOBJ *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)FreeHandle),
    Object,
    a2,
    a3,
    (unsigned __int16)FreeHandle);
  v25 = WPP_MAIN_CB.DeviceLock.Header.LockNV == 0;
  *(_QWORD *)Object = v20;
  if ( !v25 && gpentHmgrStacks )
    RECSTACKBACKTRACE(v21);
  GreReleaseHmgrSemaphore(v23, v22, v24);
  if ( (a3 & 3) != 0 )
    return Object;
  return v20;
}
