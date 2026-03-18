/*
 * XREFs of ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C00082B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00FEC48 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 */

void __fastcall pConvertDfbSurfaceToDibNKAPC(HSURF a1, void *a2, void *a3)
{
  int v4; // eax
  __int64 v5; // rbx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  UserEnterUserCritSec(a1, a2, a3);
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v9);
  SURFREF::SURFREF((SURFREF *)v7, a1);
  if ( v8 )
  {
    v4 = *(_DWORD *)(v8 + 116);
    if ( (v4 & 0x20) != 0 )
    {
      ++glpConvertDfbSurfaceToDibNKAPC;
      *(_DWORD *)(v8 + 116) = v4 & 0xFFFFFFDF;
      if ( *(_WORD *)(v8 + 100) == 3 )
      {
        v10 = ghsemGreLock;
        ((void (*)(void))GreAcquireSemaphore)();
        GreAcquireSemaphore(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
        v9 = ghsemSprite;
        GreAcquireSemaphore(ghsemSprite);
        v5 = v8;
        DEC_SHARE_REF_CNT(v8);
        v8 = 0LL;
        pConvertDfbSurfaceToDib2(v5, 1LL, 1LL);
        SEMOBJ::vUnlock((SEMOBJ *)&v9);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        SEMOBJ::vUnlock((SEMOBJ *)&v10);
      }
    }
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v7);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  UserLeaveUserCritSec();
}
