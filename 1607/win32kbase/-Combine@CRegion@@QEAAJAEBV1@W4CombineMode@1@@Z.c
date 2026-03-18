/*
 * XREFs of ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C001EC8C
 * Callers:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C001E974 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C004B520 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00F38D8 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?SetEmpty@CRegion@@QEAAXXZ @ 0x1C001EA0C (-SetEmpty@CRegion@@QEAAXXZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C001EA34 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C001EDEC (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C002D9C0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002E230 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0034664 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall CRegion::Combine(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // edi
  int v8; // edx
  __int64 v9; // rbx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

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
        goto LABEL_34;
      if ( a3 == 2 )
        goto LABEL_7;
      if ( a3 <= 2 )
        return (unsigned int)-1073741811;
      if ( a3 > 4 )
      {
        if ( a3 != 5 )
          return (unsigned int)-1073741811;
LABEL_34:
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
  v13 = *(_QWORD *)(a2 + 8);
  if ( !v13 || (unsigned int)(v6 - 1) > 4 )
    return (unsigned int)-1073741811;
  v12 = *(_QWORD *)(a1 + 8);
  v9 = v12;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
  if ( v9 && v11[0] )
  {
    if ( (unsigned int)RGNOBJ::bMerge(
                         (RGNOBJ *)v11,
                         (struct RGNOBJ *)&v12,
                         (struct RGNOBJ *)&v13,
                         *((_BYTE *)&gafjRgnOp + v6)) )
    {
      RGNOBJ::vSwap((RGNOBJ *)v11, (struct RGNOBJ *)&v12);
      v4 = 0;
      *(_QWORD *)(a1 + 8) = v12;
    }
    else
    {
      v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741801;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
  return v4;
}
