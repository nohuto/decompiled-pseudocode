/*
 * XREFs of ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x1801422F4
 * Callers:
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x1801422A8 (-Reset@CFlipChain@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180093F40 (-RemoveResourceNotifier@CBitmapOfDeviceBitmaps@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipChain::ResetBuffers(CFlipChain *this)
{
  unsigned int v1; // esi
  unsigned int i; // edi
  int v4; // eax
  CMILCOMBase *v5; // rcx
  __int64 v6; // rax
  unsigned int j; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 56); ++i )
  {
    v4 = CBitmapOfDeviceBitmaps::RemoveResourceNotifier(
           (CBitmapOfDeviceBitmaps *)(*(_QWORD *)(*((_QWORD *)this + 25) + 16LL * i) + 256LL),
           (CFlipChain *)((char *)this + 144));
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x85u);
    v5 = *(CMILCOMBase **)(*((_QWORD *)this + 25) + 16LL * i);
    if ( v5 )
    {
      CMILCOMBase::InternalRelease(v5);
      *(_QWORD *)(*((_QWORD *)this + 25) + 16LL * i) = 0LL;
    }
  }
  *((_DWORD *)this + 56) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 200, 0x10u);
  if ( *((_BYTE *)this + 346) )
  {
    v6 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 346) = 0;
    --*(_DWORD *)(v6 + 208);
  }
  for ( j = 0; j < *((_DWORD *)this + 78); ++j )
  {
    v8 = 88LL * j;
    *(_DWORD *)(*((_QWORD *)this + 36) + v8 + 20) = 0;
    memset_0((void *)(*((_QWORD *)this + 36) + 24LL + v8), 0, 0x40uLL);
  }
  v9 = *((_QWORD *)this + 17);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 17) = 0LL;
  }
  return v1;
}
