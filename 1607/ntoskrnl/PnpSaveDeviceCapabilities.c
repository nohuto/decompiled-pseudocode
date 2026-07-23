/*
 * XREFs of PnpSaveDeviceCapabilities @ 0x14051208C
 * Callers:
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14050FD98 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _CmSetDeviceRegProp @ 0x1405121B4 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14051230C (PnpDeviceObjectToDeviceInstance.c)
 */

__int64 __fastcall PnpSaveDeviceCapabilities(__int64 a1, __int64 a2, char a3)
{
  int v5; // edi
  int v6; // ebp
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rdx
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3 != 0 ? 0x20000 : 0;
  v6 = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), &Handle, 983103LL);
  if ( v6 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 396) & 0x40) != 0 )
      *(_DWORD *)(a2 + 4) &= ~0x200u;
    v7 = (int)Handle;
    v8 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 560) = *(_DWORD *)(a2 + 4);
    v12 = ((*(_DWORD *)(a2 + 4) >> 4) & 0xC00 | *(_DWORD *)(a2 + 4) & 0x3FC | (*(_DWORD *)(a2 + 4) >> 13) & 8u) >> 2;
    CmSetDeviceRegProp(PiPnpRtlCtx, v8, v7, 16, 4, (__int64)&v12, 4, v5);
    v9 = *(_QWORD *)(a1 + 48);
    v12 = *(_DWORD *)(a2 + 12);
    if ( v12 == -1 )
      CmSetDeviceRegProp(PiPnpRtlCtx, v9, (_DWORD)Handle, 17, 4, 0LL, 0, v5);
    else
      CmSetDeviceRegProp(PiPnpRtlCtx, v9, (_DWORD)Handle, 17, 4, (__int64)&v12, 4, v5);
    ZwClose(Handle);
  }
  return (unsigned int)v6;
}
