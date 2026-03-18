/*
 * XREFs of ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E88E0
 * Callers:
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C00E8688 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C00E8950 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4850 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4930 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E52D0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01E5648 (-xxxUpdateModifierState@@YAXHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AccessProceduresStream(struct tagKE *a1, unsigned int a2, int a3)
{
  int v3; // ebx
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, int); // rdi

  v3 = a3;
  if ( (unsigned __int64)a3 >= 5 )
    return 1LL;
  for ( i = &off_1C02E2E50[a3]; (unsigned int)(*i)(a1, a2, ++v3); ++i )
  {
    if ( (unsigned __int64)v3 >= 5 )
      return 1LL;
  }
  return 0LL;
}
