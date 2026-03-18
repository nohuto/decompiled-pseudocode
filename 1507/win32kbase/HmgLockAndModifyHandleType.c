/*
 * XREFs of HmgLockAndModifyHandleType @ 0x1C007E520
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C006A000 (GreMakeBitmapNonStock.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

__int64 __fastcall HmgLockAndModifyHandleType(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rcx
  _BYTE v6[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 1;
  v3 = 3LL * (unsigned __int16)a1;
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)v6,
    (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1),
    1,
    (unsigned __int16)a1,
    0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)v6) )
  {
    v4 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
    *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 8 * v3 + 12) = WORD1(a1);
    **(_QWORD **)(v4 + 8 * v3) = a1;
    HANDLELOCK::vUnlock((HANDLELOCK *)v6);
  }
  else
  {
    v2 = 0;
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v6);
  return v2;
}
