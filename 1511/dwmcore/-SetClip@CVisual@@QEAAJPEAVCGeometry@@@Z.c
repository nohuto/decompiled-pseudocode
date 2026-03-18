/*
 * XREFs of ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18004D54C
 * Callers:
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x180047FB4 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z.c)
 *     ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x18010F7D0 (-SetClip@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180048D70 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180048E40 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180064C00 (-IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x180065450 (-IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CVisual::SetClip(const struct CGeometry **this, struct CGeometry *a2)
{
  unsigned int v2; // esi
  bool v5; // bp
  bool (__fastcall *v6)(CRgnGeometry *__hidden, const struct CGeometry *); // rsi
  bool IsSameGeometry; // al
  int v8; // eax

  v2 = 0;
  if ( a2 != this[44] )
  {
    v5 = 0;
    if ( a2 )
    {
      v6 = *(bool (__fastcall **)(CRgnGeometry *__hidden, const struct CGeometry *))(*(_QWORD *)a2 + 104LL);
      if ( v6 == CRgnGeometry::IsSameGeometry )
      {
        IsSameGeometry = CRgnGeometry::IsSameGeometry(a2, this[44]);
      }
      else if ( v6 == CRectangleGeometry::IsSameGeometry )
      {
        IsSameGeometry = CRectangleGeometry::IsSameGeometry(a2, this[44]);
      }
      else
      {
        IsSameGeometry = v6(a2, this[44]);
      }
      v5 = IsSameGeometry;
    }
    v8 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x7C8u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[44]);
      this[44] = a2;
      if ( !v5 )
      {
        CVisual::PropagateFlags((struct CVisual *)this, 1, 1, 0, 0, 0, 0);
        CVisual::OnTransformChanged((CVisual *)this);
        CVisual::OnClipChanged((CVisual *)this);
      }
    }
  }
  return v2;
}
