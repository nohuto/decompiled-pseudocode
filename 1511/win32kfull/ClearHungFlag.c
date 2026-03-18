/*
 * XREFs of ClearHungFlag @ 0x1C0067F28
 * Callers:
 *     InternalInvalidate3 @ 0x1C0052F58 (InternalInvalidate3.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxBeginPaint @ 0x1C0067C4C (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     xxxHungAppDemon @ 0x1C008C230 (xxxHungAppDemon.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00EE158 (xxxSimpleDoSyncPaint.c)
 *     xxxRedrawHungWindowFrame @ 0x1C01425EC (xxxRedrawHungWindowFrame.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E5A54 (-VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int64 __fastcall ClearHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  int v3; // edi
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  int v6; // r9d

  v3 = *((_BYTE *)a1 + 43) & 0x18;
  result = SetOrClrWF(0LL, a1, a2, 1LL);
  if ( (*((_BYTE *)a1 + 43) & 0x18) == 0 )
  {
    if ( v3 )
      return VWPLRemoveBase(gpvwplHungRedraw, v5, a1, v6, 0LL);
  }
  return result;
}
