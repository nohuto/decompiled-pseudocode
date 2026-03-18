/*
 * XREFs of ClearHungFlag @ 0x1C0089EE8
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     xxxInternalDoSyncPaint @ 0x1C0062240 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C007CE24 (xxxSimpleDoSyncPaint.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     xxxBeginPaint @ 0x1C0089C38 (xxxBeginPaint.c)
 *     xxxHungAppDemon @ 0x1C008CC20 (xxxHungAppDemon.c)
 *     InternalInvalidate3 @ 0x1C008F748 (InternalInvalidate3.c)
 *     xxxRedrawHungWindowFrame @ 0x1C0117688 (xxxRedrawHungWindowFrame.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E3ABC (-VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int16 __fastcall ClearHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  int v3; // edi
  __int16 result; // ax
  unsigned __int64 v5; // rdx
  int v6; // r9d

  v3 = *((_BYTE *)a1 + 43) & 0x18;
  result = SetOrClrWF(0, a1, a2, 1);
  if ( (*((_BYTE *)a1 + 43) & 0x18) == 0 )
  {
    if ( v3 )
      return VWPLRemoveBase(gpvwplHungRedraw, v5, a1, v6, 0LL);
  }
  return result;
}
