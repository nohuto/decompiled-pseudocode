/*
 * XREFs of RaUnitCheckRemoveStateForDisabled @ 0x1C0031CD0
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0003080 (RaUnitScsiIrp.c)
 *     RaUnitCheckRemoveState @ 0x1C000483C (RaUnitCheckRemoveState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitCheckRemoveStateForDisabled(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rcx
  int v3; // eax
  int v4; // r8d
  __int64 v5; // r9
  char v6; // dl
  bool v8; // zf

  if ( !a2 )
    return 3221225558LL;
  v2 = *(unsigned __int8 **)(a2 + 184);
  v3 = *v2;
  v4 = v2[1];
  if ( v3 == 15 )
  {
    v5 = *((_QWORD *)v2 + 1);
    v6 = *(_BYTE *)(v5 + 2);
    if ( v6 == 40 )
      v6 = *(_BYTE *)(v5 + 20);
    if ( v4 == 240 || v6 == 1 )
      return 0LL;
  }
  switch ( v3 )
  {
    case 27:
      return 0LL;
    case 14:
      v8 = *((_DWORD *)v2 + 6) == 266264;
      break;
    case 22:
      v8 = v4 == 2;
      break;
    default:
      return 3221225558LL;
  }
  if ( v8 )
    return 0LL;
  return 3221225558LL;
}
