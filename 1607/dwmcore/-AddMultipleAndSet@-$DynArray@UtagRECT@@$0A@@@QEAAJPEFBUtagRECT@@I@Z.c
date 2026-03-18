/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z @ 0x18009A520
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<tagRECT,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v6; // edi
  _OWORD *v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(unsigned int *)(a1 + 24);
  v4 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    return 2147942934LL;
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    v7 = a2;
    v6 = DynArrayImpl<0>::Grow(a1, 16, 1, 0, (__int64)&v7);
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
    else
      *(_OWORD *)(*(_QWORD *)a1 + (unsigned int)(16 * (*(_DWORD *)(a1 + 24))++)) = *v7;
    return (unsigned int)v6;
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)a1 + 16 * v3) = *a2;
    *(_DWORD *)(a1 + 24) = v4;
    return 0LL;
  }
}
