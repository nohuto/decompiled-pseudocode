/*
 * XREFs of ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180143348
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x18010C0C0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x180033F08 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCSnapshot@@@Z @ 0x180116E70 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCSnapshot@@@Z.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x180144108 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z.c)
 */

__int64 __fastcall CSnapshot::CreateCVI(CSnapshot *this, struct CVisual *a2)
{
  CCachedVisualImage *v4; // rax
  CCachedVisualImage *v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  int v9; // eax
  int v10; // eax

  v4 = (CCachedVisualImage *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               408LL);
  if ( v4 )
    v5 = CCachedVisualImage::CCachedVisualImage(v4, *((struct CComposition **)this + 2));
  else
    v5 = 0LL;
  if ( v5 )
  {
    CBitmapOfDeviceBitmaps::AddRef((CCachedVisualImage *)((char *)v5 + 16));
    v7 = *((_DWORD *)this + 28);
    if ( v7
      && (v8 = *((_DWORD *)this + 29)) != 0
      && (v9 = CCachedVisualImage::SetForDCompSnapshot(v5, a2, v7, v8, *((_BYTE *)this + 120)), v6 = v9, v9 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x34u);
    }
    else
    {
      v10 = CComposition::RegisterSnapshotToPerform(*((CComposition **)this + 2), this);
      v6 = v10;
      if ( v10 >= 0 )
      {
        *((_QWORD *)this + 16) = v5;
        return v6;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x38u);
    }
    CMILCOMBase::InternalRelease((CCachedVisualImage *)((char *)v5 + 16));
    return v6;
  }
  v6 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Du);
  return v6;
}
