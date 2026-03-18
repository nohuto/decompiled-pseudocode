/*
 * XREFs of ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C023A214
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C023AD48 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C023A8C0 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 */

__int64 __fastcall HandleLossOfPrimary(struct tagPOINTER_INFO *a1)
{
  int v1; // r8d
  int v3; // ecx

  v1 = *((_DWORD *)a1 + 3);
  if ( (v1 & 0x40004) == 0 || (v1 & 0x10000) != 0 )
  {
    ResetMousePromotionInfo(0, (unsigned __int16)a1);
    return 0LL;
  }
  else
  {
    *((_DWORD *)a1 + 3) = 303104;
    v3 = *((_DWORD *)a1 + 3);
    if ( (v1 & 2) != 0 )
      v3 = 303106;
    *((_DWORD *)a1 + 3) = v3;
    if ( (v1 & 0x4000) != 0 )
      *((_DWORD *)a1 + 3) |= 0x4000u;
    return 1LL;
  }
}
