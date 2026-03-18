/*
 * XREFs of HmgShareUnlockRemoveObject @ 0x1C00759C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?vFree@ENTRYOBJ@@QEAAXI@Z @ 0x1C0034380 (-vFree@ENTRYOBJ@@QEAAXI@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgShareUnlockRemoveObject(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int16 v9; // r12
  __int16 v10; // esi^2
  struct _ENTRY *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _BYTE v16[32]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0LL;
  v6 = (unsigned __int16)a1;
  v9 = a2;
  v10 = WORD1(a1);
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    return 0LL;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v11 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v6);
  HANDLELOCK::vLockHandle((HANDLELOCK *)v16, v11, 1, v6, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)v16) )
  {
    if ( *((_BYTE *)v11 + 14) == a5 && *((_WORD *)v11 + 6) == v10 )
    {
      v5 = *(_QWORD *)v11;
      if ( --*(_DWORD *)(v5 + 8) == a3 && *(_WORD *)(v5 + 12) == v9 && (a4 || (*((_BYTE *)v11 + 15) & 1) == 0) )
      {
        *(_QWORD *)v5 = 0LL;
        ENTRYOBJ::vFree(v11, (unsigned int)v6, v14);
      }
      else
      {
        v5 = 0LL;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)v16);
  }
  GreReleaseHmgrSemaphore(v13, v12, v14);
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v16);
  return v5;
}
