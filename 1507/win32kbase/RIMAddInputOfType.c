/*
 * XREFs of RIMAddInputOfType @ 0x1C00C1260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00758D8 (RIMDiscoverDevicesOfInputType.c)
 */

__int64 __fastcall RIMAddInputOfType(void *a1, int a2)
{
  int v4; // esi
  PDRIVER_OBJECT *v5; // rbx
  int v6; // eax
  unsigned __int16 v7; // r9
  int v9; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x19u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = (PDRIVER_OBJECT *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 74) )
    {
      v4 = -1073741637;
      v7 = 28;
    }
    else if ( a2 && ((a2 - 1) & a2) == 0 || (a2 & 0x1C) != 0 )
    {
      v6 = *((_DWORD *)v5 + 19);
      if ( (v6 & a2) == 0 )
      {
        *((_DWORD *)v5 + 19) = a2 | v6;
        RIMDiscoverDevicesOfInputType(v5);
LABEL_13:
        RIMUnlockExclusive((__int64)(v5 + 12));
        ObfDereferenceObject(v5);
        goto LABEL_14;
      }
      v4 = -1073741637;
      v7 = 26;
    }
    else
    {
      v4 = -1073741811;
      v7 = 27;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v7,
      (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    goto LABEL_13;
  }
LABEL_14:
  v9 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x1Du,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v9);
  return (unsigned int)v4;
}
