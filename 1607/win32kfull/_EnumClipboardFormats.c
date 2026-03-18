/*
 * XREFs of _EnumClipboardFormats @ 0x1C0152750
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     FindClipFormat @ 0x1C00F9130 (FindClipFormat.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 */

__int64 __fastcall EnumClipboardFormats(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  __int64 v6; // rdi
  unsigned int *v7; // rcx
  __int64 ClipFormat; // rax

  v4 = a1;
  v5 = 0;
  v6 = CheckClipboardAccess(a1, a2, a3, a4);
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 48) == gptiCurrent )
    {
      v7 = *(unsigned int **)(v6 + 96);
      if ( v7 )
      {
        if ( !v4 )
          goto LABEL_7;
        ClipFormat = FindClipFormat(v6, v4, 1);
        if ( ClipFormat )
        {
          v7 = (unsigned int *)(ClipFormat + 32);
LABEL_7:
          if ( v7 )
          {
            if ( (unsigned __int64)v7 < *(_QWORD *)(v6 + 96) + 32 * (unsigned __int64)*(unsigned int *)(v6 + 104) )
              return *v7;
          }
        }
      }
      return v5;
    }
    UserSetLastError(1418LL);
  }
  return 0LL;
}
