/*
 * XREFs of PnprRecopyMirrorPages @ 0x1401D05CC
 * Callers:
 *     PnprSwapFinalize @ 0x1401D0964 (PnprSwapFinalize.c)
 * Callees:
 *     PnprCopyReservedMapping @ 0x1401CFEC0 (PnprCopyReservedMapping.c)
 *     PnprGetStackLimits @ 0x1401D02B8 (PnprGetStackLimits.c)
 *     PnprRecopyAddress @ 0x1401D04A0 (PnprRecopyAddress.c)
 *     PnprRecopyMappingReserve @ 0x1401D04F0 (PnprRecopyMappingReserve.c)
 */

__int64 PnprRecopyMirrorPages()
{
  __int64 Number; // rcx
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // edx
  __int64 result; // rax
  int v5; // r8d
  SIZE_T v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // r8d
  SIZE_T v10; // rcx
  int v11; // eax
  int v12; // eax

  Number = KeGetPcr()->Prcb.Number;
  PnprGetStackLimits((char **)(PnprContext + 216 + 8 * Number), (unsigned __int64 *)(PnprContext + 5336 + 8 * Number));
  v1 = PnprContext;
  v2 = 0LL;
  if ( *(_DWORD *)(PnprContext + 176) )
  {
    while ( 1 )
    {
      v3 = PnprRecopyAddress(
             *(_QWORD *)(v1 + 8 * v2 + 216),
             *(_DWORD *)(v1 + 8 * v2 + 5336) - (unsigned int)*(_QWORD *)(v1 + 8 * v2 + 216));
      if ( v3 < 0 )
        break;
      v1 = PnprContext;
      if ( (_DWORD)v2 != *(_DWORD *)(PnprContext + 180) )
      {
        v3 = PnprRecopyMappingReserve((__int64 *)(*(_QWORD *)(PnprContext + 144) + 24 * v2));
        if ( v3 < 0 )
        {
          v9 = 5596;
          goto LABEL_18;
        }
        v3 = PnprRecopyMappingReserve((__int64 *)(*(_QWORD *)(PnprContext + 136) + 24 * v2));
        if ( v3 < 0 )
        {
          v9 = 5604;
          goto LABEL_18;
        }
        v1 = PnprContext;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(v1 + 176) )
        goto LABEL_8;
    }
    v9 = 5580;
LABEL_18:
    v10 = PnprContext;
    v11 = *(_DWORD *)(PnprContext + 10744);
    if ( !v11 )
      v11 = v9;
    *(_DWORD *)(PnprContext + 10744) = v11;
    v12 = *(_DWORD *)(v10 + 10748);
    if ( !v12 )
      v12 = 1;
    *(_DWORD *)(v10 + 10748) = v12;
    return (unsigned int)v3;
  }
  else
  {
LABEL_8:
    result = PnprRecopyAddress(v1, 0x2A38u);
    if ( (int)result >= 0 )
    {
      result = PnprCopyReservedMapping();
      if ( (int)result >= 0 )
        return 0LL;
      v5 = 5628;
    }
    else
    {
      v5 = 5616;
    }
    v6 = PnprContext;
    v7 = *(_DWORD *)(PnprContext + 10744);
    if ( !v7 )
      v7 = v5;
    *(_DWORD *)(PnprContext + 10744) = v7;
    v8 = *(_DWORD *)(v6 + 10748);
    if ( !v8 )
      v8 = 1;
    *(_DWORD *)(v6 + 10748) = v8;
  }
  return result;
}
