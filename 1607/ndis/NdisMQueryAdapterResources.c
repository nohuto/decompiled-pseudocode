/*
 * XREFs of NdisMQueryAdapterResources @ 0x1C00D2540
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

void __stdcall NdisMQueryAdapterResources(
        PNDIS_STATUS Status,
        NDIS_HANDLE WrapperConfigurationContext,
        PNDIS_RESOURCE_LIST ResourceList,
        PUINT BufferSize)
{
  __int64 v4; // rdi
  unsigned __int8 v8; // si
  __int64 v9; // rdx
  unsigned int v10; // ecx

  v4 = *((_QWORD *)WrapperConfigurationContext + 1);
  v8 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x36u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, v4);
    v8 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
  v9 = *(_QWORD *)(v4 + 944);
  if ( v9 )
  {
    v10 = 20 * *(_DWORD *)(v9 + 16) + 8;
    if ( *BufferSize >= v10 )
    {
      memmove(ResourceList, (const void *)(v9 + 12), v10);
      *Status = 0;
    }
    else
    {
      *BufferSize = v10;
      *Status = -1073741670;
    }
  }
  else
  {
    *Status = -1073741823;
  }
  if ( v8 >= 4u )
    WPP_SF_qD(0x37u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, v4, *Status);
}
