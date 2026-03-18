/*
 * XREFs of ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C00088A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00E3CF0 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 */

void __fastcall pConvertDfbSurfaceToDibNKAPC(void *a1, void *a2, void *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  UserEnterUserCritSec(a1, a2, a3);
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v10);
  LOBYTE(v4) = 5;
  v5 = HmgShareLockCheck(a1, v4);
  v10 = v5;
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_DWORD *)(v5 + 116);
    if ( (v7 & 0x20) != 0 )
    {
      ++glpConvertDfbSurfaceToDibNKAPC;
      *(_DWORD *)(v6 + 116) = v7 & 0xFFFFFFDF;
      if ( *(_WORD *)(v6 + 100) == 3 )
      {
        v9[0] = ghsemGreLock;
        GreAcquireSemaphore(ghsemGreLock);
        GreAcquireSemaphore(ghsemDCVisRgn);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
        v11 = ghsemSprite;
        GreAcquireSemaphore(ghsemSprite);
        DEC_SHARE_REF_CNT(v6);
        v10 = 0LL;
        pConvertDfbSurfaceToDib2(v6, 1LL, 1LL);
        SEMOBJ::vUnlock((SEMOBJ *)&v11);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        SEMOBJ::vUnlock((SEMOBJ *)v9);
      }
    }
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v10);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  UserLeaveUserCritSec();
}
