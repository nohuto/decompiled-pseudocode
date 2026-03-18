/*
 * XREFs of ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0079488
 * Callers:
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0078364 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C0078ED8 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0132224 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 */

void __fastcall SetHidPOCountToTLCInfo(__int16 a1, int a2, int a3)
{
  BOOL v5; // r8d
  struct tagHID_PAGEONLY_REQUEST *v6; // rbx
  _BOOL8 v7; // rsi
  struct tagHID_PAGEONLY_REQUEST **v8; // rdx
  struct tagHID_PAGEONLY_REQUEST *v9; // rdx

  v5 = a3 && !a2;
  if ( aDeviceTemplate[308] )
    v6 = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[0];
  else
    v6 = gHidRequestTable;
  v7 = v5;
  while ( 1 )
  {
    v8 = &gHidRequestTable;
    if ( aDeviceTemplate[308] )
      v8 = (struct tagHID_PAGEONLY_REQUEST **)RawInputManagerObject::gHidRequestTable[0];
    if ( v6 == (struct tagHID_PAGEONLY_REQUEST *)v8 )
      break;
    v9 = v6;
    v6 = *(struct tagHID_PAGEONLY_REQUEST **)v6;
    if ( *((_WORD *)v9 + 8) == a1 )
    {
      *((_DWORD *)v9 + 7) = a2;
      if ( v7 && !(a2 | *((_DWORD *)v9 + 5) | *((_DWORD *)v9 + 6) | *((_DWORD *)v9 + 8)) )
        FreeHidPageOnlyRequest(v9);
    }
  }
}
