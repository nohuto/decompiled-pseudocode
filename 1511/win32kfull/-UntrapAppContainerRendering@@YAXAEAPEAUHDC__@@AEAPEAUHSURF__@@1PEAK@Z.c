/*
 * XREFs of ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C002E800
 * Callers:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0268BDC (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027E60 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C002DBA0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreDereferenceObject @ 0x1C007F7C0 (GreDereferenceObject.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00E4674 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C014B76C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

void __fastcall UntrapAppContainerRendering(HDC *a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  HDC v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbp
  DC *v15; // r13
  __int64 v16; // rbx
  char v17; // bl
  __int64 v18; // rax
  DCVISRGNSHARELOCK *v19; // rcx
  __int64 v20; // rax
  char v21; // [rsp+20h] [rbp-58h]
  char v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  DC *v25[2]; // [rsp+40h] [rbp-38h] BYREF
  char v26; // [rsp+88h] [rbp+10h] BYREF

  if ( *a2 )
  {
    v8 = *a1;
    v25[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v25, v8);
    LOBYTE(v9) = 5;
    v10 = HmgShareLock(*a3, v9);
    LOBYTE(v11) = 5;
    v12 = (__int64 *)v10;
    v13 = HmgShareLock(*a2, v11);
    v14 = *v12;
    v15 = v25[0];
    v16 = v13;
    *((_QWORD *)v25[0] + 64) = v13;
    DEC_SHARE_REF_CNT(v12);
    v24 = 0LL;
    DEC_SHARE_REF_CNT(v16);
    v23 = 0LL;
    GreDereferenceObject(v14, 1LL);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
      *((_DWORD *)v15 + 9) |= *a4;
    if ( (*((_DWORD *)v15 + 9) & 0x200) != 0 )
    {
      v17 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v17 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v26);
      v21 = 5;
      v18 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v21);
      if ( v18 )
        SURFACE::bDeleteSurface(v18, 0LL, 1LL);
      *((_QWORD *)v15 + 65) = 0LL;
      DC::vClearRendering(v15);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v19);
      if ( v17 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v22 = 5;
      v20 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v22);
      if ( v20 )
        SURFACE::bDeleteSurface(v20, 0LL, 1LL);
      *((_QWORD *)v15 + 65) = 0LL;
      *a2 = 0LL;
    }
    XDCOBJ::vUnlock((XDCOBJ *)v25);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v23);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v24);
  }
}
