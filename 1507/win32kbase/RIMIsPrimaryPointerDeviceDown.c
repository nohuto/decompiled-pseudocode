/*
 * XREFs of RIMIsPrimaryPointerDeviceDown @ 0x1C00C1FD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
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
    0x63u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
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
        0x64u,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v6 + 89));
      if ( !v6[71] || !*((_DWORD *)v6 + 145) )
        v4 = 0;
      *a2 = v4;
      RIMUnlockExclusive((__int64)(v6 + 89));
    }
    RIMUnlockExclusive((__int64)(v6 + 12));
    ObfDereferenceObject(v6);
  }
  v8 = v5;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x65u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v8);
  return (unsigned int)v5;
}
