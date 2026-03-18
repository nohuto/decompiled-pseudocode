/*
 * XREFs of HmgFree @ 0x1C00B5EB0
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C002360C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002A5B0 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?vFree@ENTRYOBJ@@QEAAXI@Z @ 0x1C0034380 (-vFree@ENTRYOBJ@@QEAAXI@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 */

void __fastcall HmgFree(unsigned __int16 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  struct _ENTRY *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a1;
  v4 = 0LL;
  if ( a1 < (unsigned int)gcMaxHmgr )
  {
    v5 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * a1);
    GreAcquireHmgrSemaphore(3LL * a1, a2, a3);
    HANDLELOCK::vLockHandle((HANDLELOCK *)v9, v5, 0, v3, 0);
    if ( HANDLELOCK::bValid((HANDLELOCK *)v9) )
    {
      v4 = *(_QWORD *)v5;
      ENTRYOBJ::vFree(v5, v3, v8);
      HANDLELOCK::vUnlock((HANDLELOCK *)v9);
    }
    GreReleaseHmgrSemaphore(v7, v6, v8);
    if ( v4 )
      FreeObject(v4);
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v9);
  }
}
