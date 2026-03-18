/*
 * XREFs of ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1800B53B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800B5638 (-PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18013EC1C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18014A148 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::PresentInternal(
        CDWMOffScreenSwapChain *this,
        HRGN a2,
        __int64 a3,
        char a4,
        struct RenderTargetPresentParameters *a5)
{
  HRGN RectRgn; // r14
  bool v9; // r13
  HGDIOBJ v11; // rdi
  signed int v12; // ebx
  __int64 v13; // rax
  int v14; // eax
  __int64 i; // rbx
  __int64 v16; // rax
  signed int LastError; // eax
  signed int v18; // eax
  int v19; // edx
  unsigned int v20; // ecx
  int v21; // r8d
  signed int v22; // eax
  int v23; // edx
  unsigned int v24; // ecx
  int v25; // r8d
  signed int v26; // eax
  int v27; // r9d
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-C1h]
  unsigned int v30; // [rsp+20h] [rbp-C1h]
  __int128 v31; // [rsp+30h] [rbp-B1h] BYREF
  HGDIOBJ ho[2]; // [rsp+40h] [rbp-A1h]
  __int128 v33; // [rsp+50h] [rbp-91h]
  __int64 v34; // [rsp+60h] [rbp-81h]
  __int128 v35; // [rsp+68h] [rbp-79h] BYREF
  __int128 v36; // [rsp+78h] [rbp-69h]
  __int128 v37; // [rsp+88h] [rbp-59h]
  __int64 v38; // [rsp+98h] [rbp-49h]
  __int128 v39; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-31h]
  __int128 v41; // [rsp+C0h] [rbp-21h]
  __int64 v42; // [rsp+D0h] [rbp-11h]
  struct tagRECT rc; // [rsp+E0h] [rbp-1h] BYREF

  RectRgn = 0LL;
  v9 = 1;
  memset_0(&v35, 0, 0x38uLL);
  memset_0(&v31, 0, 0x38uLL);
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  if ( (a4 & 1) != 0 )
    return (unsigned int)DwmGetRemoteSessionOcclusionState() != 0 ? 0x87A0001 : 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 37) + 560LL) + 888LL))(*(_QWORD *)(*((_QWORD *)this + 37) + 560LL));
  if ( !*((_BYTE *)a5 + 33) )
  {
    v11 = ho[1];
LABEL_5:
    v12 = CDWMOffScreenSwapChain::PresentInternalExport(this, a2, v9, *((_BYTE *)a5 + 32));
    goto LABEL_6;
  }
  v13 = *(_QWORD *)a5;
  v11 = (HGDIOBJ)*((_QWORD *)a5 + 3);
  LODWORD(v31) = 0;
  v9 = 0;
  *((_QWORD *)&v31 + 1) = v13;
  LODWORD(ho[0]) = *((_DWORD *)a5 + 4) - *((_DWORD *)a5 + 2);
  HIDWORD(ho[0]) = *((_DWORD *)a5 + 5) - *((_DWORD *)a5 + 3);
  v39 = v31;
  ho[1] = v11;
  v41 = v33;
  v40 = *(_OWORD *)ho;
  v42 = v34;
  v14 = CSwapChainBase::NotifyMetaData(this, &v39);
  v12 = v14;
  if ( v14 >= 0 )
  {
    if ( !a2 )
      goto LABEL_5;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 62); i = (unsigned int)(i + 1) )
    {
      v16 = *((_QWORD *)this + 28);
      if ( *(_DWORD *)(48 * i + v16) == 1 )
        OffsetRect((LPRECT)(v16 + 48 * i + 16), -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3));
    }
    SetLastError(0);
    if ( !GetRgnBox(*((HRGN *)this + 26), &rc) )
    {
      LastError = GetLastError();
      v12 = LastError;
      if ( LastError > 0 )
        v12 = (unsigned __int16)LastError | 0x80070000;
      v29 = 824;
      if ( v12 >= 0 )
        v12 = -2003304445;
LABEL_15:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v29);
      goto LABEL_8;
    }
    SetLastError(0);
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    if ( !RectRgn )
    {
      v18 = GetLastError();
      v12 = v18;
      if ( v18 > 0 )
        v12 = (unsigned __int16)v18 | 0x80070000;
      if ( v12 >= 0 )
        v12 = CheckGUIHandleQuota(v20, v19, v21);
      v29 = 832;
      goto LABEL_15;
    }
    SetLastError(0);
    if ( CombineRgn(RectRgn, RectRgn, *((HRGN *)this + 26), 2) )
    {
      SetLastError(0);
      if ( OffsetRgn(RectRgn, -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3)) )
      {
        *((_QWORD *)&v35 + 1) = *(_QWORD *)a5;
        *(_QWORD *)&v37 = *(_QWORD *)&rc.left;
        LODWORD(v35) = 2;
        *(_QWORD *)&v36 = RectRgn;
        v39 = v35;
        v40 = v36;
        v41 = v37;
        v42 = v38;
        v28 = CSwapChainBase::NotifyMetaData(this, &v39);
        v12 = v28;
        if ( v28 >= 0 )
          goto LABEL_5;
        v30 = 861;
        v27 = v28;
LABEL_44:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v30);
LABEL_6:
        if ( RectRgn )
          DeleteObject(RectRgn);
        goto LABEL_8;
      }
      v26 = GetLastError();
      v12 = v26;
      if ( v26 > 0 )
        v12 = (unsigned __int16)v26 | 0x80070000;
      v30 = 845;
      if ( v12 >= 0 )
        v12 = -2003304445;
    }
    else
    {
      v22 = GetLastError();
      v12 = v22;
      if ( v22 > 0 )
        v12 = (unsigned __int16)v22 | 0x80070000;
      if ( v12 >= 0 )
        v12 = CheckGUIHandleQuota(v24, v23, v25);
      v30 = 837;
    }
    v27 = v12;
    goto LABEL_44;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x327u);
LABEL_8:
  if ( v11 )
    DeleteObject(v11);
  return (unsigned int)v12;
}
