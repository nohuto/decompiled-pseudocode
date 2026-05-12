/*
 * XREFs of RaidSrbIsPowerRequired @ 0x1C0026BFC
 * Callers:
 *     RaUnitStartIo @ 0x1C0003C00 (RaUnitStartIo.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidSrbIsPowerRequired(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  LOBYTE(v2) = *(_BYTE *)(a2 + 2);
  if ( (_BYTE)v2 == 40 )
    v2 = *(_DWORD *)(a2 + 20);
  else
    v2 = (unsigned __int8)v2;
  if ( v2 > 0x10 )
    return v2 >= 0x12 && (v2 <= 0x13 || v2 == 23 || v2 == 32 || v2 - 36 <= 1);
  if ( v2 != 16 )
  {
    if ( !v2 )
      return 1;
    v3 = v2 - 2;
    if ( !v3 )
      return 1;
    v4 = v3 - 5;
    if ( !v4 )
      return 1;
    v5 = v4 - 1;
    if ( v5 )
      return v5 == 1;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) )
      return 1;
  }
  return 0;
}
