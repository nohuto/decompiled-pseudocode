/*
 * XREFs of ?GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV?$CPtrArray@VCResource@@@@PEA_N3@Z @ 0x1800096F8
 * Callers:
 *     ?GetVisualListenersInfo@CCompositionSurfaceBitmap@@UEAAXPEA_N0@Z @ 0x18000C0B0 (-GetVisualListenersInfo@CCompositionSurfaceBitmap@@UEAAXPEA_N0@Z.c)
 *     ?GetVisualListenersInfo@CSurfaceBrush@@UEAAXPEA_N0@Z @ 0x180122230 (-GetVisualListenersInfo@CSurfaceBrush@@UEAAXPEA_N0@Z.c)
 *     ?GetVisualListenersInfo@CEffectBrush@@UEAAXPEA_N0@Z @ 0x180122F00 (-GetVisualListenersInfo@CEffectBrush@@UEAAXPEA_N0@Z.c)
 * Callees:
 *     ?HasSecondaryRepresentations@CVisual@@QEAA_NXZ @ 0x1800090F4 (-HasSecondaryRepresentations@CVisual@@QEAA_NXZ.c)
 *     _lambda_308cd4f79b13f967c4e452789d4c7e8e_::_helper_func_cdecl_ @ 0x1800096A0 (_lambda_308cd4f79b13f967c4e452789d4c7e8e_--_helper_func_cdecl_.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180048660 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 */

char __fastcall GetVisualListenersInfoImpl(CRenderTarget *this, __int64 *a2, char *a3, char *a4)
{
  __int64 v4; // rdi
  char v5; // r10
  unsigned int i; // ebp
  CVisual *v11; // rbx
  void (__fastcall ***v12)(_QWORD, char *, char *); // rax
  __int64 (__fastcall *v13)(CVisual *, __int64); // rsi
  char v14; // al
  char result; // al
  char v16; // [rsp+68h] [rbp+10h] BYREF
  char v17; // [rsp+70h] [rbp+18h] BYREF

  v4 = *a2;
  v5 = 0;
  v16 = *a3;
  v17 = 0;
  if ( (v4 & 2) != 0 )
    v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v4) = v4 & 1;
  for ( i = 0; i < (unsigned int)v4; ++i )
  {
    v11 = (CVisual *)CPtrArrayBase::operator[](a2, i);
    if ( this == (CRenderTarget *)lambda_308cd4f79b13f967c4e452789d4c7e8e_::_helper_func_cdecl_ )
      v12 = (void (__fastcall ***)(_QWORD, char *, char *))lambda_308cd4f79b13f967c4e452789d4c7e8e_::_helper_func_cdecl_((__int64)v11);
    else
      v12 = (void (__fastcall ***)(_QWORD, char *, char *))((__int64 (__fastcall *)(CVisual *))this)(v11);
    if ( v12 )
    {
      (**v12)(v12, &v16, &v17);
      v5 = v17;
      if ( v17 )
        break;
    }
    else
    {
      v13 = *(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v11 + 48LL);
      if ( (char *)v13 == (char *)CVisual::IsOfType )
        v14 = CVisual::IsOfType(v11, 31LL);
      else
        v14 = v13(v11, 31LL);
      if ( v14 )
      {
        if ( v16 || (v16 = 1, CVisual::HasSecondaryRepresentations(v11)) )
        {
          v5 = 1;
          break;
        }
      }
      v5 = v17;
    }
  }
  result = v16;
  *a3 = v16;
  *a4 = v5;
  return result;
}
