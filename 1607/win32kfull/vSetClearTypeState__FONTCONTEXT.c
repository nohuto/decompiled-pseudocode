/*
 * XREFs of vSetClearTypeState__FONTCONTEXT @ 0x1C001ACAC
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0019FE0 (bComputeMaxGlyph.c)
 * Callees:
 *     fd_FindBlocStrike @ 0x1C0130374 (fd_FindBlocStrike.c)
 */

int __fastcall vSetClearTypeState__FONTCONTEXT(__int64 *a1)
{
  __int64 v2; // r8
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // ecx

  *((_DWORD *)a1 + 10) |= 0x80000000;
  v2 = a1[1];
  v3 = *((_DWORD *)a1 + 10);
  if ( (*(_DWORD *)(v2 + 300) & 0x100) != 0 && (*((_DWORD *)a1 + 29) & 3) != 0 )
  {
    v6 = *((_DWORD *)a1 + 20);
    v7 = *((_DWORD *)a1 + 24);
    if ( v6 == v7 || v6 == -v7 )
    {
      v8 = *((_DWORD *)a1 + 21);
      v9 = *((_DWORD *)a1 + 23);
      if ( v8 == v9 || v8 == -v9 )
      {
        v10 = a1[24];
        if ( *(_DWORD *)(v10 + 152) )
        {
          if ( (unsigned int)fd_FindBlocStrike(
                               *(_QWORD *)(v2 + 64) + *(unsigned int *)(v10 + 152),
                               *((unsigned __int16 *)a1 + 62),
                               *(unsigned int *)(v10 + 156)) )
          {
            v11 = *a1;
            v12 = v3 & 0xEDFEFFFF | 0x2000000;
            *((_DWORD *)a1 + 10) = v12;
            *(_DWORD *)(v11 + 12) = v12;
          }
        }
      }
    }
  }
  v4 = a1[1];
  if ( (*(_DWORD *)(v4 + 300) & 2) != 0
    || (LODWORD(v5) = _wcsicmp((const wchar_t *)(*(int *)(v4 + 360) + v4 + 352), L"Marlett"), !(_DWORD)v5) )
  {
    v5 = *a1;
    v13 = a1[5] & 0xEDFEFFFF | 0x2000000;
    *((_DWORD *)a1 + 10) = v13;
    *(_DWORD *)(v5 + 12) = v13;
  }
  return v5;
}
