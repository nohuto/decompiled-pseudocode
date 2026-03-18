/*
 * XREFs of RIMDirectPnpRemoveDevicesOfType @ 0x1C007F190
 * Callers:
 *     <none>
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C000EA9C (rimOnPnpRemoveComplete.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMDirectPnpRemoveDevicesOfType(void *a1, int a2)
{
  int v2; // r14d
  int v4; // esi
  _QWORD *v5; // rdi
  int v6; // edx
  __int64 i; // rbx
  int v8; // ecx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    92,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) )
    {
      v4 = -1073741637;
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        3,
        93,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      for ( i = v5[69]; i; i = *(_QWORD *)(i + 40) )
      {
        v8 = *(_DWORD *)(i + 184);
        if ( (v8 & 0x800) == 0 && (v8 & 0x100) == 0 && *(unsigned __int8 *)(i + 48) == v2 )
        {
          *(_DWORD *)(i + 184) = v8 | 8;
          rimOnPnpRemoveComplete((__int64)v5, i);
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
    0x5Eu,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v4);
  return (unsigned int)v4;
}
