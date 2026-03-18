/*
 * XREFs of HmgShareLockIgnoreStockBit @ 0x1C0077048
 * Callers:
 *     EngModifySurface @ 0x1C0075FE0 (EngModifySurface.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgShareLockIgnoreStockBit(int a1)
{
  __int64 v1; // rbx
  unsigned __int16 v2; // edi^2
  struct _ENTRY *v3; // rsi
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = HIWORD(a1);
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v3 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1);
    HANDLELOCK::vLockHandle((HANDLELOCK *)v5, v3, 0, (unsigned __int16)a1, 0);
    if ( HANDLELOCK::bValid((HANDLELOCK *)v5) )
    {
      if ( *((_BYTE *)v3 + 14) == 5 && ((*((unsigned __int16 *)v3 + 6) ^ v2) & 0xFFFFFF7F) == 0 )
      {
        v1 = *(_QWORD *)v3;
        ++*(_DWORD *)(*(_QWORD *)v3 + 8LL);
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)v5);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v5);
  }
  return v1;
}
