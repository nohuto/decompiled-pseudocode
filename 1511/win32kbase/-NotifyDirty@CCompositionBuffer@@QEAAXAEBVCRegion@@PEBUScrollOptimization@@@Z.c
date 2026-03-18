/*
 * XREFs of ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C003E808
 * Callers:
 *     ?UpdateActiveBufferDirtyRegion@CCompositionSurface@@IEAAJ_KPEAVCRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C003A024 (-UpdateActiveBufferDirtyRegion@CCompositionSurface@@IEAAJ_KPEAVCRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C003DC00 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002863C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003EA98 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00E13E0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
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

  v3 = (char *)this + 304;
  if ( *((_DWORD *)this + 76) )
  {
    CCompositionBuffer::AddScrollAsDirty(this, (CCompositionBuffer *)((char *)this + 304));
    *(_DWORD *)v3 = 0;
    *((_BYTE *)this + 332) = 1;
  }
  if ( a3 && *(_DWORD *)a3 )
  {
    if ( *((_BYTE *)this + 332) )
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
      CRegion::Combine(*((_QWORD *)this + 37), a2, 2LL);
      *((_BYTE *)this + 332) = 1;
    }
  }
}
