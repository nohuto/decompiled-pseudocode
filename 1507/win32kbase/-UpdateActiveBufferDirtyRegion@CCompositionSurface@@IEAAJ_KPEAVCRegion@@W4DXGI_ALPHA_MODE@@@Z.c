/*
 * XREFs of ?UpdateActiveBufferDirtyRegion@CCompositionSurface@@IEAAJ_KPEAVCRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C0048A48
 * Callers:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C004CDF0 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048DA8 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C004A2C0 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::UpdateActiveBufferDirtyRegion(
        CCompositionSurface *a1,
        __int64 a2,
        const struct CRegion *a3)
{
  unsigned int v4; // edi
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v6; // rdx
  struct CCompositionBuffer *v7; // rbx
  __int128 v8; // xmm1
  __int128 v10; // [rsp+20h] [rbp-B8h]
  __int128 v11; // [rsp+40h] [rbp-98h]
  __int128 v12; // [rsp+50h] [rbp-88h]
  __int128 v13; // [rsp+60h] [rbp-78h]
  __int128 v14; // [rsp+70h] [rbp-68h]
  __int128 v15; // [rsp+80h] [rbp-58h]
  __int128 v16; // [rsp+90h] [rbp-48h]
  __int128 v17; // [rsp+A0h] [rbp-38h]
  __int128 v18; // [rsp+B0h] [rbp-28h]
  __int64 v19; // [rsp+C0h] [rbp-18h]

  v4 = 0;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(a1);
  v7 = ActiveBuffer;
  if ( ActiveBuffer
    && *((_QWORD *)ActiveBuffer + 1) == v6
    && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
  {
    v10 = *(_OWORD *)((char *)v7 + 40);
    v11 = *(_OWORD *)((char *)v7 + 72);
    v12 = *(_OWORD *)((char *)v7 + 88);
    v13 = *(_OWORD *)((char *)v7 + 104);
    v14 = *(_OWORD *)((char *)v7 + 120);
    v15 = *(_OWORD *)((char *)v7 + 136);
    v16 = *(_OWORD *)((char *)v7 + 152);
    v17 = *(_OWORD *)((char *)v7 + 168);
    v18 = *(_OWORD *)((char *)v7 + 184);
    v19 = *((_QWORD *)v7 + 25);
    LODWORD(v10) = 1;
    v8 = *(_OWORD *)((char *)v7 + 56);
    *(_OWORD *)((char *)v7 + 40) = v10;
    *(_OWORD *)((char *)v7 + 56) = v8;
    *(_OWORD *)((char *)v7 + 72) = v11;
    *(_OWORD *)((char *)v7 + 88) = v12;
    *(_OWORD *)((char *)v7 + 104) = v13;
    *(_OWORD *)((char *)v7 + 120) = v14;
    *(_OWORD *)((char *)v7 + 136) = v15;
    *(_OWORD *)((char *)v7 + 152) = v16;
    *(_OWORD *)((char *)v7 + 168) = v17;
    *(_OWORD *)((char *)v7 + 184) = v18;
    *((_QWORD *)v7 + 25) = v19;
    CCompositionBuffer::NotifyDirty(v7, a3, 0LL);
    *((_BYTE *)v7 + 33) = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
