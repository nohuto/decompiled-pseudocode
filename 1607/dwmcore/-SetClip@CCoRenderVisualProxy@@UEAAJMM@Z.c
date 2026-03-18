/*
 * XREFs of ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x180125CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180050630 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??0CRectangleGeometry@@IEAA@PEAVCComposition@@@Z @ 0x180095DC8 (--0CRectangleGeometry@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetClip(CCoRenderVisualProxy *this, float a2, float a3)
{
  unsigned int v3; // edi
  CBitmapOfDeviceBitmaps *v4; // rbx
  CRectangleGeometry *v6; // rax
  int v7; // eax
  __int64 v8; // rcx

  v3 = 0;
  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 296LL) )
    goto LABEL_8;
  v6 = (CRectangleGeometry *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               224LL);
  if ( v6 )
    v4 = CRectangleGeometry::CRectangleGeometry(v6, *(struct CComposition **)(*((_QWORD *)this + 3) + 16LL));
  if ( !v4 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x18Du);
    return v3;
  }
  CBitmapOfDeviceBitmaps::AddRef(v4);
  v7 = CVisual::SetClip(*((CVisual **)this + 3), v4);
  v3 = v7;
  if ( v7 >= 0 )
  {
LABEL_8:
    v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 296LL);
    *(float *)(v8 + 184) = a2;
    *(float *)(v8 + 188) = a3;
    CResource::NotifyOnChanged((_DWORD *)v8, 0, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x18Fu);
  }
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  return v3;
}
