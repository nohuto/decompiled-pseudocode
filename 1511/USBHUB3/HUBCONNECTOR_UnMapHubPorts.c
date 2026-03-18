/*
 * XREFs of HUBCONNECTOR_UnMapHubPorts @ 0x1C0069838
 * Callers:
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C00635C0 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x1C0069708 (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     HUBCONNECTOR_DeRegisterPort @ 0x1C0068F2C (HUBCONNECTOR_DeRegisterPort.c)
 */

void __fastcall HUBCONNECTOR_UnMapHubPorts(_WORD *a1)
{
  unsigned __int16 v1; // di
  __int64 *v3; // rsi
  __int64 i; // rcx
  __int64 v5; // rcx
  unsigned __int16 v6; // di
  __int64 *v7; // rsi
  __int64 j; // rcx
  __int64 v9; // rcx

  v1 = a1[69];
  if ( v1 <= a1[70] )
  {
    v3 = (__int64 *)(a1 + 1152);
    do
    {
      for ( i = *v3; ; i = *(_QWORD *)(v5 + 248) )
      {
        v5 = i - 248;
        if ( v3 == (__int64 *)(v5 + 248) )
          break;
        if ( *(_WORD *)(v5 + 200) == v1 )
        {
          if ( v5 )
            HUBCONNECTOR_DeRegisterPort(v5);
          break;
        }
      }
      ++v1;
    }
    while ( v1 <= a1[70] );
  }
  v6 = a1[72];
  if ( v6 <= a1[73] )
  {
    v7 = (__int64 *)(a1 + 1152);
    do
    {
      for ( j = *v7; ; j = *(_QWORD *)(v9 + 248) )
      {
        v9 = j - 248;
        if ( v7 == (__int64 *)(v9 + 248) )
          break;
        if ( *(_WORD *)(v9 + 200) == v6 )
        {
          if ( v9 )
            HUBCONNECTOR_DeRegisterPort(v9);
          break;
        }
      }
      ++v6;
    }
    while ( v6 <= a1[73] );
  }
}
