/*
 * XREFs of ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180048E40
 * Callers:
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180048A8C (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18004D54C (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::OnClipChanged(CVisual *this)
{
  _QWORD **v1; // rcx
  _QWORD *i; // rax

  *((_QWORD *)this + 83) = 0LL;
  v1 = (_QWORD **)((char *)this + 416);
  for ( i = *v1; i != v1; i = (_QWORD *)*i )
    *(i - 4) = 0LL;
}
