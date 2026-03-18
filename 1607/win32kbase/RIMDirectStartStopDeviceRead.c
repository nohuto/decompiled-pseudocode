/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C0010070
 * Callers:
 *     <none>
 * Callees:
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     ApiSetIsRemoteConnection @ 0x1C000F57C (ApiSetIsRemoteConnection.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 *     RIMHidTLCActive @ 0x1C0010254 (RIMHidTLCActive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     rimFakePnpRemoveComplete @ 0x1C00DB150 (rimFakePnpRemoveComplete.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(__int64 a1)
{
  __int64 v2; // r8
  int v3; // edx
  int v4; // esi
  _QWORD *v5; // rdi
  __int64 i; // rbx
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // r9d
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    4,
    97,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  LOBYTE(v2) = 1;
  v4 = RawInputManagerObjectResolveHandle(a1, 3LL, v2, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((char *)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) || (unsigned int)ApiSetIsRemoteConnection() )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        3,
        98,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      for ( i = v5[69]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48)) & 0x3C) != 0 )
        {
          v7 = *(_DWORD *)(i + 184);
          if ( (v7 & 0x800) == 0
            && (v7 & 1) == 0
            && (v7 & 2) == 0
            && (v7 & 4) == 0
            && (v7 & 8) == 0
            && (v7 & 0x100) == 0 )
          {
            v8 = *(_QWORD *)(i + 472);
            if ( v8 )
            {
              if ( (unsigned int)RIMHidTLCActive(v8) )
              {
                if ( !*(_QWORD *)(i + 224) )
                {
                  *(_DWORD *)(i + 184) = v9 | 1;
                  rimOnPnpArrived((__int64)v5, i, (void *)0xFFFFFFFFFFFFFFFFLL);
                  if ( *(_QWORD *)(i + 224) )
                    *(_DWORD *)(i + 348) |= 1u;
                }
              }
              else if ( *(_QWORD *)(i + 224) && !*(_DWORD *)(i + 316) && !*(_DWORD *)(i + 320) )
              {
                rimFakePnpRemoveComplete(v5, i);
              }
            }
          }
        }
      }
    }
    RIMUnlockExclusive(v5 + 12);
    ObfDereferenceObject(v5);
  }
  LOBYTE(v3) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v3,
    4,
    99,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v4);
  return (unsigned int)v4;
}
