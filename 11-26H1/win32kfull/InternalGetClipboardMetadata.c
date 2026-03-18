/*
 * XREFs of InternalGetClipboardMetadata @ 0x140225F64
 * Callers:
 *     NtUserGetClipboardMetadata @ 0x140225E90 (NtUserGetClipboardMetadata.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 */

__int64 __fastcall InternalGetClipboardMetadata(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // esi
  struct tagWINDOWSTATION *v4; // rax
  int v5; // ebx
  struct tagCLIP *ClipFormat; // rax
  int v7; // ecx
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // eax

  v3 = a1;
  if ( *a2 != 1 )
  {
    v7 = 87;
    goto LABEL_5;
  }
  v4 = CheckClipboardAccess(a1);
  v5 = 0;
  if ( !v4 )
  {
    v7 = 5;
    goto LABEL_5;
  }
  ClipFormat = FindClipFormat((unsigned __int64)v4, v3, 1);
  if ( !ClipFormat )
  {
    v7 = 1168;
LABEL_5:
    UserSetLastError(v7);
    return 0LL;
  }
  v9 = *((_QWORD *)ClipFormat + 1);
  if ( !v9 || (v10 = 0, v9 == 3) )
    v10 = 1;
  a2[1] = v10;
  result = 1LL;
  LOBYTE(v5) = (unsigned __int64)(v9 - 1) <= 3;
  a2[2] = v5;
  return result;
}
