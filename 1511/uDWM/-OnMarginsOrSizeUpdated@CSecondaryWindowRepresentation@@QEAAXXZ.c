/*
 * XREFs of ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180017558
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180017220 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18001E9EC (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030110 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180017D50 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180018C00 (-OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D5B8 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800339E0 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(CSecondaryWindowRepresentation *this)
{
  CWindowData *v1; // rdx
  CWindowData *v3; // rdi
  int v4; // ecx
  _DWORD *v5; // rdx
  __int128 v6; // xmm0
  __int64 v7; // rax
  CTopLevelWindow3D *v8; // rdi
  void (__fastcall *v9)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *); // rsi
  int v10; // ecx
  _BYTE v11[24]; // [rsp+30h] [rbp-28h] BYREF

  v1 = (CWindowData *)*((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 18) - 1;
  if ( v4 )
  {
    v10 = v4 - 1;
    if ( !v10 )
    {
      v3 = *(CWindowData **)(*((_QWORD *)v1 + 50) + 32LL);
      goto LABEL_3;
    }
    if ( v10 != 1 )
      goto LABEL_3;
    if ( !CWindowData::IsImmersiveWindow(v1) )
    {
      v3 = *(CWindowData **)(*((_QWORD *)v1 + 51) + 80LL);
      goto LABEL_3;
    }
  }
  v3 = v1;
LABEL_3:
  if ( (unsigned __int8)CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
                          (_DWORD)v3,
                          *((_DWORD *)this + 10),
                          *((_QWORD *)this + 6) != 0LL,
                          (unsigned int)v11,
                          (__int64)&v11[8]) )
  {
    if ( *(_DWORD *)v11 != *((_DWORD *)this + 20)
      || *(_OWORD *)((char *)this + 84) != *(_OWORD *)&v11[4]
      || *((_DWORD *)this + 25) != *(_DWORD *)&v11[20]
      || (v5 = (_DWORD *)*((_QWORD *)v3 + 48), *((_DWORD *)this + 26) != v5[157])
      || *((_DWORD *)this + 27) != v5[158]
      || *((_DWORD *)this + 28) != v5[159]
      || *((_DWORD *)this + 29) != v5[160] )
    {
      v6 = *(_OWORD *)&v11[8];
      *((_QWORD *)this + 10) = *(_QWORD *)v11;
      *(_OWORD *)((char *)this + 88) = v6;
      v7 = *((_QWORD *)v3 + 48);
      v8 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)(v7 + 628);
      v9 = *(void (__fastcall **)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *))(*(_QWORD *)v8 + 8LL);
      if ( v9 == CTopLevelWindow3D::OnSizeChanged )
      {
        CTopLevelWindow3D::OnSizeChanged(v8, this);
      }
      else if ( v9 == CThumbnailVisual::OnSizeChanged )
      {
        CThumbnailVisual::OnSizeChanged(v8, this);
      }
      else
      {
        v9(v8, this);
      }
    }
  }
}
