/*
 * XREFs of PpHotSwapUpdateRemovalPolicy @ 0x14050F3A0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x1404D1EB0 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PiHotSwapGetDetachableNode @ 0x14050F48C (PiHotSwapGetDetachableNode.c)
 */

__int64 __fastcall PpHotSwapUpdateRemovalPolicy(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+18h] BYREF
  int v9; // [rsp+70h] [rbp+20h] BYREF
  int v10; // [rsp+78h] [rbp+28h] BYREF

  v9 = 0;
  result = PiHotSwapGetDetachableNode(a1, &v7);
  if ( !v7 )
  {
    *(_WORD *)(a1 + 466) = 257;
    return result;
  }
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL);
  v4 = v3 & 0x300;
  if ( (v3 & 0x4000) != 0 )
    goto LABEL_13;
  if ( (v3 & 0x8000) != 0 )
  {
LABEL_14:
    v5 = 3;
    goto LABEL_16;
  }
  if ( v4 == 512 )
  {
LABEL_13:
    v5 = 2;
LABEL_16:
    v8 = v5;
    goto LABEL_10;
  }
  if ( v4 == 768 )
    goto LABEL_14;
  if ( a1 != v7 )
  {
    v5 = 6;
    goto LABEL_16;
  }
  PiHotSwapGetDefaultBusRemovalPolicy(a1, &v8);
  v5 = v8;
LABEL_10:
  if ( a1 != v7 )
  {
    if ( v5 > *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 466LL) )
      v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 466LL);
    v8 = v5;
  }
  *(_BYTE *)(a1 + 466) = v5;
  *(_BYTE *)(a1 + 467) = v5;
  v6 = *(_QWORD *)(a1 + 48);
  v10 = 4;
  result = CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v6, 0LL, 34, (__int64)&v9, (__int64)&v8, (__int64)&v10, 0);
  if ( (int)result >= 0 )
  {
    if ( v9 != 4 )
      result = 3221225712LL;
    if ( (int)result >= 0 )
    {
      result = (unsigned int)(v8 - 2);
      if ( (unsigned int)result <= 1 )
        *(_BYTE *)(a1 + 466) = v8;
    }
  }
  return result;
}
