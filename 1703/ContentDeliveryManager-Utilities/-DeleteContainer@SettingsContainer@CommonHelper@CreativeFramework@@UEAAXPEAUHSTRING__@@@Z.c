/*
 * XREFs of ?DeleteContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAAXPEAUHSTRING__@@@Z @ 0x1800691C0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x180033B48 (--R-$less@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@std@@QEBA_NAEBV-$bas.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetChildContainers@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@@std@@XZ @ 0x1800692F0 (-GetChildContainers@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$map@V-$basic_stri.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180069B4C (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$s.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::CommonHelper::SettingsContainer::DeleteContainer(
        CreativeFramework::CommonHelper::SettingsContainer *this,
        HSTRING a2)
{
  char *StringRawBuffer; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r11
  _QWORD *v10; // rbx
  _QWORD *v11; // r11
  _QWORD v12[3]; // [rsp+20h] [rbp-40h] BYREF
  void *v13[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-10h]

  v12[2] = -2LL;
  CreativeFramework::CommonHelper::SettingsContainer::GetChildContainers(this, v12);
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(a2, 0LL);
  v14 = 7LL;
  v13[2] = 0LL;
  LOWORD(v13[0]) = 0;
  if ( *(_WORD *)StringRawBuffer )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&StringRawBuffer[2 * v5] );
  }
  else
  {
    v5 = 0LL;
  }
  std::wstring::assign(v13, StringRawBuffer, v5);
  v7 = (_QWORD *)v12[0];
  v8 = (_QWORD *)v12[0];
  v9 = *(_QWORD *)(v12[0] + 8LL);
  v10 = (_QWORD *)v12[0];
  if ( !*(_BYTE *)(v9 + 25) )
  {
    do
    {
      if ( (unsigned __int8)std::less<std::wstring>::operator()(v6, (_QWORD *)(v9 + 32), v13) )
      {
        v9 = v11[2];
      }
      else
      {
        v10 = v11;
        v9 = *v11;
      }
    }
    while ( !*(_BYTE *)(v9 + 25) );
    v7 = (_QWORD *)v12[0];
    if ( v10 != (_QWORD *)v12[0] )
    {
      if ( !(unsigned __int8)std::less<std::wstring>::operator()(v6, v13, v10 + 4) )
        goto LABEL_14;
      v7 = (_QWORD *)v12[0];
    }
  }
  v10 = v7;
LABEL_14:
  if ( v14 >= 8 )
    operator delete(v13[0]);
  if ( v10 != v8 )
  {
    (*(void (__fastcall **)(_QWORD, HSTRING))(**((_QWORD **)this + 1) + 88LL))(*((_QWORD *)this + 1), a2);
    *((_BYTE *)this + 32) = 1;
  }
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>(v12);
}
