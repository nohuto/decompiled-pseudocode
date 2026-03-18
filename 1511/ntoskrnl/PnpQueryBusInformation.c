/*
 * XREFs of PnpQueryBusInformation @ 0x1404EFE74
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopSynchronousCall @ 0x1403D2C78 (IopSynchronousCall.c)
 *     PnpBusTypeGuidGetIndex @ 0x1404F1620 (PnpBusTypeGuidGetIndex.c)
 */

__int64 __fastcall PnpQueryBusInformation(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  int v3; // esi
  _DWORD *v4; // rbx
  _WORD v6[40]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h] BYREF

  P = 0LL;
  memset(v6, 0, 0x48uLL);
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v6[0] = 5403;
  v3 = IopSynchronousCall(v2, (__int64)v6, -1073741637, 0LL, (ULONG_PTR *)&P);
  if ( v3 < 0 )
  {
    *(_DWORD *)(a1 + 456) = -1;
    *(_WORD *)(a1 + 464) = -1;
    *(_DWORD *)(a1 + 460) = -16;
  }
  else
  {
    v4 = P;
    *(_WORD *)(a1 + 464) = PnpBusTypeGuidGetIndex(P);
    *(_DWORD *)(a1 + 456) = v4[4];
    *(_DWORD *)(a1 + 460) = v4[5];
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v3;
}
