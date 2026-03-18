/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C0010044
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C000BCF8 (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C00108E0 (RIMDoOnPnpNotification.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C007B4C0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     rimFakePnpRemoveComplete @ 0x1C00CAB44 (rimFakePnpRemoveComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C00104CC (WPP_RECORDER_SF_qqD.c)
 *     RIMCloseDev @ 0x1C00106D8 (RIMCloseDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(char a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // eax
  int v5; // edx
  void *v6; // rcx
  unsigned int v7; // edi
  NTSTATUS v9; // eax
  int v10; // eax
  void *v11; // rcx

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    20,
    (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids);
  *(_DWORD *)(v2 + 176) &= ~8u;
  v4 = RIMCloseDev(v2);
  v6 = *(void **)(v2 + 240);
  v7 = v4;
  if ( v6 )
  {
    v9 = IoUnregisterPlugPlayNotification(v6);
    *(_QWORD *)(v2 + 240) = 0LL;
    v7 = v9;
    v10 = *(_DWORD *)(v2 + 176);
    *(_DWORD *)(v2 + 332) &= ~1u;
    v11 = *(void **)(v2 + 32);
    *(_DWORD *)(v2 + 176) = v10 & 0xFFFFFEBF | 0x100;
    ObfDereferenceObject(v11);
  }
  WPP_RECORDER_SF_qqD(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    4,
    21,
    (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
    a1,
    v2,
    v7);
  return v7;
}
