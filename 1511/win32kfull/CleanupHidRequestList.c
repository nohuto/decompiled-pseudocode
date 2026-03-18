/*
 * XREFs of CleanupHidRequestList @ 0x1C0113B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C00071B4 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 */

_QWORD *CleanupHidRequestList()
{
  struct tagHID_PAGEONLY_REQUEST *v0; // rbx
  struct tagHID_PAGEONLY_REQUEST **v1; // rdx
  _QWORD *result; // rax
  struct tagHID_PAGEONLY_REQUEST *v3; // rcx
  struct tagHID_PAGEONLY_REQUEST *v4; // rcx

  if ( LODWORD(aDeviceTemplate[154]) )
    v0 = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[0];
  else
    v0 = gHidRequestTable;
  while ( 1 )
  {
    v1 = &gHidRequestTable;
    if ( LODWORD(aDeviceTemplate[154]) )
      v1 = (struct tagHID_PAGEONLY_REQUEST **)RawInputManagerObject::gHidRequestTable[0];
    if ( v0 == (struct tagHID_PAGEONLY_REQUEST *)v1 )
      break;
    v3 = v0;
    v0 = *(struct tagHID_PAGEONLY_REQUEST **)v0;
    *((_DWORD *)v3 + 9) = 0;
    *((_DWORD *)v3 + 8) = 0;
    *((_DWORD *)v3 + 7) = 0;
    *((_DWORD *)v3 + 6) = 0;
    if ( !*((_DWORD *)v3 + 5) )
      FreeHidPageOnlyRequest(v3);
  }
  while ( 1 )
  {
    result = LODWORD(aDeviceTemplate[154]) ? &RawInputManagerObject::gHidRequestTable[2] : &qword_1C03274D8;
    if ( (_QWORD *)*result == result )
      break;
    v4 = qword_1C03274D8;
    *((_DWORD *)qword_1C03274D8 + 5) = 0;
    FreeHidPageOnlyRequest(v4);
  }
  return result;
}
