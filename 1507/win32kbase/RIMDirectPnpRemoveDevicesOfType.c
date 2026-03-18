/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x1C0070BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     rimOnPnpRemoveComplete @ 0x1C0076908 (rimOnPnpRemoveComplete.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(void *a1, int a2)
{
  int v4; // esi
  _QWORD *v5; // rdi
  __int64 i; // rbx
  int v7; // ecx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x58u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) )
    {
      v4 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x59u,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      for ( i = v5[64]; i; i = *(_QWORD *)(i + 40) )
      {
        v7 = *(_DWORD *)(i + 184);
        if ( (v7 & 0x800) == 0 && (v7 & 0x100) == 0 && *(unsigned __int8 *)(i + 48) == a2 )
        {
          *(_DWORD *)(i + 184) = v7 | 8;
          rimOnPnpRemoveComplete(v5, i);
        }
      }
    }
    RIMUnlockExclusive((__int64)(v5 + 12));
    ObfDereferenceObject(v5);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x5Au,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v4);
  return (unsigned int)v4;
}
