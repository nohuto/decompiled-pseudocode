/*
 * XREFs of HmgShareLockIgnoreStockBit @ 0x1C0013098
 * Callers:
 *     EngModifySurface @ 0x1C0011F30 (EngModifySurface.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgShareLockIgnoreStockBit(int a1)
{
  __int64 v1; // rbx
  unsigned __int16 v2; // edi^2
  __int64 v3; // rsi
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = HIWORD(a1);
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v3 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1;
    HANDLELOCK::vLockHandle((HANDLELOCK *)v5, (struct _ENTRY *)v3, 0, (unsigned __int16)a1, 0);
    if ( (unsigned int)HANDLELOCK::bValid((HANDLELOCK *)v5) )
    {
      if ( *(_BYTE *)(v3 + 14) == 5 && ((*(unsigned __int16 *)(v3 + 12) ^ v2) & 0xFFFFFF7F) == 0 )
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
