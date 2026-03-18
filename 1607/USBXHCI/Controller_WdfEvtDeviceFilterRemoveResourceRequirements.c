/*
 * XREFs of Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C004BE50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00083DC (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Interrupter_IoResList_GetMessageCountAndType @ 0x1C004C130 (Interrupter_IoResList_GetMessageCountAndType.c)
 *     Interrupter_FilterMessageDescriptors @ 0x1C004C5B0 (Interrupter_FilterMessageDescriptors.c)
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C00538FC (Interrupter_DetermineSecondaryInterrupterCount.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C005398C (Interrupter_FilterAllMSIResources.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceFilterRemoveResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // ebx
  _DWORD v8[6]; // [rsp+40h] [rbp-18h] BYREF
  char v9; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0043318)
                 + 8);
  WPP_RECORDER_SF_qq(
    *(_QWORD *)(v4 + 64),
    4u,
    3u,
    0xC7u,
    (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids,
    a1,
    a2);
  v5 = *(_QWORD *)(v4 + 96);
  if ( (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 232LL) & 0x200LL) != 0 )
  {
    *(_DWORD *)(v5 + 20) = 0;
    return (unsigned int)Interrupter_FilterAllMSIResources(v5, a2);
  }
  else
  {
    Interrupter_IoResList_GetMessageCountAndType(a2, v8, &v10, &v9);
    v6 = 0;
    if ( v9 )
      Interrupter_DetermineSecondaryInterrupterCount(v5, v10);
    else
      *(_DWORD *)(v5 + 20) = 0;
    Interrupter_FilterMessageDescriptors(v5, a2, v8[0], (unsigned int)(*(_DWORD *)(v5 + 20) + 1));
  }
  return v6;
}
