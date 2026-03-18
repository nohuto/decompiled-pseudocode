/*
 * XREFs of ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004A5E0
 * Callers:
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C001FEF0 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C004A2C0 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00DF5C0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 * Callees:
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C003FC40 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C004A358 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C004A794 (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004BCE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C004BEAC (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     PopThreadGuardedObject @ 0x1C004C300 (PopThreadGuardedObject.c)
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C00A3F80 (-SetEmpty@CRegion@@QEAAXXZ.c)
 */

__int64 __fastcall CRegion::Combine(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // r8d
  int v8; // ecx
  __m128i *v9; // rbx
  struct REGION *v10; // rdi
  struct REGION *v12; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+28h] [rbp-8h]
  __m128i *v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 == 2 && *(_DWORD *)(a2 + 4) == 2 )
    goto LABEL_7;
  v8 = *(_DWORD *)(a2 + 4);
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      if ( !v5 )
      {
        v4 = CRegion::InitializeFromRect((CRegion *)a1, (struct _RECTL *)&CRegion::sc_rcEmpty);
        goto LABEL_6;
      }
      if ( v5 != 1 )
        return (unsigned int)-1073741595;
      if ( a3 == 1 )
        goto LABEL_40;
      if ( a3 == 2 )
        goto LABEL_7;
      if ( a3 <= 2 )
        return (unsigned int)-1073741811;
      if ( a3 > 4 )
      {
        if ( a3 != 5 )
          return (unsigned int)-1073741811;
LABEL_40:
        v4 = CRegion::InitializeFromRect((CRegion *)a1, (struct _RECTL *)&CRegion::sc_rcEmpty);
        a3 = 5;
        goto LABEL_6;
      }
      return (unsigned int)-2147020579;
    }
    if ( a3 == 1 )
      goto LABEL_7;
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
        return (unsigned int)-2147020579;
      if ( a3 == 4 )
      {
        CRegion::SetEmpty((CRegion *)a1);
        goto LABEL_7;
      }
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
    }
    CRegion::SetFullRegion((CRegion *)a1);
    goto LABEL_7;
  }
  if ( a3 == 5 )
    CRegion::SetEmpty((CRegion *)a1);
LABEL_6:
  if ( (v4 & 0x80000000) != 0 )
    return v4;
LABEL_7:
  if ( *(_DWORD *)(a1 + 4) != 2 || *(_DWORD *)(a2 + 4) != 2 )
    return v4;
  v15 = *(_QWORD *)(a2 + 8);
  if ( !v15 || (unsigned int)(a3 - 1) > 4 )
    return (unsigned int)-1073741811;
  v9 = *(__m128i **)(a1 + 8);
  v12 = 0LL;
  v13 = 0;
  v14 = v9;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v12, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
  v10 = v12;
  if ( v9 && v12 )
  {
    if ( (unsigned int)RGNOBJ::bMerge(
                         (RGNOBJ *)&v12,
                         (struct RGNOBJ *)&v14,
                         (struct RGNOBJ *)&v15,
                         *((_BYTE *)&gafjRgnOp + a3))
      && (unsigned int)RGNOBJ::bSwap((__int64 **)&v12, &v14) )
    {
      v4 = 0;
      *(_QWORD *)(a1 + 8) = v14;
    }
    else
    {
      v4 = -1073741823;
    }
    v10 = v12;
  }
  else
  {
    v4 = -1073741801;
  }
  if ( v10 )
  {
    PopThreadGuardedObject((char *)v10 + 48);
    if ( v10 != prgnDefault )
      FreeObject((__int64)v10);
  }
  v12 = 0LL;
  if ( v13 == 1 )
    RGNOBJ::vDeleteRGNOBJ((__int16 **)&v12);
  return v4;
}
