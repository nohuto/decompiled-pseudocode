/*
 * XREFs of RIMGetDevicePreparsedData @ 0x1C00CEAF0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C00CEC10 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall RIMGetDevicePreparsedData(void *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // r15
  int v9; // ebx
  _BYTE *v10; // rdi
  int v11; // edx
  __int64 v12; // r9
  int v14; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  v7 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    113,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v10[73] )
    {
      v9 = -1073741637;
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        3,
        114,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      LOBYTE(v12) = a5;
      v9 = RIMGetDevicePreparsedDataLockfree(v7, a3, a4, v12);
    }
    RIMUnlockExclusive((__int64)(v10 + 96));
    ObfDereferenceObject(v10);
  }
  v14 = v9;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x73u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v14);
  return (unsigned int)v9;
}
