/*
 * XREFs of DeviceStop @ 0x1C00143F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001248 (WPP_RECORDER_SF_qd.c)
 *     TemplateEventDescriptor @ 0x1C0001740 (TemplateEventDescriptor.c)
 *     Template_q @ 0x1C0001808 (Template_q.c)
 *     ExitIrpThreadAndQueue @ 0x1C000262C (ExitIrpThreadAndQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall DeviceStop(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  NTSTATUS result; // eax
  int v9; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xFu,
    (__int64)&WPP_c117b28f45d3381e0eec9d71ce4849c7_Traceguids,
    a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    TemplateEventDescriptor(v5, &EXBUS_DEVICE_STOP_ENTER);
  if ( !*(_BYTE *)(v1 + 64) )
  {
    *(_BYTE *)(v1 + 64) = 1;
    ExitIrpThreadAndQueue(v1);
  }
  if ( !*(_BYTE *)(v1 + 67) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 16))(a1);
    v3 = v7;
    if ( v7 < 0 )
    {
      v9 = v7;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x10u,
        (__int64)&WPP_c117b28f45d3381e0eec9d71ce4849c7_Traceguids,
        a1,
        v9);
    }
  }
  result = (NTSTATUS)WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    return Template_q(v5, v4, v6, v3);
  return result;
}
