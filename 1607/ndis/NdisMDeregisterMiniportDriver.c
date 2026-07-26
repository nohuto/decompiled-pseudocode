/*
 * XREFs of NdisMDeregisterMiniportDriver @ 0x1C009E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C00132F4 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisDereferenceDriver @ 0x1C001331C (ndisDereferenceDriver.c)
 *     ndisCloseRef @ 0x1C001AF28 (ndisCloseRef.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __stdcall NdisMDeregisterMiniportDriver(NDIS_HANDLE NdisMiniportDriverHandle)
{
  const void *v2; // r8
  __int64 v3; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x64u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)NdisMiniportDriverHandle);
  v2 = (const void *)*((_QWORD *)NdisMiniportDriverHandle + 2);
  if ( v2 )
    DbgPrint(
      "NdisMDeregisterMiniportDriver: Deregistering miniport driver %p with active miniports %p\n",
      NdisMiniportDriverHandle,
      v2);
  v3 = *((_QWORD *)NdisMiniportDriverHandle + 9);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 448) = 0LL;
    *((_QWORD *)NdisMiniportDriverHandle + 9) = 0LL;
  }
  if ( ndisCloseRef((PKSPIN_LOCK)NdisMiniportDriverHandle + 49) )
  {
    ndisDereferenceDriver((__int64)NdisMiniportDriverHandle, 0);
    if ( (*((_BYTE *)NdisMiniportDriverHandle + 26) & 0x40) != 0 )
    {
      KeWaitForSingleObject((char *)NdisMiniportDriverHandle + 368, Executive, 0, 0, 0LL);
      KeClearEvent((PRKEVENT)((char *)NdisMiniportDriverHandle + 368));
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x65u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)NdisMiniportDriverHandle);
    _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'((_NDIS_M_DRIVER_BLOCK *)NdisMiniportDriverHandle);
  }
}
