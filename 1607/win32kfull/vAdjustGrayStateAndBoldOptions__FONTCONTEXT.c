/*
 * XREFs of vAdjustGrayStateAndBoldOptions__FONTCONTEXT @ 0x1C001A604
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0019FE0 (bComputeMaxGlyph.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustGrayStateAndBoldOptions__FONTCONTEXT(__int64 a1)
{
  int v1; // r8d
  BOOL v3; // r9d
  int v4; // ecx
  int v5; // eax
  int v6; // r8d

  v1 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 120) = 5;
  v3 = 0;
  v4 = 1;
  if ( (v1 & 0x2000) != 0 )
    v3 = (*(_BYTE *)(a1 + 116) & 3) != 0;
  if ( *(_DWORD *)(a1 + 84) || *(_DWORD *)(a1 + 92) || *(int *)(a1 + 80) <= 0 || *(int *)(a1 + 96) <= 0 )
    v4 = 0;
  if ( *(int *)(a1 + 124) > 50 )
    v4 = 0;
  if ( v3 && v4 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 300LL) & 0x100) != 0 )
    {
      if ( (v1 & 0x2000000) != 0 )
      {
        *(_DWORD *)(a1 + 120) = 7;
        *(_DWORD *)(a1 + 40) = v1 | 0x10000;
      }
      v5 = *(_DWORD *)(a1 + 40);
      if ( (v5 & 0x20000) != 0 )
      {
        *(_DWORD *)(a1 + 120) |= 2u;
        *(_DWORD *)(a1 + 40) = v5 & 0xFFFCFFFF | 0x10000;
      }
      *(_DWORD *)(*(_QWORD *)a1 + 12LL) = *(_DWORD *)(a1 + 40);
    }
    v6 = *(_DWORD *)(a1 + 120);
    if ( (v6 & 4) != 0
      && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 300LL) & 0x100) != 0
      && (*(_DWORD *)(a1 + 40) & 0x10000000) != 0 )
    {
      *(_DWORD *)(a1 + 120) = v6 | 8;
    }
  }
}
