/*
 * XREFs of RIMIsPrimaryPointerDeviceDown @ 0x1C00C2CE0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMIsPrimaryPointerDeviceDown(void *a1, int *a2)
{
  int v4; // r14d
  int v5; // edi
  _QWORD *v6; // rbx
  int v8; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x66u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v4 = 1;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v6 + 73) || *((_BYTE *)v6 + 74) )
    {
      v5 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x67u,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v6 + 93));
      if ( !v6[75] || !*((_DWORD *)v6 + 153) )
        v4 = 0;
      *a2 = v4;
      RIMUnlockExclusive((__int64)(v6 + 93));
    }
    RIMUnlockExclusive((__int64)(v6 + 12));
    ObfDereferenceObject(v6);
  }
  v8 = v5;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x68u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v8);
  return (unsigned int)v5;
}
