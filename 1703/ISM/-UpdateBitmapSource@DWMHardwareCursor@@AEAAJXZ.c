/*
 * XREFs of ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x180020CE4
 * Callers:
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x180020194 (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 *     ?UpdateHardwareCursor@DWMHardwareCursor@@UEAAJII@Z @ 0x1800213D0 (-UpdateHardwareCursor@DWMHardwareCursor@@UEAAJII@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAA@XZ @ 0x180021550 (--1-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@E@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800215A0 (--4-$shared_ptr@E@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??A?$map@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@@std@@QEAAAEAUCursorGlyphInfo@@$$QEAH@Z @ 0x1800216E4 (--A-$map@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@U-$pair@$$CBHUCursorGlyphInfo@@@std@@@3@.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x180021994 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180021B14 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ??$_Resetp@E@?$shared_ptr@E@std@@AEAAXPEAE@Z @ 0x180021F1C (--$_Resetp@E@-$shared_ptr@E@std@@AEAAXPEAE@Z.c)
 *     ??$_Construct@PEAD@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXPEADQEADUinput_iterator_tag@1@@Z @ 0x18002201C (--$_Construct@PEAD@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXPEADQEADUin.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E0BC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DWMHardwareCursor::UpdateBitmapSource(DWMHardwareCursor *this)
{
  int v2; // r14d
  void **v3; // rcx
  void **v4; // r15
  void **v5; // r15
  float v6; // xmm7_4
  float v7; // xmm6_4
  HRESULT v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int *v21; // r15
  unsigned int *v22; // r14
  unsigned int v23; // esi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // esi
  unsigned int v29; // esi
  void *v30; // rax
  __int64 v31; // rcx
  __int64 (__fastcall ***v32)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v33; // rcx
  LPVOID v34; // rcx
  __int64 v36; // [rsp+48h] [rbp-89h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-81h] BYREF
  __int128 v38; // [rsp+58h] [rbp-79h] BYREF
  __int64 v39; // [rsp+68h] [rbp-69h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-61h] BYREF
  _QWORD v41[2]; // [rsp+78h] [rbp-59h] BYREF
  void *v42[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v43; // [rsp+98h] [rbp-39h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-31h]
  void *Src[3]; // [rsp+A8h] [rbp-29h] BYREF
  unsigned __int64 v46; // [rsp+C0h] [rbp-11h]
  _QWORD v47[2]; // [rsp+C8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v41[1] = -2LL;
  v2 = (_DWORD)this + 80;
  std::map<int,CursorGlyphInfo>::operator[]((_DWORD)this + 80);
  v43 = 0LL;
  v44 = 15LL;
  LOBYTE(v42[0]) = 0;
  std::string::assign(v42);
  v3 = v42;
  if ( v44 >= 0x10 )
    v3 = (void **)v42[0];
  v4 = v42;
  if ( v44 >= 0x10 )
    v4 = (void **)v42[0];
  Src[2] = 0LL;
  v46 = 7LL;
  LOWORD(Src[0]) = 0;
  if ( (unsigned __int64)((char *)v3 + v43 - (char *)v4) > 7 )
    std::wstring::_Copy(Src);
  std::wstring::_Construct<char *>(Src);
  v5 = Src;
  if ( v46 >= 8 )
    v5 = (void **)Src[0];
  v6 = *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 32);
  v7 = *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 36);
  ppv = 0LL;
  v8 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xEA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_70;
  }
  v41[0] = 0LL;
  v10 = (*(__int64 (__fastcall **)(LPVOID, void **, GUID *, __int64, _DWORD, _QWORD *))(*(_QWORD *)ppv + 24LL))(
          ppv,
          v5,
          &GUID_VendorMicrosoftBuiltIn,
          0x80000000LL,
          0,
          v41);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v40 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v41[0] + 104LL))(v41[0], 0LL, &v40);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xF0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
        (const char *)(unsigned int)v11);
LABEL_66:
      v32 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v32)[2])(v32);
      }
      goto LABEL_68;
    }
    v36 = 0LL;
    v12 = (**v40)(v40, &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94, &v36);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 242LL;
LABEL_46:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v13,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_64;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v36 + 32LL))(v36, v47);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 246LL;
      goto LABEL_46;
    }
    v14 = v47[0] - *(_QWORD *)&GUID_WICPixelFormat32bppBGRA.Data1;
    if ( v47[0] == *(_QWORD *)&GUID_WICPixelFormat32bppBGRA.Data1 )
      v14 = v47[1] - *(_QWORD *)GUID_WICPixelFormat32bppBGRA.Data4;
    if ( v14 )
    {
      v9 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_64;
    }
    if ( *((_DWORD *)this + 19) != 1 )
    {
      *(_QWORD *)&v38 = 0LL;
      v15 = (*(__int64 (__fastcall **)(LPVOID, __int128 *))(*(_QWORD *)ppv + 104LL))(ppv, &v38);
      v9 = v15;
      if ( v15 < 0 )
      {
        v16 = 257LL;
LABEL_38:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v16,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
          (const char *)(unsigned int)v15);
LABEL_42:
        v20 = v38;
        if ( !(_QWORD)v38 )
          goto LABEL_64;
        *(_QWORD *)&v38 = 0LL;
        goto LABEL_63;
      }
      if ( *((_DWORD *)this + 19) == 2 )
      {
        v17 = 1;
        v6 = 1.0 - *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 36);
        v7 = *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 32);
      }
      else
      {
        v17 = 3;
        if ( *((_DWORD *)this + 19) == 3 )
        {
          v17 = 2;
          v6 = 1.0 - *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 32);
          v7 = 1.0 - *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 36);
        }
        else
        {
          if ( *((_DWORD *)this + 19) != 4 )
          {
            v9 = -2147418113;
            goto LABEL_42;
          }
          v6 = *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 36);
          v7 = 1.0 - *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 32);
        }
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v38 + 64LL))(v38, v36, v17);
      v9 = v15;
      if ( v15 < 0 )
      {
        v16 = 282LL;
        goto LABEL_38;
      }
      v18 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v15 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v38)(
              v38,
              &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
              &v36);
      v9 = v15;
      if ( v15 < 0 )
      {
        v16 = 283LL;
        goto LABEL_38;
      }
      v19 = v38;
      if ( (_QWORD)v38 )
      {
        *(_QWORD *)&v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v21 = (unsigned int *)((char *)this + 60);
    v22 = (unsigned int *)((char *)this + 56);
    v12 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v36 + 24LL))(
            v36,
            (char *)this + 56,
            (char *)this + 60);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 289LL;
      goto LABEL_46;
    }
    v23 = (int)(*((double *)this + 6) * 32.0);
    v39 = 0LL;
    v24 = (*(__int64 (__fastcall **)(LPVOID, __int64 *))(*(_QWORD *)ppv + 88LL))(ppv, &v39);
    v9 = v24;
    if ( v24 >= 0 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int))(*(_QWORD *)v39 + 64LL))(
              v39,
              v36,
              v23,
              v23,
              4);
      v9 = v24;
      if ( v24 >= 0 )
      {
        *v22 = v23;
        *v21 = v23;
        v26 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v24 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v39)(
                v39,
                &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
                &v36);
        v9 = v24;
        if ( v24 >= 0 )
        {
          v27 = *v22;
          *((_DWORD *)this + 16) = (int)(float)((float)(int)*v22 * v6);
          v28 = *v21;
          *((_DWORD *)this + 17) = (int)(float)((float)(int)*v21 * v7);
          v29 = *((_DWORD *)this + 25) * v27 * v28;
          v30 = operator new[](v29, (const struct std::nothrow_t *)&std::nothrow);
          v38 = 0LL;
          std::shared_ptr<unsigned char>::_Resetp<unsigned char>(&v38, v30);
          std::shared_ptr<unsigned char>::operator=((char *)this + 152, &v38);
          std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::~shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>(&v38);
          if ( !*((_QWORD *)this + 19) )
          {
            v9 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x13D,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmha"
                       "rdwarecursor.cpp",
              (const char *)0x8007000ELL);
LABEL_61:
            v20 = v39;
            if ( !v39 )
              goto LABEL_64;
            v39 = 0LL;
LABEL_63:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_64:
            v31 = v36;
            if ( v36 )
            {
              v36 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
            }
            goto LABEL_66;
          }
          v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v36 + 56LL))(
                  v36,
                  0LL,
                  *v22 * *((_DWORD *)this + 25),
                  v29,
                  *((_QWORD *)this + 19));
          v9 = v24;
          if ( v24 >= 0 )
          {
            *((_BYTE *)this + 72) = 0;
            v9 = 0;
            goto LABEL_61;
          }
          v25 = 318LL;
        }
        else
        {
          v25 = 308LL;
        }
      }
      else
      {
        v25 = 301LL;
      }
    }
    else
    {
      v25 = 296LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_61;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xEC,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
    (const char *)(unsigned int)v10);
LABEL_68:
  v33 = v41[0];
  if ( v41[0] )
  {
    v41[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
LABEL_70:
  v34 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v34 + 16LL))(v34);
  }
  if ( v46 >= 8 )
    std::_Deallocate((char *)Src[0], v46 + 1, 2uLL);
  if ( v44 >= 0x10 )
    std::_Deallocate((char *)v42[0], v44 + 1, 1uLL);
  return v9;
}
