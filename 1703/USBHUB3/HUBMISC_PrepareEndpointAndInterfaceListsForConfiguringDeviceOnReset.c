/*
 * XREFs of HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset @ 0x1C00281A4
 * Callers:
 *     HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset @ 0x1C0018EF0 (HUBDSM_PreparingEndpointAndInterfaceListsOnClientReset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnReset(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r11
  __int64 v3; // r8
  __int64 v4; // rbx
  unsigned int i; // r10d
  unsigned __int64 v6; // rdx
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  v2 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(v1 + 16) - 8LL;
  v4 = *(_QWORD *)(a1 + 136);
  if ( v1 != *(_QWORD *)(v1 + 16) - 16LL )
  {
    do
    {
      if ( (*(_DWORD *)(v3 + 28) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v3 + 28), 2u);
      for ( i = 0; i < *(_DWORD *)(v3 + 24); ++i )
      {
        v6 = (unsigned __int64)i << 6;
        v7 = *(_QWORD *)(v6 + v3 + 40);
        if ( (*(_DWORD *)(v6 + v3 + 52) & 1) != 0 )
        {
          *(_DWORD *)(v6 + v3 + 48) = 6;
          *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v7;
        }
        else
        {
          *(_DWORD *)(v6 + v3 + 48) = 3;
          *(_QWORD *)(v2 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 112))++) = v7;
        }
      }
      v3 = *(_QWORD *)(v3 + 8) - 8LL;
    }
    while ( *(_QWORD *)(a1 + 48) != v3 - 8 );
  }
  return 4077LL;
}
