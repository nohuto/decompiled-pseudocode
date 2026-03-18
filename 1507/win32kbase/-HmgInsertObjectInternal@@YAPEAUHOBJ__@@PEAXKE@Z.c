/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B2E40
 * Callers:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00AF044 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     ?vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z @ 0x1C0038520 (-vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C00386E0 (HmgDecProcessHandleCount.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?hGetFreeHandle@@YAPEAUHOBJ__@@E@Z @ 0x1C004ADE0 (-hGetFreeHandle@@YAPEAUHOBJ__@@E@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C004AE80 (HmgIncProcessHandleCount.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B30A0 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B31EC (-RECSTACKBACKTRACE@@YAXI@Z.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct _BASEOBJECT *a1, unsigned __int16 a2, char a3)
{
  struct HOBJ__ *v6; // rdi
  unsigned int v7; // esi
  __int64 ThreadWin32Thread; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct HOBJ__ *FreeHandle; // rax
  unsigned int v18; // ebx
  bool v19; // zf

  v6 = 0LL;
  v7 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    ThreadWin32Thread = *(_QWORD *)(ThreadWin32Thread + 72);
  if ( ThreadWin32Thread )
    v7 = *(_DWORD *)(ThreadWin32Thread + 8);
  GreAcquireHmgrSemaphore(v10, v9, v11);
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCount(v7, v12, v13) )
  {
    FreeHandle = hGetFreeHandle(a3);
    v6 = FreeHandle;
    if ( FreeHandle )
    {
      v18 = (unsigned __int16)FreeHandle;
      ENTRYOBJ::vSetup(
        (ENTRYOBJ *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)FreeHandle),
        a1,
        a3,
        a2,
        (unsigned __int16)FreeHandle);
      v19 = LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) == 0;
      *(_QWORD *)a1 = v6;
      if ( !v19 && gpentHmgrStacks )
        RECSTACKBACKTRACE(v18);
      if ( a3 == 5 && (a2 & 2) != 0 && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) && gpentHmgrAltStacks )
        RECALTLOCKSTACKBACKTRACE(v18, a1);
    }
    else if ( (a2 & 8) == 0 )
    {
      HmgDecProcessHandleCount(v7);
    }
  }
  GreReleaseHmgrSemaphore(v15, v14, v16);
  return v6;
}
