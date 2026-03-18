/*
 * XREFs of ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C0078CE4
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C0078618 (_RegisterRawInputDevices.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0132224 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 */

void CleanupFreedTLCInfo(void)
{
  __int64 v0; // rcx
  struct tagHID_PAGEONLY_REQUEST **v1; // r8
  struct tagHID_PAGEONLY_REQUEST *v2; // rbx
  struct tagHID_PAGEONLY_REQUEST **v3; // rax
  struct tagHID_PAGEONLY_REQUEST *v4; // r9
  struct tagHID_PAGEONLY_REQUEST *v5; // rbx
  struct tagHID_PAGEONLY_REQUEST **v6; // rax
  struct tagHID_PAGEONLY_REQUEST *v7; // rax

  v0 = *(_QWORD *)aDeviceTemplate;
  v1 = (struct tagHID_PAGEONLY_REQUEST **)RawInputManagerObject::gHidRequestTable[0];
  v2 = gHidRequestTable;
  if ( aDeviceTemplate[308] )
    v2 = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[0];
  while ( 1 )
  {
    v3 = &gHidRequestTable;
    if ( *(_DWORD *)(v0 + 1232) )
      v3 = v1;
    if ( v2 == (struct tagHID_PAGEONLY_REQUEST *)v3 )
      break;
    v4 = v2;
    v2 = *(struct tagHID_PAGEONLY_REQUEST **)v2;
    if ( !(*((_DWORD *)v4 + 5) | *((_DWORD *)v4 + 6) | *((_DWORD *)v4 + 7) | *((_DWORD *)v4 + 8)) )
    {
      FreeHidPageOnlyRequest(v4);
      v0 = *(_QWORD *)aDeviceTemplate;
      v1 = (struct tagHID_PAGEONLY_REQUEST **)RawInputManagerObject::gHidRequestTable[0];
    }
  }
  v5 = qword_1C0328800;
  if ( !*(_DWORD *)(v0 + 1232) )
    goto LABEL_16;
  v5 = v1[2];
  while ( 1 )
  {
    if ( *(_DWORD *)(v0 + 1232) )
      v6 = v1 + 2;
    else
LABEL_16:
      v6 = &qword_1C0328800;
    if ( v5 == (struct tagHID_PAGEONLY_REQUEST *)v6 )
      break;
    v7 = v5;
    v5 = *(struct tagHID_PAGEONLY_REQUEST **)v5;
    if ( !*((_DWORD *)v7 + 5) )
    {
      FreeHidPageOnlyRequest(v7);
      v0 = *(_QWORD *)aDeviceTemplate;
      v1 = (struct tagHID_PAGEONLY_REQUEST **)RawInputManagerObject::gHidRequestTable[0];
    }
  }
}
