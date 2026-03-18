/*
 * XREFs of HmgMarkUndeletable @ 0x1C000F910
 * Callers:
 *     GreMarkUndeletableBitmap @ 0x1C000F900 (GreMarkUndeletableBitmap.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C007BC34 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMarkUndeletableBrush @ 0x1C0081500 (GreMarkUndeletableBrush.c)
 *     GreMarkUndeletableRgn @ 0x1C00BE4A8 (GreMarkUndeletableRgn.c)
 *     bInitICM @ 0x1C0137F6C (bInitICM.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgMarkUndeletable(int a1, char a2)
{
  unsigned int v2; // esi
  __int16 v4; // edi^2
  __int64 v5; // rbx
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v4 = HIWORD(a1);
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v5 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1;
    HANDLELOCK::vLockHandle((HANDLELOCK *)v7, (struct _ENTRY *)v5, 1, (unsigned __int16)a1, 0);
    if ( (unsigned int)HANDLELOCK::bValid((HANDLELOCK *)v7) )
    {
      if ( *(_BYTE *)(v5 + 14) == a2 && *(_WORD *)(v5 + 12) == v4 )
      {
        *(_BYTE *)(v5 + 15) |= 1u;
        v2 = 1;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)v7);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v7);
  }
  return v2;
}
