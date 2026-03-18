/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00C3878
 * Callers:
 *     DestroyProcessInfo @ 0x1C00448B4 (DestroyProcessInfo.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000F020 (RIMFreeDev.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(void *a1)
{
  int v2; // esi
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x2Cu,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v2 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x2Eu,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  }
  else
  {
    v3 = Object;
    v4 = *((_QWORD *)Object + 50);
    RIMLockExclusive(v4 + 96);
    if ( v4 )
    {
      if ( !*(_QWORD *)(v4 + 808) || *(_QWORD *)(v4 + 32) == PsGetCurrentProcess(v6, v5) )
      {
        if ( *(_BYTE *)(v4 + 73) || *(_BYTE *)(v4 + 74) )
        {
          v2 = -1073741637;
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Du,
            (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
        }
        else
        {
          v2 = RIMFreeDev(v4, (__int64)(v3 + 16));
        }
      }
      else
      {
        v3[60] |= 0x50000u;
        ZwSetEvent(*(HANDLE *)(v4 + 512), 0LL);
        v2 = 0;
      }
    }
    RIMUnlockExclusive(v4 + 96);
    ObfDereferenceObject(v3);
  }
  return (unsigned int)v2;
}
