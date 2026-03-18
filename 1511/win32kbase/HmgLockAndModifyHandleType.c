/*
 * XREFs of HmgLockAndModifyHandleType @ 0x1C005DBD0
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C005DB10 (GreMakeBitmapNonStock.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgLockAndModifyHandleType(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  _QWORD **SystemArgument2; // rcx
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 1;
  v3 = 3LL * (unsigned __int16)a1;
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)v6,
    (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1),
    1,
    (unsigned __int16)a1,
    0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)v6) )
  {
    SystemArgument2 = (_QWORD **)WPP_MAIN_CB.Dpc.SystemArgument2;
    *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 4 * v3 + 6) = WORD1(a1);
    *SystemArgument2[v3] = a1;
    HANDLELOCK::vUnlock((HANDLELOCK *)v6);
  }
  else
  {
    v2 = 0;
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v6);
  return v2;
}
