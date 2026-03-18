/*
 * XREFs of RIMOnCheckPointerDeviceMonitors @ 0x1C00CF9B0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMOnCheckPointerDeviceMonitors(void *a1, __int64 a2)
{
  __int64 v2; // r14
  int v4; // edi
  _QWORD *v5; // rbx
  int v6; // edx
  __int64 i; // rdx
  __int64 v8; // rax
  int v10; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    71,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) )
    {
      v4 = -1073741637;
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        3,
        72,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 87));
      for ( i = v5[69]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( *(_DWORD *)(i + 316) )
        {
          if ( (*(_DWORD *)(i + 184) & 0x800) == 0 )
          {
            v8 = *(_QWORD *)(i + 480);
            if ( *(_QWORD *)(v8 + 280) == v2 )
            {
              *(_QWORD *)(v8 + 280) = 0LL;
              *(_DWORD *)(*(_QWORD *)(i + 480) + 868LL) = 0;
            }
          }
        }
      }
      RIMUnlockExclusive((__int64)(v5 + 87));
    }
    RIMUnlockExclusive((__int64)(v5 + 12));
    ObfDereferenceObject(v5);
  }
  v10 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x49u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v10);
  return (unsigned int)v4;
}
