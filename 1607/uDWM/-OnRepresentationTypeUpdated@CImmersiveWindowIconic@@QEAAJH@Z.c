/*
 * XREFs of ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x18007AC74
 * Callers:
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x18007DE78 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x180079BF4 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18007AD60 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::OnRepresentationTypeUpdated(CImmersiveWindowIconic *this, int a2)
{
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF

  CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 27),
    this,
    a2,
    *((enum DEVICE_SCALE_FACTOR *)this + 75),
    *((_BYTE *)this + 304),
    (enum IconicRepresentationType *)&v7,
    0LL);
  LOBYTE(v3) = 1;
  v4 = CImmersiveWindowIconic::SetRepresentationType(this, v7, v3);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0xE6u);
  return v5;
}
