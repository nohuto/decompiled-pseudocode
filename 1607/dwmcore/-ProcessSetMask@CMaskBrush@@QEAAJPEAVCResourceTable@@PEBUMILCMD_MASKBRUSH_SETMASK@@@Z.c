/*
 * XREFs of ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x18010D748
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18003AAC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180158148 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 */

__int64 __fastcall CMaskBrush::ProcessSetMask(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_MASKBRUSH_SETMASK *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v5; // rsi
  unsigned int v6; // ebx
  int v7; // eax

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType == this[16] )
    return 0;
  if ( !ResourceWithoutType )
    goto LABEL_9;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
          ResourceWithoutType,
          80LL)
    && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v5 + 48LL))(v5, 84LL) )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x103u);
    return v6;
  }
  v7 = CResource::RegisterNotifier((CResource *)this, v5);
  v6 = v7;
  if ( v7 >= 0 )
  {
LABEL_9:
    CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
    this[16] = v5;
    CSpriteVisualContent::ReleasePrimitiveCaches((CSpriteVisualContent *)this);
    return 0;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x106u);
  return v6;
}
