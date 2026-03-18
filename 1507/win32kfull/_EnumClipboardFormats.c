/*
 * XREFs of _EnumClipboardFormats @ 0x1C0123F30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     FindClipFormat @ 0x1C00D651C (FindClipFormat.c)
 *     CheckClipboardAccess @ 0x1C00D6580 (CheckClipboardAccess.c)
 */

__int64 __fastcall EnumClipboardFormats(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  unsigned int *v4; // rcx
  __int64 ClipFormat; // rax

  v2 = 0;
  v3 = CheckClipboardAccess();
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 48) == gptiCurrent )
    {
      v4 = *(unsigned int **)(v3 + 96);
      if ( v4 )
      {
        if ( !a1 )
          goto LABEL_7;
        ClipFormat = FindClipFormat(v3, a1, 1);
        if ( ClipFormat )
        {
          v4 = (unsigned int *)(ClipFormat + 32);
LABEL_7:
          if ( v4 )
          {
            if ( (unsigned __int64)v4 < *(_QWORD *)(v3 + 96) + 32 * (unsigned __int64)*(unsigned int *)(v3 + 104) )
              return *v4;
          }
        }
      }
      return v2;
    }
    UserSetLastError(1418);
  }
  return 0LL;
}
