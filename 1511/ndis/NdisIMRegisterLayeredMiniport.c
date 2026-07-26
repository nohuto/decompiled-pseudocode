/*
 * XREFs of NdisIMRegisterLayeredMiniport @ 0x1C00CC5E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisRegisterMiniportDriver @ 0x1C00EE988 (ndisRegisterMiniportDriver.c)
 */

NDIS_STATUS __stdcall NdisIMRegisterLayeredMiniport(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
        UINT CharacteristicsLength,
        PNDIS_HANDLE DriverHandle)
{
  int v8; // ebx
  char *v9; // rcx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCu, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)NdisWrapperHandle);
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
  if ( *(_BYTE *)MiniportCharacteristics < 6u )
  {
    v8 = ndisRegisterMiniportDriver(NdisWrapperHandle, MiniportCharacteristics, CharacteristicsLength, DriverHandle);
    if ( !v8 )
    {
      v9 = (char *)*DriverHandle;
      *((_WORD *)v9 + 13) |= 1u;
      KeInitializeMutex((PRKMUTEX)(v9 + 416), 0xFFFFu);
    }
  }
  else
  {
    v8 = -1073676284;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xDu, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)*DriverHandle, v8);
  return v8;
}
