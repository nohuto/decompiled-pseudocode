/*
 * XREFs of HmgFree @ 0x1C0035650
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003AD7C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B964 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C004AA40 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     ?vFree@ENTRYOBJ@@QEAAXI@Z @ 0x1C0038660 (-vFree@ENTRYOBJ@@QEAAXI@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

void __fastcall HmgFree(unsigned __int16 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  unsigned __int8 v3; // bp
  __int64 v4; // rsi
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1;
  v2 = 0LL;
  v3 = 0;
  if ( a1 < (unsigned int)gcMaxHmgr )
  {
    v4 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * a1;
    GreAcquireHmgrSemaphore();
    HANDLELOCK::vLockHandle((HANDLELOCK *)v5, (struct _ENTRY *)v4, 0, v1, 0);
    if ( (unsigned int)HANDLELOCK::bValid((HANDLELOCK *)v5) )
    {
      v2 = *(_QWORD *)v4;
      v3 = *(_BYTE *)(v4 + 14);
      ENTRYOBJ::vFree((ENTRYOBJ *)v4, v1);
      HANDLELOCK::vUnlock((HANDLELOCK *)v5);
    }
    GreReleaseHmgrSemaphore();
    if ( v2 )
      FreeObject(v2, v3);
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v5);
  }
}
