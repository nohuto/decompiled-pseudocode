/*
 * XREFs of RIMOnCheckPointerDeviceMonitors @ 0x1C00C2E30
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMOnCheckPointerDeviceMonitors(void *a1, __int64 a2)
{
  int v4; // edi
  _QWORD *v5; // rbx
  __int64 i; // rdx
  __int64 v7; // rax
  int v9; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x46u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x47u,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 93));
      for ( i = v5[68]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( *(_DWORD *)(i + 308) )
        {
          if ( (*(_DWORD *)(i + 176) & 0x800) == 0 )
          {
            v7 = *(_QWORD *)(i + 416);
            if ( *(_QWORD *)(v7 + 280) == a2 )
            {
              *(_QWORD *)(v7 + 280) = 0LL;
              *(_DWORD *)(*(_QWORD *)(i + 416) + 900LL) = 0;
            }
          }
        }
      }
      RIMUnlockExclusive((__int64)(v5 + 93));
    }
    RIMUnlockExclusive((__int64)(v5 + 12));
    ObfDereferenceObject(v5);
  }
  v9 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x48u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v9);
  return (unsigned int)v4;
}
