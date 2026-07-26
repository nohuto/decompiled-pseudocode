/*
 * XREFs of ndisWnfPdcCallback @ 0x1C004A9B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     TemplateEventDescriptor @ 0x1C0049508 (TemplateEventDescriptor.c)
 *     Template_x @ 0x1C004979C (Template_x.c)
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0069F50 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

__int64 __fastcall ndisWnfPdcCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 v4; // bl
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rax
  KIRQL v8; // al
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KIRQL v10; // di
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  int v14; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-28h] BYREF

  v14 = a4;
  memset(v16, 0, 20);
  v15 = 20;
  v4 = 0;
  v5 = ((__int64 (__fastcall *)(__int64, int *, _QWORD *, int *))ExQueryWnfStateData)(a1, &v14, v16, &v15);
  if ( v5 >= 0 )
  {
    v7 = v16[0] - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
    if ( v16[0] == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
      v7 = v16[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
    if ( !v7 )
    {
      v4 = 1;
      ndisLastCsScenarioInstanceId = v16[2];
    }
    if ( ndisConnectedStandby != v4 )
    {
      ndisConnectedStandby = v4;
      if ( v4 )
      {
        ndisLastCsEntryTime = MEMORY[0xFFFFF78000000008];
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
          TemplateEventDescriptor();
      }
      else if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      {
        Template_x(
          MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime,
          (MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime) / 0x989680,
          v6,
          (MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime) / 0x989680);
      }
      v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      v9 = ndisMiniportList;
      v10 = v8;
      while ( v9 )
      {
        if ( v9->AoAc && ndisReferenceMiniport((__int64)v9, 7u) )
        {
          KeReleaseSpinLock(&ndisMiniportListLock, v10);
          if ( v9->AoAc )
            ndisCsStateChange(v9, v11, v12);
          v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
          ndisDereferenceMiniport((__int64)v9, 7u);
        }
        v9 = v9->NextGlobalMiniport;
      }
      KeReleaseSpinLock(&ndisMiniportListLock, v10);
    }
  }
  else if ( (unsigned __int8)byte_1C0085314 >= 2u )
  {
    WPP_SF_d(0x68u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, v5);
  }
  return 0LL;
}
