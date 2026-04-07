/*
 * XREFs of ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180034D34
 * Callers:
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18001B598 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180031890 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034A0C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800161C0 (-OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800281D0 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180035574 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(CSecondaryWindowRepresentation *this)
{
  CWindowData *v1; // rsi
  CWindowData *v3; // rdi
  int v4; // ecx
  _DWORD *v5; // rdx
  __int128 v6; // xmm0
  CTopLevelWindow3D *v7; // rcx
  void (__fastcall *v8)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *); // rax
  int v9; // ecx
  _BYTE v10[24]; // [rsp+30h] [rbp-28h] BYREF

  v1 = (CWindowData *)*((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 18) - 1;
  if ( v4 )
  {
    v9 = v4 - 1;
    if ( !v9 )
    {
      v3 = *(CWindowData **)(*((_QWORD *)v1 + 51) + 32LL);
      goto LABEL_3;
    }
    if ( v9 != 1 )
      goto LABEL_3;
    if ( !CWindowData::IsImmersiveWindow(v1) )
    {
      v3 = *(CWindowData **)(*((_QWORD *)v1 + 52) + 80LL);
      goto LABEL_3;
    }
  }
  v3 = v1;
LABEL_3:
  if ( (unsigned __int8)CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
                          (_DWORD)v3,
                          *((_DWORD *)this + 10),
                          *((_QWORD *)this + 6) != 0LL,
                          (unsigned int)v10,
                          (__int64)&v10[8]) )
  {
    if ( *(_DWORD *)v10 != *((_DWORD *)this + 20)
      || *(_OWORD *)((char *)this + 84) != *(_OWORD *)&v10[4]
      || *((_DWORD *)this + 25) != *(_DWORD *)&v10[20]
      || (v5 = (_DWORD *)*((_QWORD *)v3 + 48), *((_DWORD *)this + 26) != v5[157])
      || *((_DWORD *)this + 27) != v5[158]
      || *((_DWORD *)this + 28) != v5[159]
      || *((_DWORD *)this + 29) != v5[160] )
    {
      v6 = *(_OWORD *)&v10[8];
      v7 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
      *((_QWORD *)this + 10) = *(_QWORD *)v10;
      *(_OWORD *)((char *)this + 88) = v6;
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)(*((_QWORD *)v3 + 48) + 628LL);
      v8 = *(void (__fastcall **)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *))(*(_QWORD *)v7 + 8LL);
      if ( v8 == CTopLevelWindow3D::OnSizeChanged )
      {
        CTopLevelWindow3D::OnSizeChanged(v7, this);
      }
      else if ( v8 == CThumbnailVisual::OnSizeChanged )
      {
        CThumbnailVisual::OnSizeChanged(v7, this);
      }
      else
      {
        v8(v7, this);
      }
    }
  }
}
