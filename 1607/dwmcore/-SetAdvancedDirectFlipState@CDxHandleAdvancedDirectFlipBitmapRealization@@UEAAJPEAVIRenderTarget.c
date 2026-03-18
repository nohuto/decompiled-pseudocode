/*
 * XREFs of ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x18018FB60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x18018F7C4 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SetAdvancedDirectFlipState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        struct IRenderTargetBitmap *a2,
        struct IRenderTargetDisplay *a3,
        struct CRegionWrapper *a4)
{
  __int64 v6; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edi

  v6 = *((_QWORD *)this + 1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *((_QWORD *)this + 2) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)a3 + 8LL))(a3);
  v10 = *((_QWORD *)this + 3);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *((_QWORD *)this + 3) = a4;
  if ( a4 )
    (**(void (__fastcall ***)(struct CRegionWrapper *))a4)(a4);
  v11 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveOverdrawContent((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 432));
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xCEu);
  else
    *((_BYTE *)this + 32) = 1;
  return v12;
}
