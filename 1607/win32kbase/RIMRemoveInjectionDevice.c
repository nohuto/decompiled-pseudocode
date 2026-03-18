/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1C00D0310
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(void *a1, void *a2)
{
  void *v2; // rsi
  int v4; // eax
  __int64 v5; // rbx
  int v6; // ebp
  PVOID v7; // rdi
  int v8; // edx
  __int64 v9; // rcx
  _DWORD *v10; // rsi
  int v12; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    47,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  v5 = 0LL;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 96);
    v6 = RawInputManagerDeviceObjectResolveHandle(v2, 3u, 1, &Object);
    if ( v6 < 0 )
    {
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        3,
        49,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      v10 = Object;
      if ( !*((_QWORD *)v7 + 95) || *((_QWORD *)v7 + 4) == PsGetCurrentProcess(v9) )
      {
        if ( *((_BYTE *)v7 + 73) || *((_BYTE *)v7 + 74) )
        {
          v6 = -1073741637;
          LOBYTE(v8) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v8,
            3,
            48,
            (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
        }
        else
        {
          if ( v10 )
            v5 = (__int64)(v10 + 16);
          v6 = RIMFreeDev((__int64)v7, v5);
        }
      }
      else
      {
        v10[62] |= 0x10000u;
        RIMLockExclusive((__int64)&gObListLock);
        v10[66] |= 2u;
        RIMUnlockExclusive((__int64)&gObListLock);
        v10[62] |= 0x40000u;
        ZwSetEvent(*((HANDLE *)v7 + 65), 0LL);
        v6 = 0;
      }
      ObfDereferenceObject(v10);
    }
    RIMUnlockExclusive((__int64)v7 + 96);
    ObfDereferenceObject(v7);
  }
  v12 = v6;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x32u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v12);
  return (unsigned int)v6;
}
