/*
 * XREFs of ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0007144
 * Callers:
 *     FreeHidProcessRequest @ 0x1C008A2BC (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01D44FC (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C00071B4 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C00071DC (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
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
    --dword_1C0321720;
  }
}
