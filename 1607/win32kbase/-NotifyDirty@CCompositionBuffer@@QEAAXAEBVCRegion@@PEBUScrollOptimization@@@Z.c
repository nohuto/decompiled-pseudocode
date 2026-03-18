/*
 * XREFs of ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C001E974
 * Callers:
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBVCRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C001B470 (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBVCRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C001DA40 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C001EC8C (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002D344 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00F38D8 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 */

void __fastcall CCompositionBuffer::NotifyDirty(
        CCompositionBuffer *this,
        const struct CRegion *a2,
        const struct ScrollOptimization *a3)
{
  char *v3; // r14
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this + 264;
  if ( *((_DWORD *)this + 66) )
  {
    CCompositionBuffer::AddScrollAsDirty(this, (CCompositionBuffer *)((char *)this + 264));
    *(_DWORD *)v3 = 0;
    *((_BYTE *)this + 292) = 1;
  }
  if ( a3 && *(_DWORD *)a3 )
  {
    if ( *((_BYTE *)this + 292) )
    {
      CCompositionBuffer::AddScrollAsDirty(this, a3);
    }
    else
    {
      *(_OWORD *)v3 = *(_OWORD *)a3;
      *((_QWORD *)v3 + 2) = *((_QWORD *)a3 + 2);
      *((_DWORD *)v3 + 6) = *((_DWORD *)a3 + 6);
    }
  }
  v7 = *((_DWORD *)a2 + 1);
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 || v8 == 1 && (v9 = *((_QWORD *)a2 + 1), (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v9) != 1) )
    {
      CRegion::Combine(*((_QWORD *)this + 32), a2, 2LL);
      *((_BYTE *)this + 292) = 1;
    }
  }
}
