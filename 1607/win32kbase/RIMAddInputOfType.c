/*
 * XREFs of RIMAddInputOfType @ 0x1C00CE630
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C007FBEC (RIMDiscoverDevicesOfInputType.c)
 */

__int64 __fastcall RIMAddInputOfType(void *a1, int a2)
{
  int v2; // edi
  int v4; // esi
  PDRIVER_OBJECT *v5; // rbx
  int v6; // edx
  int v7; // eax
  int v8; // r9d
  int v10; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    25,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = (PDRIVER_OBJECT *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) )
    {
      v4 = -1073741637;
      v8 = 28;
    }
    else if ( v2 && ((v2 - 1) & v2) == 0 || (v2 & 0x1C) != 0 )
    {
      v7 = *((_DWORD *)v5 + 19);
      if ( (v7 & v2) == 0 )
      {
        *((_DWORD *)v5 + 19) = v2 | v7;
        RIMDiscoverDevicesOfInputType(v5);
LABEL_13:
        RIMUnlockExclusive((__int64)(v5 + 12));
        ObfDereferenceObject(v5);
        goto LABEL_14;
      }
      v4 = -1073741637;
      v8 = 26;
    }
    else
    {
      v4 = -1073741811;
      v8 = 27;
    }
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      3,
      v8,
      (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    goto LABEL_13;
  }
LABEL_14:
  v10 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x1Du,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v10);
  return (unsigned int)v4;
}
