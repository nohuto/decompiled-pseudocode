/*
 * XREFs of ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC9CC
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CCF24 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002A400 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     PushThreadGuardedObject @ 0x1C0064820 (PushThreadGuardedObject.c)
 *     PopThreadGuardedObject @ 0x1C00648D0 (PopThreadGuardedObject.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00CA188 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall vGarbageCollectObject<COLORSPACEGC>(unsigned int a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+20h] [rbp-40h] BYREF
  int v4; // [rsp+28h] [rbp-38h]
  _QWORD v5[4]; // [rsp+38h] [rbp-28h] BYREF
  struct HOBJ__ **v6; // [rsp+58h] [rbp-8h]

  memset(v5, 0, sizeof(v5));
  PushThreadGuardedObject(
    v5,
    (__int64)v5,
    (__int64)UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic);
  v6 = 0LL;
  v2 = HmgShareLock(a1, 9);
  v6 = (struct HOBJ__ **)v2;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 8) <= 1u && (*(_WORD *)(v2 + 14) & 0x4000) != 0 )
    {
      v3 = 0LL;
      v4 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v3, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
      if ( HANDLELOCK::bValid((HANDLELOCK *)&v3) && (*(_DWORD *)(v3 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
        if ( (unsigned int)bDeleteColorSpace(*v6, 3) )
        {
          v6 = 0LL;
          _InterlockedDecrement(&gGarbageCollectionPendingCount);
        }
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v3);
      v2 = (__int64)v6;
    }
    if ( v2 )
      DEC_SHARE_REF_CNT((unsigned int *)v2);
  }
  PopThreadGuardedObject(v5);
}
