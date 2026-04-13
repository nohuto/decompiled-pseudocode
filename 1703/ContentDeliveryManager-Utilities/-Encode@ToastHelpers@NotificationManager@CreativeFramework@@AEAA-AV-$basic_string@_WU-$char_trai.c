/*
 * XREFs of ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x180065A34
 * Callers:
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180065870 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x180049B8C (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180053608 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall CreativeFramework::NotificationManager::ToastHelpers::Encode(__int64 a1, void **a2, __int64 *a3)
{
  char *v3; // rdi
  _QWORD *v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 *v8; // rax
  char *v9; // rbx
  char *v10; // rdi
  unsigned __int64 v11; // r8
  char *v12; // rdx

  v3 = (char *)a3;
  a2[3] = (void *)7;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  v5 = a3 + 2;
  v6 = a3[2];
  v7 = (unsigned __int64)a2[2];
  if ( v7 <= v6 && a2[3] != (void *)v6 && std::wstring::_Grow(a2, v6, 1) )
  {
    a2[2] = (void *)v7;
    if ( (unsigned __int64)a2[3] < 8 )
      v8 = (__int64 *)a2;
    else
      v8 = (__int64 *)*a2;
    *((_WORD *)v8 + v7) = 0;
  }
  if ( *((_QWORD *)v3 + 3) < 8uLL )
    v9 = v3;
  else
    v9 = *(char **)v3;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(char **)v3;
  v10 = &v3[2 * *v5];
  while ( v9 != v10 )
  {
    if ( *(_WORD *)v9 == 38 )
    {
      v11 = 5LL;
      v12 = (char *)L"&amp;";
    }
    else
    {
      v11 = 1LL;
      v12 = v9;
    }
    std::wstring::append(a2, v12, v11);
    v9 += 2;
  }
  return a2;
}
