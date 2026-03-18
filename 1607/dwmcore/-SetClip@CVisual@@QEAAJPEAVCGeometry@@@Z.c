/*
 * XREFs of ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180050630
 * Callers:
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x18004F290 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z.c)
 *     ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x180125CF0 (-SetClip@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x18002FA90 (-IsSameGeometry@CRgnGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180050F44 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180051090 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x1800960D0 (-IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetClip(CVisual *this, struct CGeometry *a2)
{
  unsigned int v3; // esi
  __m128i *v4; // rdx
  char v6; // bp
  char (__fastcall *v7)(CRgnGeometry *, __m128i *); // rax
  char IsSameGeometry; // al
  int v9; // eax

  v3 = 0;
  v4 = (__m128i *)*((_QWORD *)this + 37);
  if ( a2 != (struct CGeometry *)v4 )
  {
    v6 = 0;
    if ( a2 )
    {
      v7 = *(char (__fastcall **)(CRgnGeometry *, __m128i *))(*(_QWORD *)a2 + 112LL);
      if ( v7 == CRgnGeometry::IsSameGeometry )
      {
        IsSameGeometry = CRgnGeometry::IsSameGeometry(a2, v4);
      }
      else if ( (char *)v7 == (char *)CRectangleGeometry::IsSameGeometry )
      {
        IsSameGeometry = CRectangleGeometry::IsSameGeometry(a2, (const struct CGeometry *)v4);
      }
      else
      {
        IsSameGeometry = ((__int64 (__fastcall *)(struct CGeometry *))v7)(a2);
      }
      v6 = IsSameGeometry;
    }
    v9 = CResource::RegisterNotifier(this, a2);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8C6u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 37));
      *((_QWORD *)this + 37) = a2;
      if ( !v6 )
      {
        CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
        CVisual::OnTransformChanged(this);
        CVisual::OnClipChanged(this);
      }
    }
  }
  return v3;
}
