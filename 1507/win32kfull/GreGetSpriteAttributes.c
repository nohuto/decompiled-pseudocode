/*
 * XREFs of GreGetSpriteAttributes @ 0x1C000BC90
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C000DDF8 (CreateOrGetRedirectionBitmap.c)
 *     _GetLayeredWindowAttributes @ 0x1C01E78E0 (_GetLayeredWindowAttributes.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00103B8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0061CB0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z @ 0x1C026CB90 (-GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetSpriteAttributes(
        HDEV a1,
        struct PDEVOBJ *a2,
        void *a3,
        unsigned int *a4,
        struct _BLENDFUNCTION *a5,
        unsigned int *a6,
        int a7)
{
  unsigned int v7; // ebx
  __int64 v10; // rdx
  _BYTE v12[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h]

  v7 = 0;
  if ( a7 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&a7, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v12, (HWND)a2, 0LL);
    v10 = v13;
    if ( v13 )
    {
      v7 = 1;
      *a4 = *(_DWORD *)(v13 + 80);
      *a5 = *(struct _BLENDFUNCTION *)(v10 + 76);
      *a6 = *(_DWORD *)(v10 + 72);
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
    }
    v13 = 0LL;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v12);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&a7);
  }
  else
  {
    return (unsigned int)GdiGetSpriteAttributes(a1, (HWND)a2, a3, a4, a5, a6);
  }
  return v7;
}
