/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset @ 0x1C0025000
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset @ 0x1C0016AA0 (HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  unsigned int i; // r10d
  unsigned __int64 v6; // r9
  __int64 v7; // rax

  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  v1 = *(_QWORD *)(a1 + 104);
  v2 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  v3 = *(_QWORD *)(a1 + 136);
  v4 = *v2 - 8LL;
  while ( v2 != (_QWORD *)(v4 + 8) )
  {
    if ( (*(_DWORD *)(v4 + 28) & 1) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v4 + 28), 2u);
    for ( i = 0; i < *(_DWORD *)(v4 + 24); ++i )
    {
      v6 = (unsigned __int64)i << 6;
      v7 = *(_QWORD *)(v6 + v4 + 40);
      if ( (*(_DWORD *)(v6 + v4 + 52) & 1) != 0 )
      {
        *(_DWORD *)(v6 + v4 + 48) = 6;
        *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v7;
      }
      else
      {
        *(_DWORD *)(v6 + v4 + 48) = 3;
        *(_QWORD *)(v1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 112))++) = v7;
      }
    }
    v4 = *(_QWORD *)(v4 + 8) - 8LL;
    v2 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  }
  return 4077LL;
}
