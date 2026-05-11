/*
 * XREFs of DeviceStart @ 0x1C0014250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001278 (WPP_RECORDER_SF_qd.c)
 *     TemplateEventDescriptor @ 0x1C0001750 (TemplateEventDescriptor.c)
 *     Template_zq @ 0x1C0001774 (Template_zq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 *     FilterCreateFilterFactory @ 0x1C0014E60 (FilterCreateFilterFactory.c)
 *     RegistryGetIdleInfo @ 0x1C001B194 (RegistryGetIdleInfo.c)
 *     InitializeIrpThreadAndQueue @ 0x1C001B800 (InitializeIrpThreadAndQueue.c)
 */

__int64 __fastcall DeviceStart(__int64 a1)
{
  __int64 v1; // rdi
  int FilterFactory; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v13[5]; // [rsp+44h] [rbp-14h] BYREF
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  FilterFactory = 0;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xCu,
    (__int64)&WPP_67bd095a70f836f2f34e78037ce373b5_Traceguids,
    a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    TemplateEventDescriptor(v5, &EXBUS_DEVICE_START_ENTER);
  if ( !*(_BYTE *)(a1 + 48) )
  {
    *(_DWORD *)(v1 + 512) = 1;
    *(_BYTE *)(v1 + 64) = 0;
    FilterFactory = (*(__int64 (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 8))(a1);
    if ( FilterFactory < 0 )
      goto LABEL_10;
    FilterFactory = FilterCreateFilterFactory(a1);
    if ( FilterFactory < 0 )
      goto LABEL_10;
    if ( (int)RegistryGetIdleInfo(*(_QWORD *)(a1 + 32), &v14, &v12, v13) >= 0 )
    {
      *(_DWORD *)(v1 + 520) = v14;
      *(_DWORD *)(v1 + 524) = v12;
      *(_DWORD *)(v1 + 516) = v13[0];
    }
    *(_QWORD *)(v1 + 504) = PoRegisterDeviceForIdleDetection(
                              *(PDEVICE_OBJECT *)(a1 + 32),
                              *(_DWORD *)(v1 + 520),
                              *(_DWORD *)(v1 + 524),
                              (DEVICE_POWER_STATE)*(_DWORD *)(v1 + 516));
    v8 = InitializeIrpThreadAndQueue(v7, v1);
    FilterFactory = v8;
    if ( v8 < 0 )
    {
      v11 = v8;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xDu,
        (__int64)&WPP_67bd095a70f836f2f34e78037ce373b5_Traceguids,
        a1,
        v11);
LABEL_10:
      *(_BYTE *)(v1 + 64) = 1;
      LODWORD(v10) = FilterFactory;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xEu,
        (__int64)&WPP_67bd095a70f836f2f34e78037ce373b5_Traceguids,
        a1,
        v10);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    Template_zq(v5, v4, v6, *(const wchar_t **)(v1 + 24), FilterFactory);
  return (unsigned int)FilterFactory;
}
