/*
 * XREFs of RIMRemoveInputOfType @ 0x1C007D4D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C000A70C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMRemoveDevOfInputType @ 0x1C000BCF8 (RIMRemoveDevOfInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RimInputTypeToDeviceType @ 0x1C007D5E0 (RimInputTypeToDeviceType.c)
 */

__int64 __fastcall RIMRemoveInputOfType(void *a1, unsigned int a2)
{
  int v4; // esi
  _DWORD *v5; // rbx
  unsigned int v6; // eax
  unsigned __int16 v8; // r9
  int v9; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x14u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) )
    {
      v4 = -1073741637;
      v8 = 23;
    }
    else if ( a2 && ((a2 - 1) & a2) == 0 || (a2 & 0x1C) != 0 )
    {
      if ( (a2 & v5[19]) != 0 )
      {
        RIMRemoveDevOfInputType((__int64)v5, a2);
        v6 = RimInputTypeToDeviceType(a2);
        v4 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v5, v6);
        v5[19] &= ~a2;
LABEL_9:
        RIMUnlockExclusive((__int64)(v5 + 24));
        ObfDereferenceObject(v5);
        goto LABEL_10;
      }
      v4 = -1073741637;
      v8 = 21;
    }
    else
    {
      v4 = -1073741811;
      v8 = 22;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v8,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    goto LABEL_9;
  }
LABEL_10:
  v9 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x18u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v9);
  return (unsigned int)v4;
}
