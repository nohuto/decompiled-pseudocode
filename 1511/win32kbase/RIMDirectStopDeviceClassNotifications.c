/*
 * XREFs of RIMDirectStopDeviceClassNotifications @ 0x1C007B9E0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMDirectStopDeviceClassNotifications(void *a1)
{
  int v2; // esi
  PVOID *v3; // rdi
  PVOID *v4; // rbx
  __int64 v5; // rbp
  NTSTATUS v7; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x6Cu,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v2 >= 0 )
  {
    v3 = (PVOID *)Object;
    RIMLockExclusive((__int64)Object + 96);
    v4 = v3 + 45;
    v5 = 3LL;
    do
    {
      if ( *v4 )
      {
        ObfDereferenceObject(v3);
        v7 = IoUnregisterPlugPlayNotificationEx(*v4);
        *v4 = 0LL;
        v2 = v7;
      }
      ++v4;
      --v5;
    }
    while ( v5 );
    RIMUnlockExclusive((__int64)(v3 + 12));
    ObfDereferenceObject(v3);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x6Du,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v2);
  return (unsigned int)v2;
}
