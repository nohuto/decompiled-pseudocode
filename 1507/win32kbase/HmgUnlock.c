/*
 * XREFs of HmgUnlock @ 0x1C00B3690
 * Callers:
 *     GreUnlockRegion @ 0x1C0014590 (GreUnlockRegion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgUnlock(int a1)
{
  unsigned int v1; // ebx
  __int16 v2; // edi^2
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int16 v5; // dx
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  v2 = HIWORD(a1);
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v3 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1;
    HANDLELOCK::vLockHandle((HANDLELOCK *)v7, (struct _ENTRY *)v3, 1, (unsigned __int16)a1, 0);
    if ( HANDLELOCK::bValid((HANDLELOCK *)v7) )
    {
      if ( *(_BYTE *)(v3 + 14) == 4 && *(_WORD *)(v3 + 12) == v2 )
      {
        v4 = *(_QWORD *)v3;
        if ( *(_QWORD *)v3 )
        {
          v5 = *(_WORD *)(v4 + 12);
          if ( v5 )
          {
            if ( *(struct _KTHREAD **)(v4 + 16) == KeGetCurrentThread() )
            {
              v1 = 1;
              *(_WORD *)(v4 + 12) = v5 - 1;
            }
          }
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)v7);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v7);
  }
  return v1;
}
