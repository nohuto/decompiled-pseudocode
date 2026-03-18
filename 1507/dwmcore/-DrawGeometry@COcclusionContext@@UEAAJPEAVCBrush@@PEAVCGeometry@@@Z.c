/*
 * XREFs of ?DrawGeometry@COcclusionContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z @ 0x180020450
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?GetCachedBrushCVINoRef@CImageBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18000ED64 (-GetCachedBrushCVINoRef@CImageBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CSolidColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180083E60 (-IsOfType@CSolidColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::DrawGeometry(COcclusionContext *this, struct CBrush *a2, struct CGeometry *a3)
{
  __int64 (__fastcall *v5)(struct CBrush *, __int64, struct CGeometry *); // rdi
  char v6; // al
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-18h]

  v5 = *(__int64 (__fastcall **)(struct CBrush *, __int64, struct CGeometry *))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v5 == (char *)CSolidColorBrush::IsOfType )
    v6 = CSolidColorBrush::IsOfType(a2, 71LL, a3);
  else
    v6 = v5(a2, 71LL, a3);
  if ( v6 )
  {
    CachedBrushCVINoRef = CImageBrush::GetCachedBrushCVINoRef(a2);
    if ( CachedBrushCVINoRef )
    {
      v9 = *((_QWORD *)this + 63);
      *((_QWORD *)&v15 + 1) = CachedBrushCVINoRef;
      v10 = *((unsigned int *)this + 188);
      *(_QWORD *)&v15 = v9;
      LOBYTE(v16) = 1;
      v11 = v10 + 1;
      if ( (int)v10 + 1 < (unsigned int)v10 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else if ( v11 <= *((_DWORD *)this + 187) )
      {
        v13 = 5 * v10;
        v14 = *((_QWORD *)this + 91);
        *(_OWORD *)(v14 + 8 * v13) = v15;
        *(_OWORD *)(v14 + 8 * v13 + 16) = v16;
        *(_QWORD *)(v14 + 8 * v13 + 32) = v17;
        *((_DWORD *)this + 188) = v11;
      }
      else
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 728, 40LL, 1LL, &v15);
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
      }
    }
  }
  return 0LL;
}
