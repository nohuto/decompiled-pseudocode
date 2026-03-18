/*
 * XREFs of RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00D04D8
 * Callers:
 *     DestroyProcessInfo @ 0x1C0012B48 (DestroyProcessInfo.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMRemoveMouseOrKeyboardInjectionDevice(void *a1)
{
  int v2; // esi
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    4,
    44,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v2 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 < 0 )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      3,
      3,
      46,
      (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  }
  else
  {
    v3 = Object;
    v4 = *((_QWORD *)Object + 52);
    RIMLockExclusive(v4 + 96);
    if ( v4 )
    {
      if ( !*(_QWORD *)(v4 + 760) || *(_QWORD *)(v4 + 32) == PsGetCurrentProcess(v5) )
      {
        if ( *(_BYTE *)(v4 + 73) || *(_BYTE *)(v4 + 74) )
        {
          v2 = -1073741637;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            3,
            3,
            45,
            (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
        }
        else
        {
          v2 = RIMFreeDev(v4, (__int64)(v3 + 16));
        }
      }
      else
      {
        v3[62] |= 0x10000u;
        RIMLockExclusive((__int64)&gObListLock);
        v3[66] |= 2u;
        RIMUnlockExclusive((__int64)&gObListLock);
        v3[62] |= 0x40000u;
        ZwSetEvent(*(HANDLE *)(v4 + 520), 0LL);
        v2 = 0;
      }
    }
    RIMUnlockExclusive(v4 + 96);
    ObfDereferenceObject(v3);
  }
  return (unsigned int)v2;
}
