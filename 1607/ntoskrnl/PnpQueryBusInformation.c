/*
 * XREFs of PnpQueryBusInformation @ 0x14050E634
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 *     PnpBusTypeGuidGetIndex @ 0x14050B60C (PnpBusTypeGuidGetIndex.c)
 */

__int64 __fastcall PnpQueryBusInformation(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  __int64 v3; // r9
  int v4; // esi
  _DWORD *v5; // rbx
  _WORD v7[40]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h] BYREF

  P = 0LL;
  memset(v7, 0, 0x48uLL);
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v7[0] = 5403;
  v4 = IopSynchronousCall(v2, (__int64)v7, -1073741637, v3, &P);
  if ( v4 < 0 )
  {
    *(_DWORD *)(a1 + 456) = -1;
    *(_WORD *)(a1 + 464) = -1;
    *(_DWORD *)(a1 + 460) = -16;
  }
  else
  {
    v5 = P;
    *(_WORD *)(a1 + 464) = PnpBusTypeGuidGetIndex((__int128 *)P);
    *(_DWORD *)(a1 + 456) = v5[4];
    *(_DWORD *)(a1 + 460) = v5[5];
    ExFreePoolWithTag(v5, 0);
  }
  return (unsigned int)v4;
}
