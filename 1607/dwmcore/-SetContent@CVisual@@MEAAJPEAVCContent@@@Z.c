/*
 * XREFs of ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180053710
 * Callers:
 *     ?ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x18004F4E0 (-ProcessSetContent@CVisual@@UEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180109688 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x1801391F0 (-SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateRegistrationAsBackdropBlur@CVisual@@QEAAXXZ @ 0x180050A88 (-UpdateRegistrationAsBackdropBlur@CVisual@@QEAAXXZ.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180050D9C (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@AEAAXXZ @ 0x180050DE0 (-ClearContentTreeDataCaches@CVisual@@AEAAXXZ.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180051150 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXXZ @ 0x180053838 (-NotifyVisualTreeListeners@CVisual@@IEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  unsigned int v2; // esi
  int v5; // eax
  struct CResource *v6; // rcx
  char (__fastcall *v7)(CVisual *); // rax
  char HasSingleD2DBitmapOrPrimitiveGroupInternal; // al
  struct CResource *i; // rdi
  char v10; // al
  char v11; // al

  v2 = 0;
  if ( a2 != this[38] )
  {
    CVisual::ClearContentTreeDataCaches((CVisual *)this);
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x236u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[38]);
      v6 = *this;
      this[38] = a2;
      v7 = (char (__fastcall *)(CVisual *))*((_QWORD *)v6 + 34);
      if ( v7 == CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal )
        HasSingleD2DBitmapOrPrimitiveGroupInternal = CVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal((CVisual *)this);
      else
        HasSingleD2DBitmapOrPrimitiveGroupInternal = v7((CVisual *)this);
      *((_BYTE *)this + 152) &= ~0x80u;
      *((_BYTE *)this + 152) |= HasSingleD2DBitmapOrPrimitiveGroupInternal << 7;
      CVisual::UpdateRegistrationAsBackdropBlur((CVisual *)this);
      CVisual::NotifyVisualTreeListeners((CVisual *)this);
      CVisual::ResetVisibleRegionForAll((CVisual *)this);
      for ( i = this[18]; i; i = (struct CResource *)*((_QWORD *)i + 18) )
      {
        v10 = *((_BYTE *)i + 152);
        if ( (v10 & 1) != 0 && (v10 & 2) != 0 )
          break;
        *((_BYTE *)i + 544) |= 1u;
        *((_BYTE *)i + 152) = v10 | 3;
        CVisual::NotifyVisualTreeListeners(i);
      }
      *((_BYTE *)this + 152) |= 5u;
      v11 = *((_BYTE *)this + 152);
      *((_BYTE *)this + 544) |= 1u;
      *((_BYTE *)this + 152) = v11 ^ (v11 ^ (8 * ((v11 & 8) != 0))) & 8;
    }
  }
  return v2;
}
