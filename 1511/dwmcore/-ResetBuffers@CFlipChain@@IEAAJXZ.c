/*
 * XREFs of ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x180125C10
 * Callers:
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x180125BC4 (-Reset@CFlipChain@@IEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18008B1F0 (-RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CFlipChain::ResetBuffers(CFlipChain *this)
{
  unsigned int v1; // ebp
  unsigned int i; // ebx
  int v4; // eax
  CMILCOMBase *v5; // rcx
  __int64 v6; // rax
  unsigned int j; // ebx
  __int64 v8; // rcx
  __int64 v9; // rsi

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 38); ++i )
  {
    v4 = CBitmapOfDeviceBitmaps::RemoveResourceNotifier(
           (CBitmapOfDeviceBitmaps *)(*(_QWORD *)(*((_QWORD *)this + 16) + 16LL * i) + 256LL),
           (CFlipChain *)((char *)this + 72));
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x85u);
    v5 = *(CMILCOMBase **)(*((_QWORD *)this + 16) + 16LL * i);
    if ( v5 )
    {
      CMILCOMBase::InternalRelease(v5);
      *(_QWORD *)(*((_QWORD *)this + 16) + 16LL * i) = 0LL;
    }
  }
  *((_DWORD *)this + 38) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 16, 0x10u);
  if ( *((_BYTE *)this + 274) )
  {
    v6 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 274) = 0;
    --*(_DWORD *)(v6 + 208);
  }
  for ( j = 0; j < *((_DWORD *)this + 60); ++j )
  {
    v8 = 88LL * j;
    *(_DWORD *)(*((_QWORD *)this + 27) + v8 + 20) = 0;
    memset_0((void *)(*((_QWORD *)this + 27) + 24LL + v8), 0, 0x40uLL);
  }
  v9 = *((_QWORD *)this + 8);
  if ( v9 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  return v1;
}
