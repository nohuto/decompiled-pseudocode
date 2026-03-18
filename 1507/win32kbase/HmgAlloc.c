/*
 * XREFs of HmgAlloc @ 0x1C0067040
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C004A7B8 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     ?vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z @ 0x1C0038520 (-vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C00386E0 (HmgDecProcessHandleCount.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?hGetFreeHandle@@YAPEAUHOBJ__@@E@Z @ 0x1C004ADE0 (-hGetFreeHandle@@YAPEAUHOBJ__@@E@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C004AE80 (HmgIncProcessHandleCount.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B31EC (-RECSTACKBACKTRACE@@YAXI@Z.c)
 */

struct _BASEOBJECT *__fastcall HmgAlloc(size_t a1, unsigned __int8 a2, unsigned __int16 a3)
{
  struct _BASEOBJECT *Object; // r14
  unsigned int v6; // esi
  __int64 ThreadWin32Thread; // rax
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct HOBJ__ *FreeHandle; // rax
  struct HOBJ__ *v18; // rbx
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // zf

  Object = (struct _BASEOBJECT *)AllocateObject(a1, a2, ((unsigned __int8)~(_BYTE)a3 >> 2) & 1);
  if ( !Object )
    return 0LL;
  v6 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread || (a3 & 0x10) != 0 )
    v11 = 0LL;
  else
    v11 = *(_QWORD *)(ThreadWin32Thread + 72);
  if ( v11 )
    v6 = *(_DWORD *)(v11 + 8);
  GreAcquireHmgrSemaphore(v9, v8, v10);
  if ( (a3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCount(v6, v12, v13) )
  {
LABEL_19:
    GreReleaseHmgrSemaphore(v15, v14, v16);
    FreeObject((__int64)Object);
    return 0LL;
  }
  FreeHandle = hGetFreeHandle(a2);
  v18 = FreeHandle;
  if ( !FreeHandle )
  {
    if ( (a3 & 8) == 0 )
      HmgDecProcessHandleCount(v6);
    goto LABEL_19;
  }
  v19 = (unsigned __int16)FreeHandle;
  ENTRYOBJ::vSetup(
    (ENTRYOBJ *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)FreeHandle),
    Object,
    a2,
    a3,
    (unsigned __int16)FreeHandle);
  v23 = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) == 0;
  *(_QWORD *)Object = v18;
  if ( !v23 && gpentHmgrStacks )
    RECSTACKBACKTRACE(v19);
  GreReleaseHmgrSemaphore(v21, v20, v22);
  if ( (a3 & 3) != 0 )
    return Object;
  return v18;
}
