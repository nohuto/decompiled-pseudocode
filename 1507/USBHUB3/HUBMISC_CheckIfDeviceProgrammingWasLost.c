/*
 * XREFs of HUBMISC_CheckIfDeviceProgrammingWasLost @ 0x1C00250C8
 * Callers:
 *     HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum @ 0x1C00177E0 (HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_CheckIfDeviceProgrammingWasLost(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 i; // rcx
  unsigned int j; // edx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx

  if ( (*(_DWORD *)(a1 + 1620) & 0x20) != 0 )
  {
    v1 = 4089;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFFFDF);
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      _InterlockedOr((volatile signed __int32 *)(v2 + 32), 0x80u);
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
    {
      v4 = v3 + 16;
      for ( i = *(_QWORD *)(v3 + 16); ; i = *(_QWORD *)(v8 + 8) )
      {
        v8 = i - 8;
        if ( v4 == v8 + 8 )
          break;
        for ( j = 0; j < *(_DWORD *)(v8 + 24); ++j )
        {
          v7 = (unsigned __int64)j << 6;
          if ( *(_DWORD *)(v7 + v8 + 48) == 4 )
            *(_DWORD *)(v7 + v8 + 48) = 6;
        }
      }
    }
  }
  else
  {
    return 4061;
  }
  return v1;
}
