/*
 * XREFs of ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C0224444
 * Callers:
 *     Is31TrayWindow @ 0x1C0224508 (Is31TrayWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsVSlick(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // r8d
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned int v9; // ecx
  _BOOL8 result; // rax

  if ( (*((_DWORD *)a1 + 88) & 0xF) == 0
    && (v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 244LL) & 1) != 0 )
  {
    v3 = gpDispInfo;
    v4 = gpDispInfo + 120LL;
  }
  else if ( (*((_DWORD *)a1 + 88) & 0xF) == 1
         && (v5 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
         && (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 244LL) & 1) != 0 )
  {
    v3 = gpDispInfo;
    v4 = gpDispInfo + 136LL;
  }
  else
  {
    v3 = gpDispInfo;
    v4 = gpDispInfo + 104LL;
  }
  result = 0;
  if ( *(_DWORD *)(v3 + 80) == 1 )
  {
    v6 = *((_DWORD *)a1 + 28);
    v7 = *(_DWORD *)(v4 + 8);
    if ( v6 > v7 )
    {
      v8 = *((_DWORD *)a1 + 29);
      v9 = *(_DWORD *)(v4 + 12);
      if ( v8 > v9 && v8 == v9 + 100 && v6 == v7 + 100 )
        return 1;
    }
  }
  return result;
}
