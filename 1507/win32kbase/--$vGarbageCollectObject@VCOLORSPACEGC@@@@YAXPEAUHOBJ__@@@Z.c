/*
 * XREFs of ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF254
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00BF6D0 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     HmgShareLock @ 0x1C0004350 (HmgShareLock.c)
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     PopThreadGuardedObject @ 0x1C004C300 (PopThreadGuardedObject.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00BCDD8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vGarbageCollectObject<COLORSPACEGC>(int a1)
{
  __int64 v2; // rax
  _QWORD v3[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v4[4]; // [rsp+48h] [rbp-28h] BYREF
  struct HOBJ__ **v5; // [rsp+68h] [rbp-8h]

  memset(v4, 0, sizeof(v4));
  PushThreadGuardedObject(
    v4,
    (__int64)v4,
    (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  v5 = 0LL;
  v2 = HmgShareLock(a1, 9);
  v5 = (struct HOBJ__ **)v2;
  if ( v2 )
  {
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
        if ( (unsigned int)bDeleteColorSpace(*v5, 3) )
        {
          v5 = 0LL;
          _InterlockedDecrement(&gGarbageCollectionPendingCount);
        }
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)v3);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v3);
      v2 = (__int64)v5;
    }
    if ( v2 )
      DEC_SHARE_REF_CNT((_DWORD *)v2);
  }
  PopThreadGuardedObject(v4);
}
