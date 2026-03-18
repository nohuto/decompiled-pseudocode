/*
 * XREFs of ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00493C0
 * Callers:
 *     UntrapAppContainerRenderingWrap @ 0x1C00493B0 (UntrapAppContainerRenderingWrap.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0266F38 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C004A9B8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C011327C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C01132B8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall UntrapAppContainerRenderingWorker(HDC *a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  HSURF v12; // rbx
  char v13; // bl
  __int64 v14; // rax
  DCVISRGNSHARELOCK *v15; // rcx
  __int64 v16; // rax
  char v17; // [rsp+20h] [rbp-A8h]
  char v18; // [rsp+20h] [rbp-A8h]
  DC *v19[6]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v20[32]; // [rsp+60h] [rbp-68h] BYREF
  HSURF *v21; // [rsp+80h] [rbp-48h]
  _BYTE v22[32]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-20h]
  char v24; // [rsp+D8h] [rbp+10h] BYREF

  if ( *a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v19, *a1);
    SURFREF::SURFREF((SURFREF *)v20);
    SURFREF::SURFREF((SURFREF *)v22);
    LOBYTE(v8) = 5;
    v9 = HmgShareLock(*a3, v8);
    v10 = (__int64)*a2;
    LOBYTE(v11) = 5;
    v21 = (HSURF *)v9;
    v23 = HmgShareLock(v10, v11);
    v12 = *v21;
    *((_QWORD *)v19[0] + 64) = v23;
    DEC_SHARE_REF_CNT(v21);
    v21 = 0LL;
    DEC_SHARE_REF_CNT(v23);
    v23 = 0LL;
    GreDereferenceObject(v12);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
      *((_DWORD *)v19[0] + 9) |= *a4;
    if ( (*((_DWORD *)v19[0] + 9) & 0x200) != 0 )
    {
      v13 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v13 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v24);
      v17 = 5;
      v14 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v17);
      if ( v14 )
        SURFACE::bDeleteSurface(v14, 0LL, 1LL);
      *((_QWORD *)v19[0] + 65) = 0LL;
      DC::vClearRendering(v19[0]);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v15);
      if ( v13 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v18 = 5;
      v16 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v18);
      if ( v16 )
        SURFACE::bDeleteSurface(v16, 0LL, 1LL);
      *((_QWORD *)v19[0] + 65) = 0LL;
      *a2 = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v22);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v20);
    DCOBJ::~DCOBJ((DCOBJ *)v19);
  }
}
