/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C001A330
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C001A310 (TrapAppContainerRenderingWrap.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C009CE8C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00DF1D4 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0112294 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 ThreadWin32Thread; // rax
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rbx
  DC *v12; // rbx
  __int64 v13; // rbx
  char v14; // bl
  __int64 v15; // rdx
  __int64 CompatibleBitmapInternal; // rsi
  DCVISRGNSHARELOCK *v17; // rcx
  __int64 v18; // rbx
  SURFACE *v19; // rax
  __int64 v20; // rdx
  DCVISRGNSHARELOCK *v21; // rcx
  __int64 v22; // rdx
  SURFACE *v23; // rax
  __int64 v24; // rdx
  SURFACE *v25; // rcx
  HSURF v26; // rdx
  __int64 v27; // rdx
  _BYTE v29[8]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v30[32]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v31; // [rsp+58h] [rbp-50h]
  _BYTE v32[32]; // [rsp+60h] [rbp-48h] BYREF
  SURFACE *v33; // [rsp+80h] [rbp-28h]
  char v34; // [rsp+B8h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
  {
    if ( !gbDisableTrappedAcRendering )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 330) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v34);
        v10 = *((_QWORD *)*a1 + 64);
        if ( !v10
          || (v11 = *(_QWORD *)(v10 + 576), v11 == PsGetCurrentProcess()) && *(int *)(v10 + 112) >= 0
          || (v12 = *a1, *((_QWORD *)*a1 + 61))
          && *((_DWORD *)v12 + 126)
          && !*((_DWORD *)v12 + 127)
          && (v13 = *((_QWORD *)v12 + 62), PsGetCurrentProcess() == v13) )
        {
          LOBYTE(v18) = 1;
          goto LABEL_32;
        }
        SURFREF::SURFREF((SURFREF *)v32);
        SURFREF::SURFREF((SURFREF *)v30);
        if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
        {
          v14 = 0;
          if ( !(unsigned int)GreGetLockCount()
            && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
          {
            GreAcquireSemaphore(ghsemGreLock);
            v14 = 1;
          }
          DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v29);
          DC::vSetRendering(*a1);
          CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL);
          if ( !CompatibleBitmapInternal )
          {
            DC::vClearRendering(*a1);
            if ( v14 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
              GreReleaseSemaphoreInternal(ghsemGreLock);
            }
            DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v17);
            LOBYTE(v18) = 0;
            goto LABEL_30;
          }
          LOBYTE(v15) = 5;
          v19 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 64), v15);
          LOBYTE(v20) = 5;
          v33 = v19;
          v31 = HmgShareLock(CompatibleBitmapInternal, v20);
          DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v21);
          if ( v14 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
          }
        }
        else
        {
          v18 = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL);
          if ( !v18 )
          {
LABEL_30:
            SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v30);
            SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
LABEL_32:
            DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
            return v18;
          }
          LOBYTE(v22) = 5;
          v23 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 64), v22);
          LOBYTE(v24) = 5;
          v33 = v23;
          v31 = HmgShareLock(v18, v24);
        }
        v25 = v33;
        *a2 = *(HSURF *)v33;
        v26 = *(HSURF *)v31;
        *a3 = *(HSURF *)v31;
        INC_SHARE_REF_CNT(v25, v26);
        if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v33) )
          ++*(_DWORD *)(v31 + 316);
        *((_QWORD *)*a1 + 65) = *a2;
        *((_QWORD *)*a1 + 64) = v31;
        INC_SHARE_REF_CNT(v31, v27);
        if ( a4 )
        {
          *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
          *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
        }
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        LOBYTE(v18) = 1;
        goto LABEL_30;
      }
    }
  }
  return 1;
}
