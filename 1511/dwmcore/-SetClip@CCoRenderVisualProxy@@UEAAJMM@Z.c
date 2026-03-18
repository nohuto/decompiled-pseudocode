/*
 * XREFs of ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x18010F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18004D54C (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetClip(CCoRenderVisualProxy *this, float a2, float a3)
{
  unsigned int v3; // edi
  CBitmapOfDeviceBitmaps *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v3 = 0;
  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 352LL) )
    goto LABEL_9;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         152LL);
  v4 = (CBitmapOfDeviceBitmaps *)v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = v7;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_DWORD *)(v6 + 32) = 0;
    *(_DWORD *)(v6 + 32) |= 1u;
    *(_QWORD *)(v6 + 96) = 0LL;
    *(_QWORD *)v6 = &CRectangleGeometry::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x18Du);
    return v3;
  }
  CBitmapOfDeviceBitmaps::AddRef(v4);
  v8 = CVisual::SetClip(*((const struct CGeometry ***)this + 3), v4);
  v3 = v8;
  if ( v8 >= 0 )
  {
LABEL_9:
    v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 352LL);
    *(float *)(v9 + 112) = a2;
    *(float *)(v9 + 116) = a3;
    CResource::NotifyOnChanged((_DWORD *)v9, 0, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x18Fu);
  }
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  return v3;
}
