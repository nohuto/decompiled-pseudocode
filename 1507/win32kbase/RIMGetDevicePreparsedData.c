/*
 * XREFs of RIMGetDevicePreparsedData @ 0x1C00C1660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C00C1780 (RIMGetDevicePreparsedDataLockfree.c)
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
    0x6Du,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
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
        0x6Eu,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
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
    0x6Fu,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v13);
  return (unsigned int)v9;
}
