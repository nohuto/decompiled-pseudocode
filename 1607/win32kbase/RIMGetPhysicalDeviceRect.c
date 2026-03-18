/*
 * XREFs of RIMGetPhysicalDeviceRect @ 0x1C00CF1B0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMGetPhysicalDeviceRect(void *a1, void *a2, _OWORD *a3)
{
  void *v4; // r14
  int v6; // ebx
  _BYTE *v7; // rsi
  int v8; // edx
  int v9; // edx
  PVOID v10; // r14
  char *v11; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm0
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    124,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v16);
  if ( v6 >= 0 )
  {
    v7 = v16;
    RIMLockExclusive((__int64)v16 + 96);
    if ( v7[73] )
    {
      v6 = -1073741637;
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        3,
        126,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      v6 = RawInputManagerDeviceObjectResolveHandle(v4, 3u, 1, &Object);
      if ( v6 >= 0 )
      {
        v10 = Object;
        if ( Object )
          v11 = (char *)Object + 64;
        else
          v11 = 0LL;
        if ( *((_DWORD *)v11 + 79) )
        {
          v12 = *((_QWORD *)v11 + 60);
          if ( *(_DWORD *)(v12 + 24) == 7 )
            v13 = *(_OWORD *)(v12 + 204);
          else
            v13 = *(_OWORD *)(v12 + 140);
          if ( (unsigned __int64)a3 >= W32UserProbeAddress )
            a3 = (_OWORD *)W32UserProbeAddress;
          *a3 = v13;
        }
        else
        {
          v6 = -1073741637;
          LOBYTE(v9) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            3,
            125,
            (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
        }
        ObfDereferenceObject(v10);
      }
    }
    RIMUnlockExclusive((__int64)(v7 + 96));
    ObfDereferenceObject(v7);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x7Fu,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v6);
  return (unsigned int)v6;
}
