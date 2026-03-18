/*
 * XREFs of RIMGetSourceProcessId @ 0x1C00CF360
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

__int64 __fastcall RIMGetSourceProcessId(void *a1, void *a2, _DWORD *a3)
{
  void *v4; // r12
  int v6; // edi
  int v7; // esi
  _BYTE *v8; // rbx
  int v9; // edx
  PVOID v10; // rcx
  char *v11; // rax
  __int64 v12; // rdx
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    128,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v15);
  if ( v7 >= 0 )
  {
    v8 = v15;
    RIMLockExclusive((__int64)v15 + 96);
    if ( v8[73] )
    {
      v7 = -1073741637;
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        3,
        129,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      v7 = RawInputManagerDeviceObjectResolveHandle(v4, 3u, 1, &Object);
      if ( v7 >= 0 )
      {
        v10 = Object;
        v11 = (char *)Object + 64;
        if ( !Object )
          v11 = 0LL;
        v12 = *((_QWORD *)v11 + 48);
        if ( v12 )
          v6 = *(_DWORD *)(v12 + 84);
        if ( (unsigned __int64)a3 >= W32UserProbeAddress )
          a3 = (_DWORD *)W32UserProbeAddress;
        *a3 = v6;
        ObfDereferenceObject(v10);
      }
    }
    RIMUnlockExclusive((__int64)(v8 + 96));
    ObfDereferenceObject(v8);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x82u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v7);
  return (unsigned int)v7;
}
