/*
 * XREFs of SearchIconCache @ 0x1C00A0B70
 * Callers:
 *     _FindExistingCursorIcon @ 0x1C00A0AE0 (_FindExistingCursorIcon.c)
 * Callees:
 *     ?ResStrCmp@@YAHPEAU_UNICODE_STRING@@0@Z @ 0x1C00A0C44 (-ResStrCmp@@YAHPEAU_UNICODE_STRING@@0@Z.c)
 */

__int64 __fastcall SearchIconCache(__int64 a1, __int16 a2, struct _UNICODE_STRING *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbx
  int v10; // eax
  int v11; // ecx
  int v12; // eax

  v8 = a1;
  if ( !a1 )
    return 0LL;
  while ( 1 )
  {
    if ( a4 && v8 == a4 )
      return a4;
    if ( a2 == *(_WORD *)(v8 + 72)
      && (*(_DWORD *)(v8 + 80) & 0x1004) == 4
      && *(_WORD *)(v8 + 74) == *(_WORD *)(a5 + 8)
      && (unsigned int)ResStrCmp(a3, (struct _UNICODE_STRING *)(v8 + 56)) )
    {
      if ( (*(_DWORD *)(v8 + 80) & 8) != 0 )
        break;
      v10 = *(_DWORD *)(a5 + 12);
      if ( !v10 || *(_DWORD *)(v8 + 140) == v10 )
      {
        v11 = *(_DWORD *)(a5 + 16);
        if ( !v11 || *(_DWORD *)(v8 + 144) >> 1 == v11 )
        {
          v12 = *(_DWORD *)(a5 + 20);
          if ( !v12 || *(_DWORD *)(v8 + 136) == v12 )
            break;
        }
      }
    }
    v8 = *(_QWORD *)(v8 + 32);
    if ( !v8 )
      return 0LL;
  }
  return v8;
}
