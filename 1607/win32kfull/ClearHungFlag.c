/*
 * XREFs of ClearHungFlag @ 0x1C00554FC
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 *     xxxHungAppDemon @ 0x1C0059550 (xxxHungAppDemon.c)
 *     InternalInvalidate3 @ 0x1C005AD8C (InternalInvalidate3.c)
 *     xxxInternalDoSyncPaint @ 0x1C0076920 (xxxInternalDoSyncPaint.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     xxxSimpleDoSyncPaint @ 0x1C010D750 (xxxSimpleDoSyncPaint.c)
 *     xxxRedrawHungWindowFrame @ 0x1C0152ED0 (xxxRedrawHungWindowFrame.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C0108B9C (-VWPLRemoveBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
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
