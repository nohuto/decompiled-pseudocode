/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1C006FF80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00766E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMQueryDev @ 0x1C00828A4 (RIMQueryDev.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(void *a1, __int64 a2)
{
  int v4; // eax
  char *v5; // rbx
  int v6; // edi
  _BYTE *v7; // rsi
  __int64 v8; // r8
  PVOID v9; // rbp
  int v11; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x60u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v5 = 0LL;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 96);
    RIMLockExclusive((__int64)(v7 + 712));
    if ( v7[73] || v7[74] )
    {
      v6 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x61u,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      LOBYTE(v8) = 1;
      v6 = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, v8, &Object);
      if ( v6 >= 0 )
      {
        v9 = Object;
        if ( Object )
          v5 = (char *)Object + 64;
        if ( v5[48] == 2 )
          v6 = -1073741811;
        else
          v6 = RIMQueryDev(v7, v5);
        ObfDereferenceObject(v9);
      }
    }
    RIMUnlockExclusive((__int64)(v7 + 712));
    RIMUnlockExclusive((__int64)(v7 + 96));
    ObfDereferenceObject(v7);
  }
  v11 = v6;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x62u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v11);
  return (unsigned int)v6;
}
