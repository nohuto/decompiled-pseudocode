/*
 * XREFs of ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C023EB74
 * Callers:
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1C0241E10 (xxxMenuBarDraw.c)
 * Callees:
 *     RevalidateDCE @ 0x1C004EEA0 (RevalidateDCE.c)
 */

void __fastcall RecalcDCVisRgn(HDC a1)
{
  __int64 v2; // rax

  GreLockVisRgn(*gpDispInfo);
  v2 = LookupDC(a1, 1LL);
  if ( v2 )
    RevalidateDCE(v2);
  GreUnlockVisRgn(*gpDispInfo);
}
