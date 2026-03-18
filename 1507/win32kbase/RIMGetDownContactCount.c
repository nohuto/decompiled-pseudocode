/*
 * XREFs of RIMGetDownContactCount @ 0x1C00C1B60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 */

__int64 __fastcall RIMGetDownContactCount(void *a1, _DWORD *a2)
{
  int v4; // esi
  _DWORD *v5; // rbx
  int v6; // edi
  int v8; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x66u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  *a2 = 0;
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
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
        0x67u,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 178));
      v6 = v5[139];
      if ( *((_BYTE *)v5 + 672) )
        --v6;
      RIMUnlockExclusive((__int64)(v5 + 178));
      *a2 = v6;
    }
    RIMUnlockExclusive((__int64)(v5 + 24));
    ObfDereferenceObject(v5);
  }
  v8 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x68u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v8);
  return (unsigned int)v4;
}
