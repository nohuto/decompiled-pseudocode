/*
 * XREFs of ?Show@CCursorVisual@@QEAAXXZ @ 0x18012128C
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18000CDD0 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCursorVisual::Show(CCursorVisual *this)
{
  CVisual **v1; // rax
  CVisual *v3; // rsi
  struct CEffect *EffectInternal; // rax
  CBitmapOfDeviceBitmaps *v5; // rdi
  __int64 v6; // rcx
  bool v7; // al

  v1 = (CVisual **)*((_QWORD *)this + 1);
  v3 = *v1;
  if ( *v1 )
  {
    EffectInternal = CVisual::GetEffectInternal(*v1);
    v5 = EffectInternal;
    if ( EffectInternal
      && (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
           EffectInternal,
           8LL) )
    {
      *((_QWORD *)this + 2) = v5;
      CBitmapOfDeviceBitmaps::AddRef(v5);
      v6 = *((_QWORD *)this + 2);
      if ( *(double *)(v6 + 136) == 0.0 )
      {
        *(_QWORD *)(v6 + 136) = 0x3FF0000000000000LL;
        CResource::NotifyOnChanged((_DWORD *)v6, 0, 0LL);
      }
      else if ( v6 )
      {
        CMILCOMBase::InternalRelease((CMILCOMBase *)v6);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
    v7 = (*((_BYTE *)v3 + 154) & 0x10) != 0;
    *((_BYTE *)v3 + 154) &= ~0x10u;
    *((_BYTE *)this + 24) = v7;
    *((_DWORD *)this + 7) = 1;
  }
}
