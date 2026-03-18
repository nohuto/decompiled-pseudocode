/*
 * XREFs of ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x18010B19C
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x18010B3D0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x180053C7C (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCSnapshot@@@Z @ 0x1800E396C (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCSnapshot@@@Z.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II@Z @ 0x18010B9B0 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II@Z.c)
 */

__int64 __fastcall CSnapshot::CreateCVI(struct CComposition **this, struct CVisual *a2)
{
  CCachedVisualImage *v4; // rax
  CCachedVisualImage *v5; // rbx
  unsigned int v6; // edi
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  int v9; // eax
  int v10; // eax

  v4 = (CCachedVisualImage *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               320LL);
  if ( v4 )
    v5 = CCachedVisualImage::CCachedVisualImage(v4, this[2]);
  else
    v5 = 0LL;
  if ( v5 )
  {
    CBitmapOfDeviceBitmaps::AddRef((CCachedVisualImage *)((char *)v5 + 16));
    v7 = *((_DWORD *)this + 10);
    if ( v7
      && (v8 = *((_DWORD *)this + 11)) != 0
      && (v9 = CCachedVisualImage::SetForDCompSnapshot(v5, a2, v7, v8), v6 = v9, v9 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x34u);
    }
    else
    {
      v10 = CComposition::RegisterSnapshotToPerform(this[2], (struct CSnapshot *)this);
      v6 = v10;
      if ( v10 >= 0 )
      {
        this[6] = v5;
        v5 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x38u);
      }
    }
    if ( v5 )
      CMILCOMBase::InternalRelease((CCachedVisualImage *)((char *)v5 + 16));
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Du);
  }
  return v6;
}
