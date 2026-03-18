/*
 * XREFs of AllocQEntry @ 0x1C0067C50
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     _PostThreadMessageEx @ 0x1C0090C10 (_PostThreadMessageEx.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     memset @ 0x1C015D4C0 (memset.c)
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
