/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0044F30
 * Callers:
 *     TrapAppContainerRenderingWrap @ 0x1C0044F10 (TrapAppContainerRenderingWrap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0033D28 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C004A9B8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C011327C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C01132B8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 ThreadWin32Thread; // rax
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbx
  DC *v15; // rbx
  __int64 v16; // rbx
  char v17; // bl
  __int64 v18; // rdx
  __int64 CompatibleBitmapInternal; // rsi
  DCVISRGNSHARELOCK *v20; // rcx
  __int64 v21; // rbx
  SURFACE *v22; // rax
  __int64 v23; // rdx
  DCVISRGNSHARELOCK *v24; // rcx
  __int64 v25; // rdx
  SURFACE *v26; // rax
  __int64 v27; // rdx
  SURFACE *v28; // rcx
  _BYTE v30[8]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v31[32]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v32; // [rsp+58h] [rbp-50h]
  _BYTE v33[32]; // [rsp+60h] [rbp-48h] BYREF
  SURFACE *v34; // [rsp+80h] [rbp-28h]
  char v35; // [rsp+B8h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
  {
    if ( !gbDisableTrappedAcRendering )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
      if ( !ThreadWin32Thread || !*(_BYTE *)(ThreadWin32Thread + 330) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v35);
        v13 = *((_QWORD *)*a1 + 64);
        if ( !v13
          || (v14 = *(_QWORD *)(v13 + 584), v14 == PsGetCurrentProcess()) && *(int *)(v13 + 112) >= 0
          || (v15 = *a1, *((_QWORD *)*a1 + 61))
          && *((_DWORD *)v15 + 126)
          && !*((_DWORD *)v15 + 127)
          && (v16 = *((_QWORD *)v15 + 62), PsGetCurrentProcess() == v16) )
        {
          LOBYTE(v21) = 1;
          goto LABEL_32;
        }
        SURFREF::SURFREF((SURFREF *)v33);
        SURFREF::SURFREF((SURFREF *)v31);
        if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
        {
          v17 = 0;
          if ( !(unsigned int)GreGetLockCount()
            && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
          {
            GreAcquireSemaphore(ghsemGreLock);
            v17 = 1;
          }
          DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v30);
          DC::vSetRendering(*a1);
          CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL);
          if ( !CompatibleBitmapInternal )
          {
            DC::vClearRendering(*a1);
            if ( v17 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
              GreReleaseSemaphoreInternal(ghsemGreLock);
            }
            DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v20);
            LOBYTE(v21) = 0;
            goto LABEL_30;
          }
          LOBYTE(v18) = 5;
          v22 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 64), v18);
          LOBYTE(v23) = 5;
          v34 = v22;
          v32 = HmgShareLock(CompatibleBitmapInternal, v23);
          DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v24);
          if ( v17 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
          }
        }
        else
        {
          v21 = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL);
          if ( !v21 )
          {
LABEL_30:
            SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v31);
            SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v33);
LABEL_32:
            DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
            return v21;
          }
          LOBYTE(v25) = 5;
          v26 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 64), v25);
          LOBYTE(v27) = 5;
          v34 = v26;
          v32 = HmgShareLock(v21, v27);
        }
        v28 = v34;
        *a2 = *(HSURF *)v34;
        *a3 = *(HSURF *)v32;
        INC_SHARE_REF_CNT(v28);
        if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v34) )
          ++*(_DWORD *)(v32 + 324);
        *((_QWORD *)*a1 + 65) = *a2;
        *((_QWORD *)*a1 + 64) = v32;
        INC_SHARE_REF_CNT(v32);
        if ( a4 )
        {
          *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
          *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
        }
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        LOBYTE(v21) = 1;
        goto LABEL_30;
      }
    }
  }
  return 1;
}
