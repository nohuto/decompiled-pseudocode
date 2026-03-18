/*
 * XREFs of ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FD98
 * Callers:
 *     NtGdiDdDestroyFullscreenSprite @ 0x1C02639F0 (NtGdiDdDestroyFullscreenSprite.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreDeleteSprite @ 0x1C007FE74 (GreDeleteSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall SpDdDestroyFullscreenSprite(HDC a1, HSPRITE a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  HDEV v5; // rdi
  struct PDEVOBJ *v6; // rdx
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v9[1] = 0LL;
  v3 = -1073741811;
  XDCOBJ::vLock((XDCOBJ *)v9, a1);
  v4 = v9[0];
  if ( v9[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
    v11 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    v5 = *(HDEV *)(v4 + 48);
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v10, v6, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( g_pDwmState && (unsigned int)GreDeleteSprite(v5, 0LL, a2, 1) )
      v3 = 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v10);
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
  }
  return v3;
}
