/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00C0400
 * Callers:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00BD0A8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002AAF0 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0036468 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C0036580 (HmgIncProcessHandleCount.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C00365F4 (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0036B60 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00C064C (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct OBJECT *a1, unsigned __int16 a2, char a3)
{
  struct HOBJ__ *v6; // rbx
  unsigned int v7; // esi
  __int64 ThreadWin32Thread; // rax
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edx
  GdiHandleManager *v13; // rcx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  struct _BASEOBJECT *v17; // rdx
  unsigned int v19; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    ThreadWin32Thread = *(_QWORD *)(ThreadWin32Thread + 72);
  if ( ThreadWin32Thread )
    v7 = *(_DWORD *)(ThreadWin32Thread + 8);
  GreAcquireHmgrSemaphore(v10, v9, v11);
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCount(v7, v12, v14) )
  {
    v19 = 0;
    if ( GdiHandleManager::AcquireEntryIndex(v13, &v19) )
    {
      v6 = ENTRYOBJ::hSetup(a1, a3, a2, v19);
      RECHMGRCREATE(v6, v17);
      if ( a3 == 5 && (a2 & 2) != 0 && HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) && gpentHmgrAltStacks )
        RECALTLOCKSTACKBACKTRACE((unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000, a1);
    }
    else if ( (a2 & 8) == 0 )
    {
      HmgDecProcessHandleCount(v7, v15, v16);
    }
  }
  GreReleaseHmgrSemaphore((__int64)v13);
  return v6;
}
