/*
 * XREFs of CleanupHidRequestList @ 0x1C01356A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0009F60 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 */

_QWORD *__fastcall CleanupHidRequestList(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  _QWORD *v6; // rcx
  struct tagHID_PAGEONLY_REQUEST *v7; // rcx

  v3 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  v4 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  while ( v4 != v3 )
  {
    v6 = v4;
    v4 = (_QWORD *)*v4;
    *((_DWORD *)v6 + 9) = 0;
    *((_DWORD *)v6 + 8) = 0;
    *((_DWORD *)v6 + 7) = 0;
    *((_DWORD *)v6 + 6) = 0;
    if ( !*((_DWORD *)v6 + 5) )
      FreeHidPageOnlyRequest((struct tagHID_PAGEONLY_REQUEST *)v6, a2, a3);
    v3 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  }
  while ( 1 )
  {
    result = v3 + 2;
    if ( (_QWORD *)*result == result )
      break;
    v7 = qword_1C032BB88;
    *((_DWORD *)qword_1C032BB88 + 5) = 0;
    FreeHidPageOnlyRequest(v7, a2, a3);
    v3 = (_QWORD *)RawInputManagerObject::gHidRequestTable[0];
  }
  return result;
}
