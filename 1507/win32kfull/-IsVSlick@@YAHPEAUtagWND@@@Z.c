/*
 * XREFs of ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C022386C
 * Callers:
 *     Is31TrayWindow @ 0x1C0223920 (Is31TrayWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsVSlick(struct tagWND *a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned int v6; // r9d
  unsigned int v7; // r10d
  unsigned int v8; // ecx
  _BOOL8 result; // rax

  v2 = *((_DWORD *)a1 + 86);
  if ( v2 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v2 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 8LL) + 260LL) & 1) != 0 )
    {
      v3 = gpDispInfo;
      v4 = gpDispInfo + 136LL;
    }
    else
    {
      v3 = gpDispInfo;
      v4 = gpDispInfo + 104LL;
    }
  }
  else
  {
    v3 = gpDispInfo;
    v4 = gpDispInfo + 120LL;
  }
  result = 0;
  if ( *(_DWORD *)(v3 + 80) == 1 )
  {
    v5 = *((_DWORD *)a1 + 28);
    v6 = *(_DWORD *)(v4 + 8);
    if ( v5 > v6 )
    {
      v7 = *((_DWORD *)a1 + 29);
      v8 = *(_DWORD *)(v4 + 12);
      if ( v7 > v8 && v7 == v8 + 100 && v5 == v6 + 100 )
        return 1;
    }
  }
  return result;
}
