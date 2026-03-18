/*
 * XREFs of ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x18015E220
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18015DE28 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SetAdvancedDirectFlipState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        struct IRenderTargetBitmap *a2,
        struct IRenderTargetDisplay *a3,
        struct CRegionWrapper *a4)
{
  __int64 v4; // rbp
  __int64 v9; // r14
  __int64 v10; // r14
  int v11; // eax
  unsigned int v12; // ebx

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 1));
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 2));
  *((_QWORD *)this + 2) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)a3 + 8LL))(a3);
  v10 = *((_QWORD *)this + 3);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)this + 3));
  *((_QWORD *)this + 3) = a4;
  if ( a4 )
    (**(void (__fastcall ***)(struct CRegionWrapper *))a4)(a4);
  v11 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveOverdrawContent((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 472));
  v12 = v11;
  if ( v11 >= 0 )
    *((_BYTE *)this + 32) = 1;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC1u);
  return v12;
}
