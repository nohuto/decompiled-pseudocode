/*
 * XREFs of RIMRemoveInputOfType @ 0x1C0071410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RimInputTypeToDeviceType @ 0x1C00713F0 (RimInputTypeToDeviceType.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0071CD8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMRemoveDevOfInputType @ 0x1C0075344 (RIMRemoveDevOfInputType.c)
 */

__int64 __fastcall RIMRemoveInputOfType(void *a1, unsigned int a2)
{
  int v4; // esi
  PVOID v5; // rbx
  unsigned __int16 v7; // r9
  int v8; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x14u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) )
    {
      v4 = -1073741637;
      v7 = 23;
    }
    else if ( a2 && ((a2 - 1) & a2) == 0 || (a2 & 0x1C) != 0 )
    {
      if ( (a2 & *((_DWORD *)v5 + 19)) != 0 )
      {
        RIMRemoveDevOfInputType(v5, a2);
        RimInputTypeToDeviceType(a2);
        v4 = RIMUnRegisterForInputDeviceTypeClassNotifications(v5);
        *((_DWORD *)v5 + 19) &= ~a2;
LABEL_9:
        RIMUnlockExclusive((__int64)v5 + 96);
        ObfDereferenceObject(v5);
        goto LABEL_10;
      }
      v4 = -1073741637;
      v7 = 21;
    }
    else
    {
      v4 = -1073741811;
      v7 = 22;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v7,
      (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    goto LABEL_9;
  }
LABEL_10:
  v8 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x18u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v8);
  return (unsigned int)v4;
}
