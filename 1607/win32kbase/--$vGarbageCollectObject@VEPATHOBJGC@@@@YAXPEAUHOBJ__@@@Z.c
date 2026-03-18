/*
 * XREFs of ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCAE0
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CCF24 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002A400 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00BE080 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1C00CCEA4 (--1EPATHOBJGC@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<EPATHOBJGC>(unsigned int a1)
{
  __int64 v2; // rax
  bool v3; // cc
  __int64 v4; // [rsp+20h] [rbp-29h] BYREF
  int v5; // [rsp+28h] [rbp-21h]
  _DWORD v6[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v7; // [rsp+48h] [rbp-1h]
  __int128 v8; // [rsp+50h] [rbp+7h]
  __int128 v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]
  __int64 v14; // [rsp+90h] [rbp+47h]

  v14 = 0LL;
  v12 = 0;
  v10 = 0;
  v13 = 0LL;
  v11 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v2 = HmgShareLock(a1, 7);
  v7 = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8) <= 1u;
    v6[1] = *(_DWORD *)(v2 + 96);
    v6[0] = *(_DWORD *)(v2 + 92);
    if ( v3 && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
    {
      v4 = 0LL;
      v5 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v4, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
      if ( HANDLELOCK::bValid((HANDLELOCK *)&v4) && (*(_DWORD *)(v4 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
        if ( EPATHOBJGC::bGarbageCollect((EPATHOBJGC *)v6) )
          _InterlockedDecrement(&gGarbageCollectionPendingCount);
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
    }
  }
  EPATHOBJGC::~EPATHOBJGC((EPATHOBJGC *)v6);
}
