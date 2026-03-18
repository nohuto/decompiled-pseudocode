/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1C00C27D0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(void *a1, void *a2, _OWORD *a3)
{
  int v6; // ebx
  _BYTE *v7; // rsi
  PVOID v8; // r14
  char *v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v14; // [rsp+78h] [rbp+20h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x7Bu,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v14);
  if ( v6 >= 0 )
  {
    v7 = v14;
    RIMLockExclusive((__int64)v14 + 96);
    if ( v7[73] )
    {
      v6 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x7Du,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
      if ( v6 >= 0 )
      {
        v8 = Object;
        if ( Object )
          v9 = (char *)Object + 64;
        else
          v9 = 0LL;
        if ( *((_DWORD *)v9 + 77) )
        {
          v10 = *((_QWORD *)v9 + 52);
          if ( *(_DWORD *)(v10 + 24) == 8 )
            v11 = *(_OWORD *)(v10 + 204);
          else
            v11 = *(_OWORD *)(v10 + 140);
          if ( a3 >= W32UserProbeAddress )
            a3 = W32UserProbeAddress;
          *a3 = v11;
        }
        else
        {
          v6 = -1073741637;
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x7Cu,
            (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
        }
        ObfDereferenceObject(v8);
      }
    }
    RIMUnlockExclusive((__int64)(v7 + 96));
    ObfDereferenceObject(v7);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x7Eu,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v6);
  return (unsigned int)v6;
}
