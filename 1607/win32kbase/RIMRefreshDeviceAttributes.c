/*
 * XREFs of RIMRefreshDeviceAttributes @ 0x1C0088A20
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMQueryDev @ 0x1C00808C0 (RIMQueryDev.c)
 */

__int64 __fastcall RIMRefreshDeviceAttributes(void *a1, void *a2)
{
  void *v2; // rbp
  int v4; // eax
  char *v5; // rbx
  int v6; // edi
  _BYTE *v7; // rsi
  int v8; // edx
  PVOID v9; // rbp
  int v11; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    100,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v5 = 0LL;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 96);
    RIMLockExclusive((__int64)(v7 + 696));
    if ( v7[73] || v7[74] )
    {
      v6 = -1073741637;
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        3,
        101,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
      if ( v6 >= 0 )
      {
        v9 = Object;
        if ( Object )
          v5 = (char *)Object + 64;
        if ( v5[48] == 2 )
          v6 = -1073741811;
        else
          v6 = RIMQueryDev((__int64)v7, (__int64)v5);
        ObfDereferenceObject(v9);
      }
    }
    RIMUnlockExclusive((__int64)(v7 + 696));
    RIMUnlockExclusive((__int64)(v7 + 96));
    ObfDereferenceObject(v7);
  }
  v11 = v6;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x66u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v11);
  return (unsigned int)v6;
}
