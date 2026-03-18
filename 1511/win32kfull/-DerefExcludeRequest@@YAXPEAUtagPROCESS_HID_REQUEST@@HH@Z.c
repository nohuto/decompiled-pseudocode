/*
 * XREFs of ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01D3F70
 * Callers:
 *     FreeHidProcessRequest @ 0x1C008A2BC (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01D44FC (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C00071B4 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 */

void __fastcall DerefExcludeRequest(struct tagPROCESS_HID_REQUEST *a1, int a2, int a3)
{
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rcx

  if ( !a2 )
  {
    if ( (*((_DWORD *)a1 + 5) & 8) != 0 )
      --*(_DWORD *)(*((_QWORD *)a1 + 3) + 36LL);
    v3 = *((_QWORD *)a1 + 3);
    v4 = (*(_DWORD *)(v3 + 32))-- == 1;
    if ( v4 && a3 )
    {
      v5 = *((_QWORD *)a1 + 3);
      if ( !(*(_DWORD *)(v5 + 20) | *(_DWORD *)(v5 + 24) | *(_DWORD *)(v5 + 28) | *(_DWORD *)(v5 + 32)) )
        FreeHidPageOnlyRequest((struct tagHID_PAGEONLY_REQUEST *)v5);
    }
  }
}
