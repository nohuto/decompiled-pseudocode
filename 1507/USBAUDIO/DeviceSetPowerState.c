/*
 * XREFs of DeviceSetPowerState @ 0x1C0014650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qdd @ 0x1C000139C (WPP_RECORDER_SF_qdd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00072E0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall DeviceSetPowerState(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  int v7; // esi
  __int64 v8; // rdi
  unsigned int v10; // [rsp+30h] [rbp-18h]
  unsigned int v11; // [rsp+38h] [rbp-10h]

  v7 = 0;
  v11 = a3 - 1;
  v10 = a4 - 1;
  WPP_RECORDER_SF_qdd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x13u,
    (__int64)&WPP_67bd095a70f836f2f34e78037ce373b5_Traceguids,
    a1,
    v10,
    v11);
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v8 + 512) != a3 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(pExtBusDeviceDispatchTable + 40))(a1, a3, a4);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(v8 + 512) = a3;
      if ( a3 != 1 )
        KeResetEvent((PRKEVENT)(v8 + 528));
    }
  }
  return WmiLogPowerStateChange(*(_DWORD *)(v8 + 512), a4, a3, v7);
}
