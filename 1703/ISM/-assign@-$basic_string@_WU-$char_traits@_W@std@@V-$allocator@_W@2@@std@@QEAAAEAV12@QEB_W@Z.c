/*
 * XREFs of ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z @ 0x180066724
 * Callers:
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x180065884 (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18006686C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K@Z @ 0x1800669E0 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

void **__fastcall std::wstring::assign(void **a1, void **Src)
{
  unsigned __int64 v2; // rdi
  void **v4; // rbx
  bool v5; // cf
  _WORD *v6; // rax
  void *v7; // rcx
  _WORD *v8; // rax

  v2 = -1LL;
  v4 = a1;
  do
    ++v2;
  while ( *((_WORD *)Src + v2) );
  if ( (unsigned __int64)a1[3] >= 8 )
    a1 = (void **)*a1;
  if ( a1 <= Src && Src < (void **)((char *)a1 + 2 * (_QWORD)v4[2]) )
    return (void **)std::wstring::assign(v4);
  if ( v2 )
  {
    if ( (unsigned __int64)v4[3] < v2 )
      std::wstring::_Copy(v4);
    if ( (unsigned __int64)v4[3] < 8 )
      v7 = v4;
    else
      v7 = *v4;
    memcpy_0(v7, Src, 2 * v2);
    v5 = (unsigned __int64)v4[3] < 8;
    v4[2] = (void *)v2;
    if ( v5 )
      v8 = v4;
    else
      v8 = *v4;
    v8[v2] = 0;
  }
  else
  {
    v5 = (unsigned __int64)v4[3] < 8;
    v4[2] = 0LL;
    if ( v5 )
      v6 = v4;
    else
      v6 = *v4;
    *v6 = 0;
  }
  return v4;
}
