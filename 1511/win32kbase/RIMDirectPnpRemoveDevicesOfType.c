/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x1C007B4C0
 * Callers:
 *     <none>
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C0010044 (rimOnPnpRemoveComplete.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(void *a1, int a2)
{
  int v4; // esi
  _QWORD *v5; // rdi
  __int64 i; // rbx
  int v7; // ecx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x5Bu,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x5Cu,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      for ( i = v5[68]; i; i = *(_QWORD *)(i + 40) )
      {
        v7 = *(_DWORD *)(i + 176);
        if ( (v7 & 0x800) == 0 && (v7 & 0x100) == 0 && *(unsigned __int8 *)(i + 48) == a2 )
        {
          *(_DWORD *)(i + 176) = v7 | 8;
          rimOnPnpRemoveComplete((char)v5, i);
        }
      }
    }
    RIMUnlockExclusive((__int64)(v5 + 12));
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x5Du,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v4);
  return (unsigned int)v4;
}
