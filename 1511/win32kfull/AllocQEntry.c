/*
 * XREFs of AllocQEntry @ 0x1C0057810
 * Callers:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     _PostThreadMessageEx @ 0x1C0065470 (_PostThreadMessageEx.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

_DWORD *__fastcall AllocQEntry(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  _QWORD *v4; // rax
  _DWORD *result; // rax
  int v6; // ecx

  if ( *(_DWORD *)(a1 + 16) >= gUserPostMessageLimit )
  {
    v6 = 1816;
LABEL_12:
    UserSetLastError(v6);
    return 0LL;
  }
  v2 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
  v3 = v2;
  if ( !v2 )
  {
    v6 = 8;
    goto LABEL_12;
  }
  memset(v2, 0, 0x90uLL);
  if ( *(_DWORD *)(a1 + 20) == 2 )
    v3[23] |= 8u;
  else
    v3[23] |= 4u;
  v4 = *(_QWORD **)(a1 + 8);
  if ( v4 )
  {
    *v4 = v3;
    *((_QWORD *)v3 + 1) = *(_QWORD *)(a1 + 8);
  }
  else
  {
    *(_QWORD *)a1 = v3;
  }
  ++*(_DWORD *)(a1 + 16);
  result = v3;
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
