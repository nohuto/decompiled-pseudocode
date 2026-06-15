/*
 * XREFs of ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180021780
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018680 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800213E0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18004FE84 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?copy@?$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z @ 0x180051D7C (-copy@-$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
_WORD *__fastcall std::wstring::_Copy(__int64 a1, unsigned __int64 a2, void *a3)
{
  SIZE_T v3; // rsi
  void *v4; // r14
  void **v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  HANDLE ProcessHeap; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  _WORD *result; // rax
  unsigned __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rcx
  _WORD *v18; // rdx
  unsigned __int64 v22; // [rsp+78h] [rbp+20h]

  v4 = a3;
  v5 = (void **)a1;
  v6 = a2 | 7;
  if ( (a2 | 7) > 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = a2;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = v7 >> 1;
    if ( v7 >> 1 > v6 / 3 )
    {
      v6 = v8 + v7;
      if ( v7 > 0x7FFFFFFFFFFFFFFELL - v8 )
        v6 = 0x7FFFFFFFFFFFFFFELL;
    }
  }
  v9 = v6 + 1;
  if ( v6 == -1LL )
  {
    v12 = 0LL;
    goto LABEL_8;
  }
  if ( v9 > 0x7FFFFFFFFFFFFFFFLL )
  {
    std::_Xbad_alloc();
  }
  else
  {
    v3 = 2 * v9;
    if ( 2 * v9 < 0x1000 )
    {
      ProcessHeap = GetProcessHeap();
      v12 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, v3);
      if ( !v12 )
      {
        _o__invalid_parameter_noinfo_noreturn(v11);
        v5 = (void **)a1;
        v4 = a3;
        v6 = a2;
        v12 = v22;
      }
      goto LABEL_8;
    }
  }
  v15 = v3 + 39;
  if ( v3 + 39 < v3 )
    std::_Xbad_alloc();
  v16 = operator new(v15);
  if ( !v16 )
  {
    _o__invalid_parameter_noinfo_noreturn(v17);
    JUMPOUT(0x180047656LL);
  }
  v12 = ((unsigned __int64)v16 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v12 - 8) = v16;
LABEL_8:
  if ( v4 )
  {
    if ( (unsigned __int64)v5[3] < 8 )
      v18 = v5;
    else
      v18 = *v5;
    std::char_traits<unsigned short>::copy(v12, v18);
  }
  v13 = (unsigned __int64)v5[3];
  if ( v13 >= 8 )
    std::_Deallocate(*v5, v13 + 1, 2uLL);
  v5[3] = (void *)7;
  v5[2] = 0LL;
  if ( (unsigned __int64)v5[3] >= 8 )
    result = *v5;
  else
    result = v5;
  *result = 0;
  *v5 = (void *)v12;
  v5[3] = (void *)v6;
  v5[2] = v4;
  if ( (unsigned __int64)v5[3] >= 8 )
    v5 = (void **)v12;
  *((_WORD *)v5 + (_QWORD)v4) = 0;
  return result;
}
