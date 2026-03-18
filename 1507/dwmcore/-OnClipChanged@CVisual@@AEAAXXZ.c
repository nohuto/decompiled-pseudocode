/*
 * XREFs of ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180036410
 * Callers:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180034C00 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180036070 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::OnClipChanged(CVisual *this)
{
  _QWORD **v1; // rcx
  _QWORD *i; // rax

  *((_QWORD *)this + 85) = 0LL;
  v1 = (_QWORD **)((char *)this + 432);
  for ( i = *v1; i != v1; i = (_QWORD *)*i )
    *(i - 4) = 0LL;
}
