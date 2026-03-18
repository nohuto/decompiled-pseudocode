/*
 * XREFs of RIMRemoveInputOfType @ 0x1C007D9C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMRemoveDevOfInputType @ 0x1C000A524 (RIMRemoveDevOfInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C00106C0 (RimInputTypeToDeviceType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C007DD70 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 */

__int64 __fastcall RIMRemoveInputOfType(void *a1, int a2)
{
  int v2; // edi
  int v4; // esi
  _DWORD *v5; // rbx
  int v6; // edx
  unsigned int v7; // eax
  int v9; // r9d
  int v10; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    20,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) )
    {
      v4 = -1073741637;
      v9 = 23;
    }
    else if ( v2 && ((v2 - 1) & v2) == 0 || (v2 & 0x1C) != 0 )
    {
      if ( (v2 & v5[19]) != 0 )
      {
        RIMRemoveDevOfInputType((__int64)v5, v2);
        v7 = RimInputTypeToDeviceType(v2);
        v4 = RIMUnRegisterForInputDeviceTypeClassNotifications(v5, v7);
        v5[19] &= ~v2;
LABEL_9:
        RIMUnlockExclusive((__int64)(v5 + 24));
        ObfDereferenceObject(v5);
        goto LABEL_10;
      }
      v4 = -1073741637;
      v9 = 21;
    }
    else
    {
      v4 = -1073741811;
      v9 = 22;
    }
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      3,
      v9,
      (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    goto LABEL_9;
  }
LABEL_10:
  v10 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x18u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v10);
  return (unsigned int)v4;
}
