/*
 * XREFs of ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF450
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00BF6D0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     HmgShareLock @ 0x1C0004350 (HmgShareLock.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00AEEB0 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00B0E60 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

void __fastcall vGarbageCollectObject<SURFREF>(int a1)
{
  __int64 v2; // rax
  _QWORD v3[3]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v4[32]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v5; // [rsp+68h] [rbp-10h]

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v4);
  v5 = 0LL;
  v2 = HmgShareLock(a1, 5);
  v5 = v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
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
      if ( (unsigned int)SURFREF::bDeleteSurface((__int64)v4, 3) )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)v3);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v3);
  }
  SURFREF::~SURFREF((SURFREF *)v4);
}
