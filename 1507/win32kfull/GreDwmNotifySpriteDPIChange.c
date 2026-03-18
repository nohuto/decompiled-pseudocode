/*
 * XREFs of GreDwmNotifySpriteDPIChange @ 0x1C000EE5C
 * Callers:
 *     UpdateWindowSpriteDPI @ 0x1C0058A40 (UpdateWindowSpriteDPI.c)
 *     CreateFade @ 0x1C010E24C (CreateFade.c)
 *     vSetDevDragRectDPI @ 0x1C027BAA4 (vSetDevDragRectDPI.c)
 * Callees:
 *     DwmAsyncNotifySpriteDPIChange @ 0x1C000EF80 (DwmAsyncNotifySpriteDPIChange.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00103B8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0061CB0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmNotifySpriteDPIChange(__int64 a1, HWND a2, HSPRITE a3)
{
  unsigned int v5; // edi
  struct PDEVOBJ *v6; // rdx
  __int64 v7; // rcx
  void *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[32]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  v5 = 0;
  v10 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v13, v6, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v11, a2, a3);
    if ( v12 )
    {
      v8 = (void *)UserReferenceDwmApiPort(v7);
      v5 = DwmAsyncNotifySpriteDPIChange(v8);
      if ( v12 )
        _InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
    }
    v12 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v11);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v13);
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v5;
}
