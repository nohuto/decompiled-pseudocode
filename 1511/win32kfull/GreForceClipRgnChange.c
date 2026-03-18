/*
 * XREFs of GreForceClipRgnChange @ 0x1C0103A50
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C007AF34 (-vSpDwmFlushSpriteClipRgnChange@@YAXPEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C007C138 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 */

void __fastcall GreForceClipRgnChange(__int64 a1, struct PDEVOBJ *a2)
{
  __int64 v3; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  char v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v4, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v5, (HWND)a2);
  v3 = v5;
  if ( v5 )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v6, (struct _EX_PUSH_LOCK *)(v5 + 120));
    vSpDwmFlushSpriteClipRgnChange(*(HSPRITE **)(v3 + 128));
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v4);
}
