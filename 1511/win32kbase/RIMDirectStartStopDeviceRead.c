/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C00113D0
 * Callers:
 *     <none>
 * Callees:
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 *     RimDeviceTypeToRimInputType @ 0x1C001152C (RimDeviceTypeToRimInputType.c)
 *     RIMHidTLCActive @ 0x1C00115AC (RIMHidTLCActive.c)
 *     ApiSetIsRemoteConnection @ 0x1C00115CC (ApiSetIsRemoteConnection.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     rimFakePnpRemoveComplete @ 0x1C00CAB44 (rimFakePnpRemoveComplete.c)
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
    96,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
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
        97,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      for ( i = v5[68]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( (RimDeviceTypeToRimInputType(i, *(unsigned __int8 *)(i + 48)) & 0x3C) != 0 )
        {
          v7 = *(_DWORD *)(i + 176);
          if ( (v7 & 0x800) == 0 && (v7 & 1) == 0 && (v7 & 2) == 0 && (v7 & 4) == 0 && (v7 & 8) == 0 )
          {
            v8 = *(_QWORD *)(i + 408);
            if ( v8 )
            {
              if ( (unsigned int)RIMHidTLCActive(v8) )
              {
                if ( !*(_QWORD *)(i + 216) )
                {
                  *(_DWORD *)(i + 176) = v9 | 1;
                  rimOnPnpArrived((__int64)v5, i, (void *)0xFFFFFFFFFFFFFFFFLL);
                  if ( *(_QWORD *)(i + 216) )
                    *(_DWORD *)(i + 332) |= 1u;
                }
              }
              else if ( *(_QWORD *)(i + 216) )
              {
                if ( !*(_DWORD *)(i + 308) )
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
    98,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    v4);
  return (unsigned int)v4;
}
