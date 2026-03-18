/*
 * XREFs of ?GetSnapshotBitmapSource@CCachedVisualImage@@AEAAJPEAPEAVIBitmapSource@@@Z @ 0x18000EF30
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::GetSnapshotBitmapSource(CCachedVisualImage *this, struct IBitmapSource **a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 42) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(**(_QWORD **)(*((_QWORD *)this + 18) + 8LL) + 176LL))(
           *(_QWORD *)(*((_QWORD *)this + 18) + 8LL),
           a2);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x3D7u);
  }
  return v2;
}
