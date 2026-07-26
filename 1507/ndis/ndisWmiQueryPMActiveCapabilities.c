/*
 * XREFs of ndisWmiQueryPMActiveCapabilities @ 0x1C00CC0A4
 * Callers:
 *     ndisQueryGuidData @ 0x1C00A84E8 (ndisQueryGuidData.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisWmiQueryPMActiveCapabilities(__int64 a1, _DWORD *a2)
{
  char v3; // al
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx

  a2[1] = 1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 1044) - 2) <= 2 )
  {
    v3 = *(_BYTE *)(a1 + 1124);
    v4 = 1;
    if ( (v3 & 1) != 0 )
      v4 = 2;
    a2[1] = v4;
  }
  else
  {
    a2[1] = 0;
  }
  a2[2] = 1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 1040) - 2) <= 2 )
  {
    v5 = 1;
    if ( (*(_BYTE *)(a1 + 1124) & 2) != 0 )
      v5 = 2;
    a2[2] = v5;
  }
  else
  {
    a2[2] = 0;
  }
  a2[3] = 1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 1048) - 2) <= 2 )
  {
    v6 = 1;
    if ( (*(_BYTE *)(a1 + 4484) & 8) != 0 )
      v6 = 2;
    a2[3] = v6;
  }
  else
  {
    a2[3] = 0;
  }
  a2[4] = 1;
  if ( (*(_DWORD *)(a1 + 1028) & 1) != 0 )
  {
    v7 = 1;
    if ( (*(_BYTE *)(a1 + 1128) & 1) != 0 )
      v7 = 2;
    a2[4] = v7;
  }
  else
  {
    a2[4] = 0;
  }
  a2[5] = 1;
  if ( (*(_DWORD *)(a1 + 1028) & 2) != 0 )
  {
    v8 = 1;
    if ( (*(_BYTE *)(a1 + 1128) & 2) != 0 )
      v8 = 2;
    a2[5] = v8;
  }
  else
  {
    a2[5] = 0;
  }
  a2[6] = 1;
  v9 = *(_DWORD *)(a1 + 1028);
  if ( (v9 & 0x80u) != 0 )
  {
    v10 = 1;
    LOBYTE(v9) = *(_BYTE *)(a1 + 1128) & 0x80;
    if ( *(char *)(a1 + 1128) < 0 )
      v10 = 2;
    a2[6] = v10;
  }
  else
  {
    a2[6] = 0;
  }
  return v9;
}
