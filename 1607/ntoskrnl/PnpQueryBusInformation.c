/*
 * XREFs of PnpQueryBusInformation @ 0x1404E8ED8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpBusTypeGuidGetIndex @ 0x1404E8F9C (PnpBusTypeGuidGetIndex.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpQueryBusInformation(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r9d
  int v4; // esi
  _DWORD *v5; // rbx
  _WORD v7[36]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+90h] [rbp+8h] BYREF

  P = 0LL;
  memset(v7, 0, sizeof(v7));
  v2 = *(_QWORD *)(a1 + 32);
  v7[0] = 5403;
  v4 = IopSynchronousCall(v2, (unsigned int)v7, -1073741637, v3, (__int64)&P);
  if ( v4 < 0 )
  {
    *(_DWORD *)(a1 + 456) = -1;
    *(_WORD *)(a1 + 464) = -1;
    *(_DWORD *)(a1 + 460) = -16;
  }
  else
  {
    v5 = P;
    *(_WORD *)(a1 + 464) = PnpBusTypeGuidGetIndex(P);
    *(_DWORD *)(a1 + 456) = v5[4];
    *(_DWORD *)(a1 + 460) = v5[5];
    ExFreePoolWithTag(v5, 0);
  }
  return (unsigned int)v4;
}
