/*
 * XREFs of ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180065870
 * Callers:
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x180061224 (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18002EA70 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180049A60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?ReplaceAll@Details@NotificationManager@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x180065484 (-ReplaceAll@Details@NotificationManager@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@.c)
 *     ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x180065A34 (-Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$basic_string@_WU-$char_trai.c)
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_WAEBV10@@Z @ 0x180067180 (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_traits@_W@st.c)
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@$$QEAV10@PEB_W@Z @ 0x180067254 (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_ea_180067254.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rax
  char *v8; // r9
  void **v9; // r8
  char *v10; // rdx
  char *v11; // rsi
  __int64 *v12; // rax
  __int64 *i; // rax
  void *v15[2]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v16; // [rsp+48h] [rbp-49h]
  unsigned __int64 v17; // [rsp+50h] [rbp-41h]
  void *v18[3]; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp-21h]
  void *v20[3]; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v21; // [rsp+90h] [rbp-1h]
  void *Src[4]; // [rsp+98h] [rbp+7h] BYREF

  v17 = 7LL;
  v16 = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign(v15, (void **)a1, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = *(__int64 **)(a1 + 32);
  v6 = (__int64 *)*v5;
  while ( v6 != v5 )
  {
    v7 = std::operator+<wchar_t>(v18);
    std::operator+<wchar_t>(v20, v7);
    if ( v19 >= 8 )
      operator delete(v18[0]);
    v19 = 7LL;
    v18[2] = 0LL;
    LOWORD(v18[0]) = 0;
    v8 = (char *)(v6 + 8);
    if ( (unsigned __int64)v6[11] >= 8 )
      v8 = *(char **)v8;
    v9 = v20;
    if ( v21 >= 8 )
      v9 = (void **)v20[0];
    v10 = (char *)v15;
    if ( v17 >= 8 )
      v10 = (char *)v15[0];
    v11 = CreativeFramework::NotificationManager::Details::ReplaceAll((char *)Src, v10, v9, v8);
    if ( v15 != (void **)v11 )
    {
      if ( v17 >= 8 )
        operator delete(v15[0]);
      v17 = 7LL;
      v16 = 0LL;
      LOWORD(v15[0]) = 0;
      std::wstring::_Assign_rv(v15, v11);
    }
    if ( Src[3] >= (void *)8 )
      operator delete(Src[0]);
    if ( v21 >= 8 )
      operator delete(v20[0]);
    if ( !*((_BYTE *)v6 + 25) )
    {
      v12 = (__int64 *)v6[2];
      if ( *((_BYTE *)v12 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v6 = i;
        v6 = i;
      }
      else
      {
        do
        {
          v6 = v12;
          v12 = (__int64 *)*v12;
        }
        while ( !*((_BYTE *)v12 + 25) );
      }
    }
  }
  CreativeFramework::NotificationManager::ToastHelpers::Encode(v4, a2, v15);
  if ( v17 >= 8 )
    operator delete(v15[0]);
  return a2;
}
