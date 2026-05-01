/*
 * XREFs of ?IsInvalidPointer@TileDataLayerProvider@OneCoreDataHelpers@@AEAA_NPEAUIUnknown@@@Z @ 0x1800259F4
 * Callers:
 *     ?GetVisualElementEnumerator@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUIVisualElementEnumerator@@@Z @ 0x180025490 (-GetVisualElementEnumerator@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUIVisualElement.c)
 *     ?GetTileManager@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUITileManager@@@Z @ 0x180025660 (-GetTileManager@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUITileManager@@@Z.c)
 *     ?GetVisualElementEventDispatcher@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUIVisualElementEventDispatcher@@@Z @ 0x180025830 (-GetVisualElementEventDispatcher@TileDataLayerProvider@OneCoreDataHelpers@@UEAAJPEAPEAUIVisualEl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

char __fastcall OneCoreDataHelpers::TileDataLayerProvider::IsInvalidPointer(
        OneCoreDataHelpers::TileDataLayerProvider *this,
        struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v4; // eax
  int v5; // edx
  bool v6; // bl
  __int64 v7; // rcx
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
