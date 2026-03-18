/*
 * XREFs of ?Show@CCursorVisual@@QEAAXXZ @ 0x18010AE48
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180094814 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CCursorVisual::Show(CCursorVisual *this)
{
  __int64 v2; // rbp
  CBitmapOfDeviceBitmaps *v3; // rsi
  __int64 v4; // rcx
  bool v5; // al

  v2 = **((_QWORD **)this + 1);
  if ( v2 )
  {
    v3 = *(CBitmapOfDeviceBitmaps **)(v2 + 392);
    if ( v3 && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v3 + 48LL))(*(_QWORD *)(v2 + 392), 8LL) )
    {
      *((_QWORD *)this + 2) = v3;
      CBitmapOfDeviceBitmaps::AddRef(v3);
      v4 = *((_QWORD *)this + 2);
      if ( *(double *)(v4 + 56) == 0.0 )
      {
        *(_QWORD *)(v4 + 56) = 0x3FF0000000000000LL;
        CResource::NotifyOnChanged((_DWORD *)v4, 0, 0LL);
      }
      else if ( v4 )
      {
        CMILCOMBase::InternalRelease((CMILCOMBase *)v4);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
    v5 = (*(_BYTE *)(v2 + 74) & 0x10) != 0;
    *(_BYTE *)(v2 + 74) &= ~0x10u;
    *((_BYTE *)this + 24) = v5;
    *((_DWORD *)this + 7) = 1;
  }
}
