/*
 * XREFs of ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF368
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00BF6D0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     HmgShareLock @ 0x1C0004350 (HmgShareLock.c)
 *     ??0EPATHOBJ@@QEAA@XZ @ 0x1C00261E8 (--0EPATHOBJ@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00B00E0 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1C00BF648 (--1EPATHOBJGC@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<EPATHOBJGC>(int a1)
{
  __int64 v2; // rax
  _QWORD v3[4]; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v4[2]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v5; // [rsp+58h] [rbp-1h]

  EPATHOBJ::EPATHOBJ((EPATHOBJ *)v4);
  v2 = HmgShareLock(a1, 7);
  v5 = v2;
  if ( v2 )
  {
    v4[1] = *(_DWORD *)(v2 + 96);
    v4[0] = *(_DWORD *)(v2 + 92);
    if ( *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
    {
      HANDLELOCK::vLockHandle(
        (HANDLELOCK *)v3,
        (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1),
        0,
        (unsigned __int16)a1,
        0);
      if ( HANDLELOCK::bValid((HANDLELOCK *)v3) && (*(_DWORD *)(v3[0] + 8LL) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)v3);
        if ( EPATHOBJGC::bGarbageCollect((EPATHOBJGC *)v4) )
          _InterlockedDecrement(&gGarbageCollectionPendingCount);
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)v3);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v3);
    }
  }
  EPATHOBJGC::~EPATHOBJGC((EPATHOBJGC *)v4);
}
