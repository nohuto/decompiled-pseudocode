/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0031BA0
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C0031B80 (TrapAppContainerRenderingWrap.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027E60 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0038E2C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0040968 (GreCreateCompatibleBitmapInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00E4674 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C014B76C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 ThreadWin32Thread; // rax
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rbx
  DC *v12; // rbx
  __int64 v13; // rbx
  DC *v14; // rcx
  char v15; // bp
  __int64 v16; // rdx
  __int64 CompatibleBitmapInternal; // rbx
  DCVISRGNSHARELOCK *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  SURFACE *v22; // rdi
  __int64 v23; // rbx
  DCVISRGNSHARELOCK *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  _BYTE v29[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+38h] [rbp-40h] BYREF
  __int64 v31[7]; // [rsp+40h] [rbp-38h] BYREF
  char v32; // [rsp+88h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
  {
    if ( !gbDisableTrappedAcRendering )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 330) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v32);
        v10 = *((_QWORD *)*a1 + 64);
        if ( !v10
          || (v11 = *(_QWORD *)(v10 + 576), v11 == PsGetCurrentProcess()) && *(int *)(v10 + 112) >= 0
          || (v12 = *a1, *((_QWORD *)*a1 + 61))
          && *((_DWORD *)v12 + 126)
          && !*((_DWORD *)v12 + 127)
          && (v13 = *((_QWORD *)v12 + 62), PsGetCurrentProcess() == v13) )
        {
          LOBYTE(v19) = 1;
          goto LABEL_32;
        }
        v14 = *a1;
        v31[0] = 0LL;
        v30 = 0LL;
        if ( (*((_DWORD *)v14 + 9) & 0x200) != 0 )
        {
          v15 = 0;
          if ( !(unsigned int)GreGetLockCount()
            && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
          {
            GreAcquireSemaphore(ghsemGreLock);
            v15 = 1;
          }
          DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v29);
          DC::vSetRendering(*a1);
          CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                       *(_QWORD *)*a1,
                                       *(_DWORD *)(v10 + 56),
                                       *(_DWORD *)(v10 + 60),
                                       0,
                                       0LL);
          if ( !CompatibleBitmapInternal )
          {
            DC::vClearRendering(*a1);
            if ( v15 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
              GreReleaseSemaphoreInternal(ghsemGreLock);
            }
            DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v18);
            LOBYTE(v19) = 0;
            goto LABEL_30;
          }
          LOBYTE(v16) = 5;
          v20 = HmgShareLock(**((_QWORD **)*a1 + 64), v16);
          LOBYTE(v21) = 5;
          v22 = (SURFACE *)v20;
          v31[0] = v20;
          v23 = HmgShareLock(CompatibleBitmapInternal, v21);
          v30 = v23;
          DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v24);
          if ( v15 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
          }
        }
        else
        {
          v19 = GreCreateCompatibleBitmapInternal(*(_QWORD *)v14, *(_DWORD *)(v10 + 56), *(_DWORD *)(v10 + 60), 0, 0LL);
          if ( !v19 )
          {
LABEL_30:
            EPALOBJ::~EPALOBJ((EPALOBJ *)&v30);
            EPALOBJ::~EPALOBJ((EPALOBJ *)v31);
LABEL_32:
            DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
            return v19;
          }
          LOBYTE(v25) = 5;
          v26 = HmgShareLock(**((_QWORD **)*a1 + 64), v25);
          LOBYTE(v27) = 5;
          v22 = (SURFACE *)v26;
          v31[0] = v26;
          v23 = HmgShareLock(v19, v27);
          v30 = v23;
        }
        *a2 = *(HSURF *)v22;
        *a3 = *(HSURF *)v23;
        INC_SHARE_REF_CNT(v22);
        if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v22) )
          ++*(_DWORD *)(v23 + 316);
        *((_QWORD *)*a1 + 65) = *a2;
        *((_QWORD *)*a1 + 64) = v23;
        INC_SHARE_REF_CNT(v23);
        if ( a4 )
        {
          *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
          *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
        }
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        LOBYTE(v19) = 1;
        goto LABEL_30;
      }
    }
  }
  return 1;
}
