/*
 * XREFs of ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0078364
 * Callers:
 *     FreeHidProcessRequest @ 0x1C00783D4 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01D2A7C (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0079488 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0132224 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 */

void __fastcall DerefPageOnlyRequest(struct tagPROCESS_HID_REQUEST *a1, struct tagPROCESS_HID_TABLE *a2, int a3)
{
  __int64 v6; // rcx
  int v7; // eax

  SetHidPOCountToTLCInfo(*((_WORD *)a1 + 8), --*(_DWORD *)(*((_QWORD *)a1 + 3) + 20LL), a3);
  v6 = *((_QWORD *)a1 + 3);
  if ( !*(_DWORD *)(v6 + 20) && a3 )
  {
    FreeHidPageOnlyRequest((struct tagHID_PAGEONLY_REQUEST *)v6);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  v7 = *((_DWORD *)a1 + 5);
  if ( (v7 & 1) != 0 )
  {
    *((_DWORD *)a1 + 5) = v7 & 0xFFFFFFFE;
    --*((_DWORD *)a2 + 20);
    --dword_1C0321708;
  }
}
