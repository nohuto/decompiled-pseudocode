/*
 * XREFs of NdisOpenConfiguration @ 0x1C009E460
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C009E2C0 (NdisOpenConfigurationEx.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00D1140 (ndisNDKHandleWmiChangeRequest.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __stdcall NdisOpenConfiguration(
        PNDIS_STATUS Status,
        PNDIS_HANDLE ConfigurationHandle,
        NDIS_HANDLE WrapperConfigurationContext)
{
  HANDLE *PoolWithTag; // rax
  HANDLE *v7; // rbx
  PDEVICE_OBJECT *v8; // rcx

  if ( (unsigned __int8)byte_1C008370F >= 4u )
    WPP_SF_q(0xAu, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, (__int64)WrapperConfigurationContext);
  PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6863444Eu);
  v7 = PoolWithTag;
  *Status = PoolWithTag == 0LL ? 0xC000009A : 0;
  if ( (PoolWithTag == 0LL ? 0xC000009A : 0) == 0 )
  {
    *(_DWORD *)PoolWithTag = 2621707;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[2] = WrapperConfigurationContext;
    if ( *(_BYTE *)WrapperConfigurationContext == 10 )
    {
      v8 = (PDEVICE_OBJECT *)*((_QWORD *)WrapperConfigurationContext + 1);
      PoolWithTag[1] = v8;
      if ( v8 )
        *Status = IoOpenDeviceRegistryKey(v8[486], 2u, 0xC2000000, PoolWithTag + 4);
    }
    else if ( (unsigned __int8)byte_1C008370F >= 2u )
    {
      WPP_SF_q(0xBu, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, (__int64)WrapperConfigurationContext);
    }
    if ( *Status < 0 )
      ExFreePoolWithTag(v7, 0);
    else
      *ConfigurationHandle = v7;
  }
  if ( (unsigned __int8)byte_1C008370F >= 4u )
    WPP_SF_q(0xCu, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, (__int64)WrapperConfigurationContext);
}
