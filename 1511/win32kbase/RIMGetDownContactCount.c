/*
 * XREFs of RIMGetDownContactCount @ 0x1C00C26A0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
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
    0x69u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
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
        0x6Au,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 186));
      v6 = v5[147];
      if ( *((_BYTE *)v5 + 704) )
        --v6;
      RIMUnlockExclusive((__int64)(v5 + 186));
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
    0x6Bu,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v8);
  return (unsigned int)v4;
}
