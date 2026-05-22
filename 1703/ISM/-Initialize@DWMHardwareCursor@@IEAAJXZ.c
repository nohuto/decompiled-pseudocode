/*
 * XREFs of ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x180020194
 * Callers:
 *     ?Create@DWMHardwareCursor@@SAJPEAUIInputDisplay@@PEAPEAV1@@Z @ 0x180020060 (-Create@DWMHardwareCursor@@SAJPEAUIInputDisplay@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??4CursorGlyphInfo@@QEAAAEAU0@$$QEAU0@@Z @ 0x180020A08 (--4CursorGlyphInfo@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x180020CE4 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 *     ??A?$map@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@@std@@QEAAAEAUCursorGlyphInfo@@$$QEAH@Z @ 0x1800216E4 (--A-$map@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@U-$pair@$$CBHUCursorGlyphInfo@@@std@@@3@.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x180021994 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180021C60 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x180021E38 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003BC5C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003BC8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall DWMHardwareCursor::Initialize(DWMHardwareCursor *this)
{
  void **v2; // rcx
  void **v3; // rax
  void *v4; // rax
  void *v5; // rax
  void *v6; // rax
  void *v7; // rax
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  int v20; // r9d
  _QWORD *v21; // r14
  int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v29; // [rsp+4Ch] [rbp-35h] BYREF
  __int64 v30; // [rsp+50h] [rbp-31h] BYREF
  __int64 v31; // [rsp+58h] [rbp-29h] BYREF
  char v32; // [rsp+60h] [rbp-21h]
  __int64 v33; // [rsp+68h] [rbp-19h]
  void *Src[3]; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v35; // [rsp+88h] [rbp+7h]
  float v36; // [rsp+90h] [rbp+Fh]
  int v37; // [rsp+94h] [rbp+13h]
  void *v38[2]; // [rsp+98h] [rbp+17h] BYREF
  __int64 v39; // [rsp+A8h] [rbp+27h]
  unsigned __int64 v40; // [rsp+B0h] [rbp+2Fh]

  v33 = -2LL;
  v31 = 0LL;
  v32 = 0;
  v29 = 0;
  v30 = 0LL;
  v39 = 0LL;
  v40 = 15LL;
  LOBYTE(v38[0]) = 0;
  std::string::_Copy(v38);
  v2 = v38;
  if ( v40 >= 0x10 )
    v2 = (void **)v38[0];
  qmemcpy(
    v2,
    "C:\\Windows\\SystemResources\\ShellComponents\\WindowsInternal.ComposableShell.Experiences.InputHost\\assets\\mouse\\light\\",
    116);
  v39 = 116LL;
  v3 = v38;
  if ( v40 >= 0x10 )
    v3 = (void **)v38[0];
  *((_BYTE *)v3 + 116) = 0;
  std::operator+<char>(Src);
  v36 = 0.0;
  v37 = 0;
  v4 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v4, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = 0.5;
  v37 = 1056964608;
  v5 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v5, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = 0.5;
  v37 = 1056964608;
  v6 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v6, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = 0.5;
  v37 = 1056964608;
  v7 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v7, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = 0.5;
  v37 = 1056964608;
  v8 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v8, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = 0.0;
  v37 = 0;
  v9 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v9, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = FLOAT_0_20999999;
  v37 = 0;
  v10 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v10, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = 0.5;
  v37 = 1056964608;
  v11 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v11, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = 0.5;
  v37 = 1056964608;
  v12 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v12, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = 0.5;
  v37 = 1056964608;
  v13 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v13, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = 0.5;
  v37 = 1056964608;
  v14 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v14, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = 0.5;
  v37 = 1056964608;
  v15 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v15, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  std::operator+<char>(Src);
  v36 = 0.5;
  v37 = 1056964608;
  v16 = (void *)std::map<int,CursorGlyphInfo>::operator[]((int)this + 80);
  CursorGlyphInfo::operator=(v16, Src);
  if ( v35 >= 0x10 )
    std::_Deallocate((char *)Src[0], v35 + 1, 1uLL);
  v17 = InputSecurityDescriptor::QueryDescriptor(&v31, 8LL, L"System\\Input\\HardwareCursorPort");
  v19 = v17;
  if ( v17 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_60;
    v20 = 92;
    goto LABEL_46;
  }
  v21 = (_QWORD *)((char *)this + 120);
  v17 = CoreUICreate((char *)this + 120);
  v19 = v17;
  if ( v17 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_60;
    v20 = 94;
    goto LABEL_46;
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, char *))(*(_QWORD *)*v21 + 48LL))(
          *v21,
          v31,
          L"System\\Input\\HardwareCursorPort",
          (char *)this + 144);
  if ( v22 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v23, &MinInput_Warning_CheckResult, 0, 99, v22);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v24 = (_QWORD *)((char *)this + 128);
  v17 = CoreUIFactoryCreate((char *)this + 128);
  v19 = v17;
  if ( v17 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_60;
    v20 = 102;
    goto LABEL_46;
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v24 + 24LL))(
          *v24,
          &GUID_2a41cba8_e142_47c3_a686_aafebe68f8a9,
          &v29);
  if ( v25 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v26, &MinInput_Warning_CheckResult, 0, 106, v25);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  (*(void (__fastcall **)(_QWORD, DWMHardwareCursor *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)*v24 + 32LL))(
    *v24,
    this,
    0LL,
    v29,
    L"System\\Input\\HardwareCursorEndpoint",
    *((_QWORD *)this + 18),
    (char *)this + 136);
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v21 + 24LL))(*v21, &v30);
  v19 = v17;
  if ( v17 >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, char *))(*(_QWORD *)v30 + 24LL))(
            v30,
            L"System\\Input\\CursorManagerEndpoint",
            1LL,
            (char *)this + 168);
    v19 = v17;
    if ( v17 >= 0 )
    {
      DWMHardwareCursor::UpdateBitmapSource(this);
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v20 = 120;
      goto LABEL_46;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v20 = 116;
LABEL_46:
    Template_qqq(v18, &MinInput_Warning_CheckResult, 0, v20, v17);
  }
LABEL_60:
  if ( v40 >= 0x10 )
    std::_Deallocate((char *)v38[0], v40 + 1, 1uLL);
  v27 = v30;
  v30 = 0LL;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v31);
  return v19;
}
