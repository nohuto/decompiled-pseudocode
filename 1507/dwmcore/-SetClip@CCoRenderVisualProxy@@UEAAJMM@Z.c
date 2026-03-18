/*
 * XREFs of ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x1800F5B30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180034C00 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetClip(CCoRenderVisualProxy *this, float a2, float a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v3 = 0;
  v4 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 368LL) )
    goto LABEL_9;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         144LL);
  v4 = v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    *(_DWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = v7;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_DWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 40) |= 1u;
    *(_QWORD *)v6 = &CRectangleGeometry::`vftable'{for `IExpressionSource'};
    *(_QWORD *)(v6 + 8) = &CRectangleGeometry::`vftable'{for `CGeometry'};
    *(_DWORD *)(v6 + 40) |= 1u;
    *(_QWORD *)(v6 + 88) = 0LL;
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
  CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(v4 + 8));
  v8 = CVisual::SetClip(*((struct CResource ***)this + 3), (struct CGeometry *)(v4 + 8));
  v3 = v8;
  if ( v8 >= 0 )
  {
LABEL_9:
    v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 368LL);
    if ( v9 )
      v9 -= 8LL;
    *(float *)(v9 + 104) = a2;
    *(float *)(v9 + 108) = a3;
    CResource::NotifyOnChanged((_DWORD *)(v9 + 8), 0, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x18Fu);
  }
  if ( v4 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v4 + 8));
  return v3;
}
