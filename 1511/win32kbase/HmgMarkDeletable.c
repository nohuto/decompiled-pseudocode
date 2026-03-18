/*
 * XREFs of HmgMarkDeletable @ 0x1C0071C50
 * Callers:
 *     GreMarkDeletableBitmap @ 0x1C0071C20 (GreMarkDeletableBitmap.c)
 *     GreMarkDeletableRgn @ 0x1C0071C30 (GreMarkDeletableRgn.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgMarkDeletable(int a1, char a2)
{
  unsigned int v2; // esi
  __int16 v4; // edi^2
  struct _ENTRY *v5; // rbx
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v4 = HIWORD(a1);
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v5 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1);
    HANDLELOCK::vLockHandle((HANDLELOCK *)v7, v5, 0, (unsigned __int16)a1, 0);
    if ( HANDLELOCK::bValid((HANDLELOCK *)v7) )
    {
      if ( *((_BYTE *)v5 + 14) == a2 && *((_WORD *)v5 + 6) == v4 )
      {
        *((_BYTE *)v5 + 15) &= ~1u;
        v2 = 1;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)v7);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v7);
  }
  return v2;
}
