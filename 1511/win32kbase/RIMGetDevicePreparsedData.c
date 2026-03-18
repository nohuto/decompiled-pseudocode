/*
 * XREFs of RIMGetDevicePreparsedData @ 0x1C00C21A0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C00C22C0 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall RIMGetDevicePreparsedData(void *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v9; // ebx
  _BYTE *v10; // rdi
  __int64 v11; // r9
  int v13; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x70u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v10[73] )
    {
      v9 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x71u,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      LOBYTE(v11) = a5;
      v9 = RIMGetDevicePreparsedDataLockfree(a2, a3, a4, v11);
    }
    RIMUnlockExclusive((__int64)(v10 + 96));
    ObfDereferenceObject(v10);
  }
  v13 = v9;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x72u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v13);
  return (unsigned int)v9;
}
