/*
 * XREFs of RIMFreeInputBuffer @ 0x1C00C1540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMFreeUserMem @ 0x1C00C2DD0 (RIMFreeUserMem.c)
 */

__int64 __fastcall RIMFreeInputBuffer(void *a1, __int64 a2)
{
  int v4; // ebp
  _BYTE *v5; // rdi
  int v7; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x50u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v5[73] || v5[74] )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x51u,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 712));
      RIMFreeUserMem(v5, a2);
      RIMUnlockExclusive((__int64)(v5 + 712));
    }
    RIMUnlockExclusive((__int64)(v5 + 96));
    ObfDereferenceObject(v5);
  }
  v7 = v4;
  return WPP_RECORDER_SF_D(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           0x52u,
           (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
           v7);
}
