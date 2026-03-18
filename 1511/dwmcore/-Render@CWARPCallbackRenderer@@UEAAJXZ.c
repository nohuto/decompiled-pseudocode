/*
 * XREFs of ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x180166480
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetShaderResourceViewNoRef@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800F4DA4 (-GetShaderResourceViewNoRef@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@.c)
 *     ?ReturnWARPCallbackRenderer@CD2DContext@@QEAAJPEAVCWARPCallbackRenderer@@@Z @ 0x180147E98 (-ReturnWARPCallbackRenderer@CD2DContext@@QEAAJPEAVCWARPCallbackRenderer@@@Z.c)
 */

__int64 __fastcall CWARPCallbackRenderer::Render(CWARPCallbackRenderer *this)
{
  int v1; // ebx
  __int64 v2; // r14
  __int64 v4; // rcx
  int ShaderResourceViewNoRef; // eax
  __int64 v6; // rcx
  int v7; // eax
  CMILRefCountBase *v8; // rcx
  CMILRefCountBase *v9; // rcx
  CD2DContext *v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  int v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+54h] [rbp-2Ch]
  int v17; // [rsp+58h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  __int128 v20; // [rsp+70h] [rbp-10h]

  v1 = 0;
  v2 = 0LL;
  v12 = 0LL;
  if ( *((_DWORD *)this + 22) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)this + 8);
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 8 * v2) + 64LL) & 0x3C) != 0 )
      {
        v12 = 0uLL;
        ShaderResourceViewNoRef = CCompositionSurfaceBitmap::GetShaderResourceViewNoRef(
                                    *(CCompositionSurfaceBitmap **)(*(_QWORD *)(v4 + 8 * v2) + 112LL),
                                    *((_QWORD *)this + 5),
                                    *((_DWORD *)this + 12),
                                    *((_DWORD *)this + 13),
                                    &v12);
        v1 = ShaderResourceViewNoRef;
        if ( ShaderResourceViewNoRef < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0x4Au);
          goto LABEL_16;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *))(**(_QWORD **)(*((_QWORD *)this + 3) + 560LL) + 64LL))(
          *(_QWORD *)(*((_QWORD *)this + 3) + 560LL),
          0LL,
          2LL,
          &v12);
      }
      v6 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v2);
      v16 = 0;
      v15 = 0;
      v19 = 0LL;
      v17 = 3840;
      v14 = v6 + 16;
      v18 = v6 + 48;
      v13 = 26;
      v20 = 0LL;
      v17 = *(_DWORD *)(v6 + 64);
      v16 = *(_DWORD *)(v6 + 68);
      if ( *(_BYTE *)(v6 + 352) )
        v19 = v6 + 72;
      if ( (*(_BYTE *)(v6 + 64) & 0x3C) != 0 )
        *(_QWORD *)&v20 = v6 + 120;
      v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 24LL))(*((_QWORD *)this + 4), &v13);
      v1 = v7;
      if ( v7 < 0 )
        break;
      v8 = *(CMILRefCountBase **)(*((_QWORD *)this + 8) + 8 * v2);
      if ( v8 )
      {
        CMILRefCountBase::Release(v8);
        *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v2) = 0LL;
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 22) )
        goto LABEL_16;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x4Fu);
LABEL_16:
    if ( v1 < 0 )
    {
      while ( (unsigned int)v2 < *((_DWORD *)this + 22) )
      {
        v9 = *(CMILRefCountBase **)(*((_QWORD *)this + 8) + 8 * v2);
        if ( v9 )
        {
          CMILRefCountBase::Release(v9);
          *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v2) = 0LL;
        }
        v2 = (unsigned int)(v2 + 1);
      }
    }
  }
  *((_DWORD *)this + 22) = 0;
  v10 = (CD2DContext *)*((_QWORD *)this + 3);
  *((_BYTE *)this + 56) = 0;
  CD2DContext::ReturnWARPCallbackRenderer(v10, this);
  return (unsigned int)v1;
}
