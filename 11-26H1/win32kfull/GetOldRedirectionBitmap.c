/*
 * XREFs of GetOldRedirectionBitmap @ 0x140018A98
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x1400189F4 (DeleteOldRedirectionBitmap.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 */

__int64 __fastcall GetOldRedirectionBitmap(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 UserSessionState; // rax
  __int64 Prop; // rax

  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41398), 1LL);
  if ( Prop )
    return *(_QWORD *)(Prop + 8);
  return v3;
}
