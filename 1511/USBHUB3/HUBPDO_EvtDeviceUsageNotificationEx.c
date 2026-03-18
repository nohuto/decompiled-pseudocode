/*
 * XREFs of HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C00152B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     HUBPDO_AllocateForwardProgressResources @ 0x1C001518C (HUBPDO_AllocateForwardProgressResources.c)
 *     HUBMISC_DbgBreak @ 0x1C0027544 (HUBMISC_DbgBreak.c)
 *     HUBBOOT_RegisterBootDevice @ 0x1C00312A8 (HUBBOOT_RegisterBootDevice.c)
 *     HUBBOOT_IsBootDeviceExternal @ 0x1C0031380 (HUBBOOT_IsBootDeviceExternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_UpdateSqmFlags @ 0x1C006DE18 (HUBREG_UpdateSqmFlags.c)
 *     WMI_RegisterSurpriseRemovalNotificationInstance @ 0x1C0070430 (WMI_RegisterSurpriseRemovalNotificationInstance.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceUsageNotificationEx(__int64 a1, int a2, char a3)
{
  bool v6; // r14
  __int64 v7; // rbx
  unsigned int ForwardProgressResources; // esi
  __int64 v9; // rax
  int v10; // edi
  int v11; // edi
  __int64 v12; // rcx
  char IsBootDeviceExternal; // al
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax

  v6 = RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0057118);
  ForwardProgressResources = 0;
  v9 = *(_QWORD *)(v7 + 24);
  if ( (*(_DWORD *)(v9 + 1624) & 0x10) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v9 + 1624), 0x10u);
    HUBREG_UpdateSqmFlags(*(_QWORD *)(v7 + 24));
  }
  v10 = a2 - 1;
  if ( !v10 )
  {
    IsBootDeviceExternal = HUBBOOT_IsBootDeviceExternal(a1);
    if ( !v6 && IsBootDeviceExternal && (*(_DWORD *)(v7 + 32) & 0x20) == 0 )
      return (unsigned int)-1073741637;
LABEL_6:
    if ( (*(_DWORD *)(v7 + 32) & 0x20) == 0 )
    {
      ForwardProgressResources = HUBPDO_AllocateForwardProgressResources(*(_QWORD **)(v7 + 24));
      if ( (ForwardProgressResources & 0x80000000) == 0 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL);
        if ( (*(_DWORD *)(v12 + 1336) & 1) == 0 )
        {
          ForwardProgressResources = -1073741810;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v12 + 1432),
            2u,
            5u,
            0x78u,
            (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
            -1073741810);
          return ForwardProgressResources;
        }
        if ( !v6 )
        {
          if ( (unsigned __int8)HUBBOOT_IsBootDeviceExternal(a1) )
          {
            v14 = HUBBOOT_RegisterBootDevice(*(_QWORD *)(v7 + 24), *(_QWORD *)(v7 + 24) + 2216LL);
            if ( (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 1616LL) & 2) == 0 )
              WMI_RegisterSurpriseRemovalNotificationInstance(a1);
            if ( v14 < 0 )
            {
              v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C00570E8);
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v15 + 64),
                2u,
                2u,
                0x79u,
                (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
                v14);
              HUBMISC_DbgBreak("ExRegisterBootDevice Failed", v16);
            }
          }
          else
          {
            v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C00570E8);
            WPP_RECORDER_SF_(
              *(_QWORD *)(v17 + 64),
              2u,
              2u,
              0x7Au,
              (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids);
          }
          _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x20u);
          _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1336LL), 2u);
        }
LABEL_24:
        *(_BYTE *)(*(_QWORD *)(v7 + 24) + 1496LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1280LL) = 1;
        return ForwardProgressResources;
      }
    }
    return ForwardProgressResources;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( !a3 )
      return ForwardProgressResources;
    goto LABEL_24;
  }
  if ( v11 == 2 )
    goto LABEL_6;
  return ForwardProgressResources;
}
