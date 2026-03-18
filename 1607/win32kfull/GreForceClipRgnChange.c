/*
 * XREFs of GreForceClipRgnChange @ 0x1C01242C0
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0053FC0 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0053FF8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0063028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C0063A6C (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall GreForceClipRgnChange(__int64 a1, struct PDEVOBJ *a2)
{
  __int64 v3; // rbx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  char v7; // [rsp+70h] [rbp+18h] BYREF

  v6 = a1;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v6, a2, 0LL, 0LL);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v4, (HWND)a2);
  v3 = v5;
  if ( v5 )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)(v5 + 120));
    vSpDwmFlushSpriteClipRgnChange(*(HSPRITE **)(v3 + 128));
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
    if ( v5 )
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
  }
  v5 = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v4);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v6);
}
