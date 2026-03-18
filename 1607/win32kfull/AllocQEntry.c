/*
 * XREFs of AllocQEntry @ 0x1C005C498
 * Callers:
 *     _PostThreadMessageEx @ 0x1C0057D1C (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

_DWORD *__fastcall AllocQEntry(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  _QWORD *v4; // rax
  _DWORD *result; // rax
  __int64 v6; // rcx

  if ( *(_DWORD *)(a1 + 16) >= gUserPostMessageLimit )
  {
    v6 = 1816LL;
LABEL_12:
    UserSetLastError(v6);
    return 0LL;
  }
  v2 = (_DWORD *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
  v3 = v2;
  if ( !v2 )
  {
    v6 = 8LL;
    goto LABEL_12;
  }
  memset(v2, 0, 0x98uLL);
  if ( *(_DWORD *)(a1 + 20) == 2 )
    v3[25] |= 8u;
  else
    v3[25] |= 4u;
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
