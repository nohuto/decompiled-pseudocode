/*
 * XREFs of HmgShareLockCheckIgnoreStockBit @ 0x1C0071170
 * Callers:
 *     bDeleteSurface @ 0x1C0037780 (bDeleteSurface.c)
 *     EngAssociateSurface @ 0x1C00771E0 (EngAssociateSurface.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 */

__int64 __fastcall HmgShareLockCheckIgnoreStockBit(int a1, char a2)
{
  __int64 v2; // rbx
  unsigned __int16 v4; // edi^2
  struct _ENTRY *v5; // rsi
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v2 = 0LL;
  v4 = HIWORD(a1);
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v5 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1);
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v7, v5, 1, (unsigned __int16)a1, 0);
    if ( v8 && v7 )
    {
      if ( *((_BYTE *)v5 + 14) == a2 && ((*((unsigned __int16 *)v5 + 6) ^ v4) & 0xFFFFFF7F) == 0 )
      {
        v2 = *(_QWORD *)v5;
        ++*(_DWORD *)(*(_QWORD *)v5 + 8LL);
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
  }
  return v2;
}
