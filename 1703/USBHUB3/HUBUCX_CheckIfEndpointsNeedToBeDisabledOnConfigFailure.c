/*
 * XREFs of HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure @ 0x1C002169C
 * Callers:
 *     HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach @ 0x1C001DCC0 (HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach.c)
 * Callees:
 *     memmove @ 0x1C0038200 (memmove.c)
 */

__int64 __fastcall HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 i; // rax
  unsigned int j; // ecx
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 112) )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( v2 )
    {
      v3 = v2 + 16;
      for ( i = *(_QWORD *)(v2 + 16); ; i = *(_QWORD *)(v7 + 8) )
      {
        v7 = i - 8;
        if ( v3 == v7 + 8 )
          break;
        for ( j = 0; j < *(_DWORD *)(v7 + 24); ++j )
        {
          v6 = (unsigned __int64)j << 6;
          if ( *(_DWORD *)(v6 + v7 + 48) == 3 )
            *(_DWORD *)(v6 + v7 + 48) = 6;
        }
      }
      memmove(
        (void *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(a1 + 144)),
        *(const void **)(a1 + 104),
        8LL * *(unsigned int *)(a1 + 112));
      *(_DWORD *)(a1 + 144) += *(_DWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 112) = 0;
    }
  }
  result = 4089LL;
  if ( !*(_DWORD *)(a1 + 128) )
    return 4061LL;
  return result;
}
