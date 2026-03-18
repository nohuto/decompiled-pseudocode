/*
 * XREFs of ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF530
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00BF6D0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     HmgShareLock @ 0x1C0004350 (HmgShareLock.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003AD7C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00B1298 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00B12F0 (--1XEPALOBJ2@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<XEPALOBJ2>(int a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD v6[3]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v7[5]; // [rsp+48h] [rbp-28h] BYREF
  HSEMAPHORE v8; // [rsp+88h] [rbp+18h] BYREF

  XEPALOBJ2::XEPALOBJ2((XEPALOBJ2 *)v7);
  v2 = HmgShareLock(a1, 8);
  v7[0] = v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
  {
    HANDLELOCK::vLockHandle(
      (HANDLELOCK *)v6,
      (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1),
      0,
      (unsigned __int16)a1,
      0);
    if ( HANDLELOCK::bValid((HANDLELOCK *)v6) && (*(_DWORD *)(v6[0] + 8LL) & 0xFFFFFFFE) == 0x80000012 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)v6);
      v8 = ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      v3 = XEPALOBJ::bDeletePalette((XEPALOBJ *)v7, 1LL, 3);
      SEMOBJ::vUnlock((SEMOBJ *)&v8, v4, v5);
      if ( v3 )
        _InterlockedDecrement(&gGarbageCollectionPendingCount);
    }
    else
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)v6);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v6);
  }
  XEPALOBJ2::~XEPALOBJ2((XEPALOBJ2 *)v7);
}
