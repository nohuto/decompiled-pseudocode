/*
 * XREFs of HmgLockAllOwners @ 0x1C000B9E0
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00BF7E0 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgLockAllOwners(int a1, char a2)
{
  __int16 v3; // edi^2
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int16 v6; // cx
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = HIWORD(a1);
  v4 = 0LL;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v5 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1;
    HANDLELOCK::vLockHandle((HANDLELOCK *)v8, (struct _ENTRY *)v5, 0, (unsigned __int16)a1, 0);
    if ( (unsigned int)HANDLELOCK::bValid((HANDLELOCK *)v8) )
    {
      if ( *(_BYTE *)(v5 + 14) == a2 && *(_WORD *)(v5 + 12) == v3 )
      {
        v4 = *(_QWORD *)v5;
        v6 = *(_WORD *)(*(_QWORD *)v5 + 12LL);
        if ( !v6 || *(struct _KTHREAD **)(v4 + 16) == KeGetCurrentThread() )
        {
          *(_WORD *)(v4 + 12) = v6 + 1;
          *(_QWORD *)(v4 + 16) = KeGetCurrentThread();
        }
        else
        {
          v4 = 0LL;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)v8);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v8);
  }
  return v4;
}
