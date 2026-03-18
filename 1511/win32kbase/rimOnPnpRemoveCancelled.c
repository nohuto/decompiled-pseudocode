/*
 * XREFs of rimOnPnpRemoveCancelled @ 0x1C00CAD70
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00108E0 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C00104CC (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimOnPnpRemoveCancelled(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  void *v6; // rcx
  NTSTATUS v7; // eax
  void *v8; // rcx
  unsigned int v10; // [rsp+38h] [rbp-10h]

  v4 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x18u,
    (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids);
  v6 = *(void **)(a2 + 240);
  *(_DWORD *)(a2 + 176) &= ~4u;
  if ( v6 )
  {
    v7 = IoUnregisterPlugPlayNotification(v6);
    v8 = *(void **)(a2 + 32);
    v4 = v7;
    *(_QWORD *)(a2 + 240) = 0LL;
    ObfDereferenceObject(v8);
  }
  v10 = v4;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    4u,
    0x19u,
    (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
    a1,
    a2,
    v10);
  return v4;
}
