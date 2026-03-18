/*
 * XREFs of RIMDirectStopDeviceClassNotifications @ 0x1C0070CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
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
    0x69u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
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
        v7 = IoUnregisterPlugPlayNotification(*v4);
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
    0x6Au,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v2);
  return (unsigned int)v2;
}
