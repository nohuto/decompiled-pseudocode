/*
 * XREFs of _EnumClipboardFormats @ 0x14020C9DC
 * Callers:
 *     NtUserEnumClipboardFormats @ 0x14020C9A0 (NtUserEnumClipboardFormats.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 */

__int64 __fastcall EnumClipboardFormats(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  struct tagWINDOWSTATION *v4; // rdi
  unsigned int *v5; // rcx
  struct tagCLIP *ClipFormat; // rax

  v1 = a1;
  v2 = 0;
  v4 = CheckClipboardAccess(a1);
  if ( !v4 )
    return 0LL;
  if ( *((struct tagTHREADINFO **)v4 + 6) != PtiCurrent(v3) )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  v5 = (unsigned int *)*((_QWORD *)v4 + 12);
  if ( v5 )
  {
    if ( !v1 )
      goto LABEL_8;
    ClipFormat = FindClipFormat((unsigned __int64)v4, v1, 1);
    v5 = (unsigned int *)((char *)ClipFormat + 32);
    if ( !ClipFormat )
      v5 = 0LL;
    if ( v5 )
    {
LABEL_8:
      if ( (unsigned __int64)v5 < *((_QWORD *)v4 + 12) + 32 * (unsigned __int64)*((unsigned int *)v4 + 26) )
        return *v5;
    }
  }
  return v2;
}
