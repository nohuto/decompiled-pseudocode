/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B5A60
 * Callers:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00B2E2C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 *     ?hGetFreeHandle@@YAPEAUHOBJ__@@E@Z @ 0x1C002A5E0 (-hGetFreeHandle@@YAPEAUHOBJ__@@E@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C002A680 (HmgIncProcessHandleCount.c)
 *     ?vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z @ 0x1C0034240 (-vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B5B74 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5CC0 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct _BASEOBJECT *a1, unsigned __int16 a2, char a3)
{
  struct HOBJ__ *v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct HOBJ__ *FreeHandle; // rax
  unsigned int v20; // ebx
  bool v21; // zf

  v6 = 0LL;
  v7 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9);
  if ( ThreadWin32Thread )
    ThreadWin32Thread = *(_QWORD *)(ThreadWin32Thread + 72);
  if ( ThreadWin32Thread )
    v7 = *(_DWORD *)(ThreadWin32Thread + 8);
  GreAcquireHmgrSemaphore(v12, v11, v13);
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCount(v7, v14, v15) )
  {
    FreeHandle = hGetFreeHandle(a3);
    v6 = FreeHandle;
    if ( FreeHandle )
    {
      v20 = (unsigned __int16)FreeHandle;
      ENTRYOBJ::vSetup(
        (ENTRYOBJ *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)FreeHandle),
        a1,
        a3,
        a2,
        (unsigned __int16)FreeHandle);
      v21 = WPP_MAIN_CB.DeviceLock.Header.LockNV == 0;
      *(_QWORD *)a1 = v6;
      if ( !v21 && gpentHmgrStacks )
        RECSTACKBACKTRACE(v20);
      if ( a3 == 5 && (a2 & 2) != 0 && HIDWORD(WPP_MAIN_CB.SecurityDescriptor) && gpentHmgrAltStacks )
        RECALTLOCKSTACKBACKTRACE(v20, a1);
    }
    else if ( (a2 & 8) == 0 )
    {
      HmgDecProcessHandleCount(v7, v16, v18);
    }
  }
  GreReleaseHmgrSemaphore(v17, v16, v18);
  return v6;
}
