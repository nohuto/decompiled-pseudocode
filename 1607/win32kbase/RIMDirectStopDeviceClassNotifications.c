/*
 * XREFs of RIMDirectStopDeviceClassNotifications @ 0x1C007F450
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C007DD70 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 */

__int64 __fastcall RIMDirectStopDeviceClassNotifications(void *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  PVOID v5; // rdi
  unsigned int v6; // eax
  unsigned int v8; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    4,
    109,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  v3 = 0;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    do
    {
      v6 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v5, v3++);
      v4 = v6;
    }
    while ( v3 <= 2 );
    RIMUnlockExclusive((__int64)v5 + 96);
    ObfDereferenceObject(v5);
  }
  v8 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x6Eu,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v8);
  return v4;
}
