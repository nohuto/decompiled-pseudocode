/*
 * XREFs of rimOnPnpRemoveComplete @ 0x1C000EA9C
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x1C000A524 (RIMRemoveDevOfInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C000C538 (RIMDoOnPnpNotification.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C007F190 (RIMDirectPnpRemoveDevicesOfType.c)
 *     rimFakePnpRemoveComplete @ 0x1C00DB150 (rimFakePnpRemoveComplete.c)
 * Callees:
 *     RIMCloseDev @ 0x1C000C778 (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000CCA4 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimOnPnpRemoveComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdx
  void *v6; // rcx
  unsigned int v7; // edi
  NTSTATUS v9; // eax
  int v10; // eax
  void *v11; // rcx
  unsigned int v12; // [rsp+38h] [rbp-10h]

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    24,
    (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids);
  *(_DWORD *)(v2 + 184) &= ~8u;
  v4 = RIMCloseDev(v2);
  v6 = *(void **)(v2 + 248);
  v7 = v4;
  if ( v6 )
  {
    v9 = IoUnregisterPlugPlayNotification(v6);
    *(_QWORD *)(v2 + 248) = 0LL;
    v7 = v9;
    v10 = *(_DWORD *)(v2 + 184);
    *(_DWORD *)(v2 + 348) &= ~1u;
    v11 = *(void **)(v2 + 32);
    *(_DWORD *)(v2 + 184) = v10 & 0xFFFFFEBF | 0x100;
    ObfDereferenceObject(v11);
  }
  v12 = v7;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    4u,
    0x19u,
    (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
    a1,
    v2,
    v12);
  return v7;
}
