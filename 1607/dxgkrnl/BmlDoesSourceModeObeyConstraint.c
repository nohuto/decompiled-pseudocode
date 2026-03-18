/*
 * XREFs of BmlDoesSourceModeObeyConstraint @ 0x1C00C03A4
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C00BFEF0 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithConstraint @ 0x1C00C0300 (BmlCompareSourceModesWithConstraint.c)
 * Callees:
 *     BmlIsSupportedSourceMode @ 0x1C00C0410 (BmlIsSupportedSourceMode.c)
 */

bool __fastcall BmlDoesSourceModeObeyConstraint(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  bool result; // al
  int v8; // ecx

  v3 = a3;
  v4 = *(_QWORD *)(104LL * a2 + a1 + 16);
  v5 = a3;
  LOBYTE(a3) = *(_BYTE *)(v4 + 120) != 0;
  v6 = *(_DWORD *)v4 >> 8;
  LOBYTE(v6) = (*(_DWORD *)v4 & 0x100) == 0;
  result = 0;
  if ( (unsigned __int8)BmlIsSupportedSourceMode(v5, v6, a3) )
  {
    if ( (*(_DWORD *)v4 & 0x100) == 0 )
      return 1;
    v8 = *(_DWORD *)(v4 + 108);
    if ( (!v8 || v3[24] == v8)
      && ((*(_DWORD *)(v4 + 4) & 0x100) == 0
       || v3[19] == *(_DWORD *)(v4 + 88) && v3[20] == *(_DWORD *)(v4 + 92) && v3[24] == v8) )
    {
      return 1;
    }
  }
  return result;
}
