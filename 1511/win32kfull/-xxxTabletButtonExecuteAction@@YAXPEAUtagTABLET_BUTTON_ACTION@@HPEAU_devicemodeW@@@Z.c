/*
 * XREFs of ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01D9E68
 * Callers:
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D99D0 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D9F00 (-xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?TabletAdjustBrightness@@YAXH@Z @ 0x1C01D9860 (-TabletAdjustBrightness@@YAXH@Z.c)
 *     ?xxxTabletSetDisplayOrientation@@YAXJPEAU_devicemodeW@@@Z @ 0x1C01D9FA0 (-xxxTabletSetDisplayOrientation@@YAXJPEAU_devicemodeW@@@Z.c)
 */

void __fastcall xxxTabletButtonExecuteAction(struct tagTABLET_BUTTON_ACTION *a1, int a2, struct _devicemodeW *a3)
{
  int v6; // ebx
  int v7; // ecx
  int v8; // ecx

  if ( a2 )
    v6 = *((_DWORD *)a1 + 2);
  else
    v6 = *(_DWORD *)a1;
  if ( v6 == -2147483636 )
  {
    v7 = 1;
  }
  else
  {
    if ( v6 != -2147483635 )
      goto LABEL_9;
    v7 = 0;
  }
  TabletAdjustBrightness(v7);
LABEL_9:
  if ( (PVOID)grpdeskRitInput != grpdeskLogon )
    return;
  if ( v6 == -2147483642 )
  {
    v8 = -1;
  }
  else
  {
    if ( v6 != -2147483637 )
      return;
    if ( a2 )
      v8 = *((_DWORD *)a1 + 3);
    else
      v8 = *((_DWORD *)a1 + 1);
  }
  xxxTabletSetDisplayOrientation(v8, a3);
}
