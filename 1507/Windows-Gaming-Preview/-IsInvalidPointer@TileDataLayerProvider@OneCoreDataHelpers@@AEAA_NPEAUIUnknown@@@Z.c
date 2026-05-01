/*
 * XREFs of ?IsInvalidPointer@TileDataLayerProvider@OneCoreDataHelpers@@AEAA_NPEAUIUnknown@@@Z @ 0x18002540C
 * Callers:
 *     ?GetVisualElementEnumerator@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUIVisualElementEnumerator@@@Z @ 0x180024EA0 (-GetVisualElementEnumerator@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUIVisualElement.c)
 *     ?GetTileManager@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUITileManager@@@Z @ 0x180025070 (-GetTileManager@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUITileManager@@@Z.c)
 *     ?GetVisualElementEventDispatcher@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUIVisualElementEventDispatcher@@@Z @ 0x180025240 (-GetVisualElementEventDispatcher@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUIVisualEl.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

char __fastcall OneCoreDataHelpers::TileDataLayerProvider::IsInvalidPointer(
        OneCoreDataHelpers::TileDataLayerProvider *this,
        struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v4; // eax
  int v5; // edx
  bool v6; // di
  __int64 v7; // rsi
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 1;
  if ( (*((_BYTE *)this + 48) & 2) != 0 )
    return 0;
  lpVtbl = a2->lpVtbl;
  v8 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &v8);
  v6 = v4 == -2147417848
    || (unsigned int)(v4 + 2147023179) <= 9 && (v5 = 545, _bittest(&v5, v4 + 2147023179))
    || v4 == -2147418094
    || v4 == -2147418105;
  v7 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
