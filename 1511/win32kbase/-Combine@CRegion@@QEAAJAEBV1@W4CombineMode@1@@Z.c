/*
 * XREFs of ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003EA98
 * Callers:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C003E808 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C004D6D0 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00E13E0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0028E90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C00299E0 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C002B2C0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002B3F8 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C003E8A0 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C003ECBC (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003ECE0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C003ED40 (PopThreadGuardedObject.c)
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C00A8A58 (-SetEmpty@CRegion@@QEAAXXZ.c)
 */

__int64 __fastcall CRegion::Combine(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // esi
  int v8; // edx
  __m128i *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  REGION *v12; // rdi
  REGION *v14; // [rsp+20h] [rbp-10h] BYREF
  int v15; // [rsp+28h] [rbp-8h]
  __m128i *v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = a3;
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
        goto LABEL_39;
      if ( a3 == 2 )
        goto LABEL_7;
      if ( a3 <= 2 )
        return (unsigned int)-1073741811;
      if ( a3 > 4 )
      {
        if ( a3 != 5 )
          return (unsigned int)-1073741811;
LABEL_39:
        v4 = CRegion::InitializeFromRect((CRegion *)a1, (struct _RECTL *)&CRegion::sc_rcEmpty);
        v6 = 5;
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
  v17 = *(_QWORD *)(a2 + 8);
  if ( !v17 || (unsigned int)(v6 - 1) > 4 )
    return (unsigned int)-1073741811;
  v9 = *(__m128i **)(a1 + 8);
  v15 = 0;
  v16 = v9;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14, v10, v11);
  v12 = v14;
  if ( v9 && v14 )
  {
    if ( (unsigned int)RGNOBJ::bMerge(
                         (RGNOBJ *)&v14,
                         (struct RGNOBJ *)&v16,
                         (struct RGNOBJ *)&v17,
                         *((_BYTE *)&gafjRgnOp + v6))
      && (unsigned int)RGNOBJ::bSwap((__int64 **)&v14, &v16) )
    {
      v4 = 0;
      *(_QWORD *)(a1 + 8) = v16;
    }
    else
    {
      v4 = -1073741823;
    }
    v12 = v14;
  }
  else
  {
    v4 = -1073741801;
  }
  if ( v12 )
    PopThreadGuardedObject((char *)v12 + 48);
  REGION::vDeleteREGION(v12);
  v14 = 0LL;
  if ( v15 == 1 )
    RGNOBJ::vDeleteRGNOBJ((__int16 **)&v14);
  return v4;
}
