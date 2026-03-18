/*
 * XREFs of GreDwmNotifySpriteDPIChange @ 0x1C007BE74
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C007BDC4 (UpdateWindowSpriteDPI.c)
 *     CreateFade @ 0x1C0139CBC (CreateFade.c)
 *     vSetDevDragRectDPI @ 0x1C027AA94 (vSetDevDragRectDPI.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     DwmAsyncNotifySpriteDPIChange @ 0x1C007BF7C (DwmAsyncNotifySpriteDPIChange.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C007C188 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDwmNotifySpriteDPIChange(__int64 a1, HWND a2, HSPRITE a3)
{
  unsigned int v5; // edi
  struct PDEVOBJ *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  void *v9; // rax
  unsigned int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = a1;
  v5 = 0;
  v13 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v14, v6, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v12, a2, a3);
    v8 = v12;
    if ( v12 )
    {
      v9 = (void *)UserReferenceDwmApiPort(v7);
      v10 = DwmAsyncNotifySpriteDPIChange(v9);
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
      v5 = v10;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v14);
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v5;
}
