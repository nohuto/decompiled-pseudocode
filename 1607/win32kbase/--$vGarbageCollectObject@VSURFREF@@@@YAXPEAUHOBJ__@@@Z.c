/*
 * XREFs of ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCBE8
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CCF24 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0026AD8 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002A400 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BEDC0 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00C4E0C (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<SURFREF>(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+20h] [rbp-40h] BYREF
  int v4; // [rsp+28h] [rbp-38h]
  _BYTE v5[32]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v6; // [rsp+58h] [rbp-8h]

  SURFREF::SURFREF((SURFREF *)v5);
  v2 = HmgShareLock(a1, 5);
  v6 = v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    v3 = 0LL;
    v4 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v3, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
    if ( HANDLELOCK::bValid((HANDLELOCK *)&v3) && (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
      if ( (unsigned int)SURFREF::bDeleteSurface((__int64)v5, 3) )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v3);
  }
  SURFREF::~SURFREF((SURFREF *)v5);
}
