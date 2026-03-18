/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C001A680
 * Callers:
 *     <none>
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C001A844 (RimDeviceTypeToRimInputType.c)
 *     RIMHidTLCActive @ 0x1C001A8C4 (RIMHidTLCActive.c)
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 *     ApiSetIsRemoteConnection @ 0x1C0078294 (ApiSetIsRemoteConnection.c)
 *     rimFakePnpRemoveComplete @ 0x1C00C9B60 (rimFakePnpRemoveComplete.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(__int64 a1)
{
  __int64 v2; // r8
  int v3; // edx
  int v4; // esi
  _QWORD *v5; // rdi
  __int64 i; // rbx
  int v7; // r9d
  int v8; // r9d
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    4,
    93,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
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
        94,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      for ( i = v5[64]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48)) & 0x3C) != 0 )
        {
          v7 = *(_DWORD *)(i + 184);
          if ( (v7 & 0x800) == 0
            && (v7 & 1) == 0
            && (v7 & 2) == 0
            && (v7 & 4) == 0
            && (v7 & 8) == 0
            && *(_QWORD *)(i + 408) )
          {
            if ( (unsigned int)RIMHidTLCActive() )
            {
              if ( !*(_QWORD *)(i + 224) )
              {
                *(_DWORD *)(i + 184) = v8 | 1;
                rimOnPnpArrived(v5, i, -1LL);
                if ( *(_QWORD *)(i + 224) )
                  *(_DWORD *)(i + 340) |= 1u;
              }
            }
            else if ( *(_QWORD *)(i + 224) && !*(_DWORD *)(i + 316) )
            {
              rimFakePnpRemoveComplete(v5, i);
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
    95,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v4);
  return (unsigned int)v4;
}
