/*
 * XREFs of ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC8E4
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CCF24 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002A400 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@SAXPEAX@Z @ 0x1C00BD100 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@SAXPEA.c)
 */

__int64 __fastcall vGarbageCollectObject<BRUSHSELOBJGC>(unsigned int a1)
{
  __int64 v2; // rax
  struct HOBJ__ **v3; // rbx
  unsigned int *v5; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  int v8; // [rsp+38h] [rbp-18h]

  v6 = 0;
  v2 = HmgShareLock(a1, 16);
  v5 = (unsigned int *)v2;
  v3 = (struct HOBJ__ **)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    v7 = 0LL;
    v8 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v7, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
    if ( HANDLELOCK::bValid((HANDLELOCK *)&v7) && (*(_DWORD *)(v7 + 8) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
      if ( (unsigned int)bDeleteBrush(*v3, 1LL, 3) )
      {
        v5 = 0LL;
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
      }
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
  }
  return UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::OnUnexpectedThreadTerminationStatic(&v5);
}
