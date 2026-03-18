/*
 * XREFs of ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCDA8
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CCF24 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C0027064 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002A400 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00BF18C (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00BF1E4 (--1XEPALOBJ2@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<XEPALOBJ2>(unsigned int a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+28h] [rbp-38h]
  unsigned int *v6[5]; // [rsp+38h] [rbp-28h] BYREF
  HSEMAPHORE v7; // [rsp+78h] [rbp+18h] BYREF

  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v6);
  v2 = HmgShareLock(a1, 8);
  v6[0] = (unsigned int *)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    v4 = 0LL;
    v5 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
    if ( HANDLELOCK::bValid((HANDLELOCK *)&v4) && (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      v7 = ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      v3 = XEPALOBJ::bDeletePalette((XEPALOBJ *)v6, 1LL, 3);
      SEMOBJ::vUnlock((PERESOURCE *)&v7);
      if ( v3 )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  }
  XEPALOBJ2::~XEPALOBJ2(v6);
}
