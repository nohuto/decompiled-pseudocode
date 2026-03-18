/*
 * XREFs of RIMFreeInputBuffer @ 0x1C00CE9D0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMFreeUserMem @ 0x1C00D2510 (RIMFreeUserMem.c)
 */

__int64 __fastcall RIMFreeInputBuffer(void *a1, __int64 a2)
{
  __int64 v2; // r14
  int v4; // ebp
  _BYTE *v5; // rdi
  int v6; // edx
  int v8; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    84,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v5[73] || v5[74] )
    {
      v4 = -1073741637;
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        3,
        85,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v5 + 696));
      RIMFreeUserMem(v5, v2);
      RIMUnlockExclusive((__int64)(v5 + 696));
    }
    RIMUnlockExclusive((__int64)(v5 + 96));
    ObfDereferenceObject(v5);
  }
  v8 = v4;
  return WPP_RECORDER_SF_D(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           4u,
           0x56u,
           (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
           v8);
}
