/*
 * XREFs of HmgShareUnlockRemoveObject @ 0x1C00122D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFree@ENTRYOBJ@@QEAAXI@Z @ 0x1C0038660 (-vFree@ENTRYOBJ@@QEAAXI@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgShareUnlockRemoveObject(int a1, __int16 a2, int a3, int a4, char a5)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int16 v10; // esi^2
  __int64 v11; // rdi
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0LL;
  v6 = (unsigned __int16)a1;
  v10 = HIWORD(a1);
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    return 0LL;
  GreAcquireHmgrSemaphore();
  v11 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v6;
  HANDLELOCK::vLockHandle((HANDLELOCK *)v13, (struct _ENTRY *)v11, 1, v6, 0);
  if ( (unsigned int)HANDLELOCK::bValid((HANDLELOCK *)v13) )
  {
    if ( *(_BYTE *)(v11 + 14) == a5 && *(_WORD *)(v11 + 12) == v10 )
    {
      v5 = *(_QWORD *)v11;
      if ( --*(_DWORD *)(v5 + 8) == a3 && *(_WORD *)(v5 + 12) == a2 && (a4 || (*(_BYTE *)(v11 + 15) & 1) == 0) )
      {
        *(_QWORD *)v5 = 0LL;
        ENTRYOBJ::vFree((ENTRYOBJ *)v11, v6);
      }
      else
      {
        v5 = 0LL;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)v13);
  }
  GreReleaseHmgrSemaphore();
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v13);
  return v5;
}
