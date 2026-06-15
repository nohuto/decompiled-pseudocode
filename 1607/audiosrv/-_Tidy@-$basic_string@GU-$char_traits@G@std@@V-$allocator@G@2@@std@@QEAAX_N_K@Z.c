/*
 * XREFs of ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x1800216E0
 * Callers:
 *     ??1CAudioStream@@MEAA@XZ @ 0x180019C60 (--1CAudioStream@@MEAA@XZ.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800213E0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$0 @ 0x18003B0E4 (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_u_ea_18003B0E4.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18004FE74 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x180050130 (--1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ.c)
 *     ??$destroy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@?$_Wrap_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@1@@Z @ 0x180074730 (--$destroy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$ComPtr@U.c)
 * Callees:
 *     ?copy@?$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z @ 0x180051D7C (-copy@-$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z.c)
 */

__int64 __fastcall std::wstring::_Tidy(_QWORD *a1, char a2, __int64 a3)
{
  _QWORD *v4; // rbx
  char *v5; // rsi
  unsigned __int64 v6; // rax
  HANDLE ProcessHeap; // rax
  __int64 result; // rax
  char *v9; // rax
  unsigned __int64 v10; // rsi

  v4 = a1;
  if ( a2 && a1[3] >= 8uLL )
  {
    v5 = (char *)*a1;
    if ( a3 )
      std::char_traits<unsigned short>::copy(a1, *a1);
    v6 = v4[3] + 1LL;
    if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    if ( 2 * v6 >= 0x1000 )
    {
      if ( ((unsigned __int8)v5 & 0x1F) != 0 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        JUMPOUT(0x1800475CELL);
      }
      v9 = (char *)*((_QWORD *)v5 - 1);
      if ( v9 >= v5 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        JUMPOUT(0x1800475DELL);
      }
      v10 = v5 - v9;
      if ( v10 < 8 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        JUMPOUT(0x1800475EELL);
      }
      if ( v10 > 0x27 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        JUMPOUT(0x1800475FBLL);
      }
      v5 = v9;
    }
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
  }
  v4[3] = 7LL;
  v4[2] = a3;
  if ( v4[3] >= 8uLL )
    v4 = (_QWORD *)*v4;
  result = 0LL;
  *((_WORD *)v4 + a3) = 0;
  return result;
}
