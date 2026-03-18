/*
 * XREFs of ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18008C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x18008C2F4 (-PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180128B0C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801395A8 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::PresentInternal(
        CDWMOffScreenSwapChain *this,
        HRGN hrgn,
        __int64 a3,
        char a4,
        struct RenderTargetPresentParameters *a5)
{
  HRGN RectRgn; // r15
  bool v9; // r13
  signed int v11; // ebx
  int v12; // eax
  int v13; // r9d
  unsigned int i; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
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
  __int128 v32; // [rsp+40h] [rbp-A1h]
  __int128 v33; // [rsp+50h] [rbp-91h]
  __int64 v34; // [rsp+60h] [rbp-81h]
  __int128 v35; // [rsp+70h] [rbp-71h] BYREF
  __int128 v36; // [rsp+80h] [rbp-61h]
  __int128 v37; // [rsp+90h] [rbp-51h]
  __int64 v38; // [rsp+A0h] [rbp-41h]
  __int128 v39; // [rsp+B0h] [rbp-31h] BYREF
  HGDIOBJ ho[2]; // [rsp+C0h] [rbp-21h]
  __int128 v41; // [rsp+D0h] [rbp-11h]
  __int64 v42; // [rsp+E0h] [rbp-1h]
  struct tagRECT rc; // [rsp+E8h] [rbp+7h] BYREF

  RectRgn = 0LL;
  v9 = 1;
  memset_0(&v35, 0, 0x38uLL);
  memset_0(&v39, 0, 0x38uLL);
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  if ( (a4 & 1) != 0 )
    return (unsigned int)DwmGetRemoteSessionOcclusionState() != 0 ? 0x87A0001 : 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 37) + 552LL) + 888LL))(*(_QWORD *)(*((_QWORD *)this + 37) + 552LL));
  if ( !*((_BYTE *)a5 + 33) )
  {
    if ( *((_BYTE *)a5 + 32) )
    {
      LODWORD(v31) = 5;
      v36 = v32;
      v35 = v31;
      v38 = v34;
      v37 = v33;
      v12 = CSwapChainBase::NotifyMetaData(this, &v35);
      v11 = v12;
      if ( v12 < 0 )
      {
        v29 = 878;
        goto LABEL_13;
      }
    }
    goto LABEL_5;
  }
  *((_QWORD *)&v39 + 1) = *(_QWORD *)a5;
  v9 = 0;
  LODWORD(ho[0]) = *((_DWORD *)a5 + 4) - *((_DWORD *)a5 + 2);
  HIDWORD(ho[0]) = *((_DWORD *)a5 + 5) - *((_DWORD *)a5 + 3);
  ho[1] = *((HGDIOBJ *)a5 + 3);
  LODWORD(v39) = 0;
  v32 = *(_OWORD *)ho;
  v31 = v39;
  v34 = v42;
  v33 = v41;
  v12 = CSwapChainBase::NotifyMetaData(this, &v31);
  v11 = v12;
  if ( v12 >= 0 )
  {
    if ( hrgn )
    {
      for ( i = 0; i < *((_DWORD *)this + 62); ++i )
      {
        v15 = *((_QWORD *)this + 28);
        v16 = 48LL * i;
        if ( *(_DWORD *)(v16 + v15) == 1 )
          OffsetRect((LPRECT)(v15 + v16 + 16), -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3));
      }
      SetLastError(0);
      if ( !GetRgnBox(*((HRGN *)this + 26), &rc) )
      {
        LastError = GetLastError();
        v11 = LastError;
        if ( LastError > 0 )
          v11 = (unsigned __int16)LastError | 0x80070000;
        v29 = 825;
        if ( v11 >= 0 )
          v11 = -2003304445;
LABEL_16:
        v13 = v11;
        goto LABEL_17;
      }
      SetLastError(0);
      RectRgn = CreateRectRgn(0, 0, 0, 0);
      if ( !RectRgn )
      {
        v18 = GetLastError();
        v11 = v18;
        if ( v18 > 0 )
          v11 = (unsigned __int16)v18 | 0x80070000;
        if ( v11 >= 0 )
          v11 = CheckGUIHandleQuota(v20, v19, v21);
        v29 = 833;
        goto LABEL_16;
      }
      SetLastError(0);
      if ( !CombineRgn(RectRgn, RectRgn, *((HRGN *)this + 26), 2) )
      {
        v22 = GetLastError();
        v11 = v22;
        if ( v22 > 0 )
          v11 = (unsigned __int16)v22 | 0x80070000;
        if ( v11 >= 0 )
          v11 = CheckGUIHandleQuota(v24, v23, v25);
        v30 = 838;
LABEL_43:
        v27 = v11;
LABEL_46:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v30);
LABEL_6:
        if ( RectRgn )
          DeleteObject(RectRgn);
        goto LABEL_8;
      }
      SetLastError(0);
      if ( !OffsetRgn(RectRgn, -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3)) )
      {
        v26 = GetLastError();
        v11 = v26;
        if ( v26 > 0 )
          v11 = (unsigned __int16)v26 | 0x80070000;
        v30 = 846;
        if ( v11 >= 0 )
          v11 = -2003304445;
        goto LABEL_43;
      }
      *((_QWORD *)&v35 + 1) = *(_QWORD *)a5;
      *(_QWORD *)&v37 = *(_QWORD *)&rc.left;
      LODWORD(v35) = 2;
      *(_QWORD *)&v36 = RectRgn;
      v31 = v35;
      v32 = v36;
      v33 = v37;
      v34 = v38;
      v28 = CSwapChainBase::NotifyMetaData(this, &v31);
      v11 = v28;
      if ( v28 < 0 )
      {
        v30 = 862;
        v27 = v28;
        goto LABEL_46;
      }
    }
LABEL_5:
    v11 = CDWMOffScreenSwapChain::PresentInternalExport(this, hrgn, v9, *((_BYTE *)a5 + 32));
    goto LABEL_6;
  }
  v29 = 808;
LABEL_13:
  v13 = v12;
LABEL_17:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v29);
LABEL_8:
  if ( ho[1] )
    DeleteObject(ho[1]);
  return (unsigned int)v11;
}
