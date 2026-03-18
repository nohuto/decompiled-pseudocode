/*
 * XREFs of ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x18011C7F0
 * Callers:
 *     ??1CGeometry2D@@MEAA@XZ @ 0x1800F8B64 (--1CGeometry2D@@MEAA@XZ.c)
 *     ?OnChanged@CMeshGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18010B8E0 (-OnChanged@CMeshGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CGeometry2DGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18011C7D0 (-OnChanged@CGeometry2DGroup@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x18011C864 (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ?OnChanged@CGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18011CA80 (-OnChanged@CGeometry2D@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CGeometry2D::FreeCaches(CGeometry2D *this)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 6));
  *((_QWORD *)this + 6) = 0LL;
}
