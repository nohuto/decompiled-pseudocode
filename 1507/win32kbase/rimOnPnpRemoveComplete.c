/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C0076908
 * Callers:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0070BA0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMRemoveDevOfInputType @ 0x1C0075344 (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C0076038 (RIMDoOnPnpNotification.c)
 *     rimFakePnpRemoveComplete @ 0x1C00C9B60 (rimFakePnpRemoveComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0076D6C (WPP_RECORDER_SF_qqD.c)
 *     RIMCloseDev @ 0x1C007707C (RIMCloseDev.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(char a1, __int64 a2)
{
  unsigned int v4; // eax
  int v5; // edx
  void *v6; // rcx
  unsigned int v7; // edi
  NTSTATUS v9; // eax
  int v10; // eax
  void *v11; // rcx

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x12u,
    (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids);
  *(_DWORD *)(a2 + 184) &= ~8u;
  v4 = RIMCloseDev(a2);
  v6 = *(void **)(a2 + 248);
  v7 = v4;
  if ( v6 )
  {
    v9 = IoUnregisterPlugPlayNotification(v6);
    *(_QWORD *)(a2 + 248) = 0LL;
    v7 = v9;
    v10 = *(_DWORD *)(a2 + 184);
    *(_DWORD *)(a2 + 340) &= ~1u;
    v11 = *(void **)(a2 + 32);
    *(_DWORD *)(a2 + 184) = v10 & 0xFFFFFEBF | 0x100;
    ObfDereferenceObject(v11);
  }
  WPP_RECORDER_SF_qqD(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    4,
    19,
    (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
    a1,
    a2,
    v7);
  return v7;
}
