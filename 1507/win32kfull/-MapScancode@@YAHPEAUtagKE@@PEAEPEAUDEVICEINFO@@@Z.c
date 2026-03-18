/*
 * XREFs of ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01D7CA8
 * Callers:
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8014 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapScancode(struct tagKE *a1, char *a2, struct DEVICEINFO *a3)
{
  __int16 v6; // dx
  __int16 *i; // rcx
  __int16 v8; // ax

  if ( gProtocolType )
    return 1LL;
  if ( gpScancodeMap )
  {
    v6 = *(unsigned __int8 *)a1 | ((unsigned __int8)*a2 << 8);
    for ( i = (__int16 *)(gpScancodeMap + 12LL); *(_DWORD *)i; i += 2 )
    {
      if ( HIWORD(*(_DWORD *)i) == v6 )
      {
        v8 = *i;
        *(_BYTE *)a1 = *i;
        *a2 = HIBYTE(v8);
        return MapFlexibleKeys(a1, *a2, a3);
      }
    }
  }
  return MapFlexibleKeys(a1, *a2, a3);
}
