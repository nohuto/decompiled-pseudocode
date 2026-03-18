/*
 * XREFs of bFDXform @ 0x1C00A8634
 * Callers:
 *     lQueryDEVICEMETRICS @ 0x1C00A8210 (lQueryDEVICEMETRICS.c)
 *     bComputeMaxGlyph @ 0x1C00A9D18 (bComputeMaxGlyph.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00327F4 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 */

__int64 bFDXform(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v3; // xmm5_4
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r11
  __int64 v18; // r11
  int v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  v3 = *(_DWORD *)(a1 + 8);
  v5 = 4LL;
  LODWORD(v20) = *(_DWORD *)(a1 + 4);
  v19 = v3;
  if ( EFLOAT::bIsZero((EFLOAT *)va) && EFLOAT::bIsZero((EFLOAT *)&v19) )
  {
    v13 = a2 - v11;
    v14 = 10LL;
    do
    {
      if ( !(unsigned int)bFToL(v6, v13 + v12, v14) )
        break;
      if ( !(unsigned int)bFToL(v15, v17 + v13 + 4, v16) )
        break;
      v12 = v18 + 8;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    v7 = 10LL;
    do
    {
      if ( !(unsigned int)bFToL(v6, a2, v7) )
        break;
      if ( !(unsigned int)bFToL(v8, a2 + 4, v9) )
        break;
      a2 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  return 1LL;
}
