/*
 * XREFs of RIMRemoveInjectionDevice @ 0x1C00C29F0
 * Callers:
 *     DestroyProcessInfo @ 0x1C0050D24 (DestroyProcessInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMFreeDev @ 0x1C00759DC (RIMFreeDev.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00766E0 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMRemoveInjectionDevice(void *a1, void *a2)
{
  int v4; // eax
  __int64 v5; // rbx
  int v6; // esi
  PVOID v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rbp
  int v12; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x2Cu,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  v5 = 0LL;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((__int64)Object + 96);
    v6 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &Object);
    if ( v6 < 0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Eu,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      v10 = Object;
      if ( !*((_QWORD *)v7 + 95) || *((_QWORD *)v7 + 4) == PsGetCurrentProcess(v9, v8) )
      {
        if ( *((_BYTE *)v7 + 73) || *((_BYTE *)v7 + 74) )
        {
          v6 = -1073741637;
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Du,
            (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
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
        v10[62] |= 0x50000u;
        ZwSetEvent(*((HANDLE *)v7 + 60), 0LL);
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
    0x2Fu,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v12);
  return (unsigned int)v6;
}
