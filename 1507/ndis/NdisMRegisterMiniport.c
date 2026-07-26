/*
 * XREFs of NdisMRegisterMiniport @ 0x1C00D3300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisRegisterMiniportDriver @ 0x1C00F4828 (ndisRegisterMiniportDriver.c)
 */

NDIS_STATUS __stdcall NdisMRegisterMiniport(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
        UINT CharacteristicsLength)
{
  __int64 v3; // rdi
  int v7; // ebx
  int v8; // eax
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xAu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)NdisWrapperHandle);
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
  if ( CharacteristicsLength >= 0x70 )
  {
    if ( *(_BYTE *)MiniportCharacteristics < 6u )
    {
      v8 = ndisRegisterMiniportDriver(NdisWrapperHandle, MiniportCharacteristics, CharacteristicsLength, &v10);
      v3 = v10;
      v7 = v8;
    }
    else
    {
      v7 = -1073676284;
    }
  }
  else
  {
    v7 = -1073676283;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xBu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, v3, v7);
  return v7;
}
