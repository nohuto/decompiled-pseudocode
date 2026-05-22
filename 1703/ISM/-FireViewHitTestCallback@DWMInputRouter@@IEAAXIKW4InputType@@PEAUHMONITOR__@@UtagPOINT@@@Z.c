/*
 * XREFs of ?FireViewHitTestCallback@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x180016024
 * Callers:
 *     ?DoConvergedFireViewHitTestCallback@DWMInputRouter@@UEAAXPEAX0W4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x180015740 (-DoConvergedFireViewHitTestCallback@DWMInputRouter@@UEAAXPEAX0W4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180016F50 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
wil::details::in1diag3 **__fastcall DWMInputRouter::FireViewHitTestCallback(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        __int64 a6)
{
  wil::details::in1diag3 **result; // rax
  int v11; // esi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  _QWORD v19[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v20; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]
  int v24; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h] BYREF
  int v26; // [rsp+90h] [rbp+20h] BYREF

  result = &retaddr;
  v19[1] = -2LL;
  v11 = 0;
  v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 232);
  if ( v12 )
  {
    v19[0] = 0LL;
    v13 = (**v12)(v12, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v19);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x74C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    result = (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v19[0] + 48LL))(
                                          v19[0],
                                          &v26);
    if ( (int)result < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x750,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)result);
      __debugbreak();
    }
    v11 = v26;
    v14 = v19[0];
    v19[0] = 0LL;
    if ( v14 )
      result = (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( *(_DWORD *)(a1 + 732) != a2 || v11 != a2 )
  {
    *(_DWORD *)(a1 + 732) = a2;
    v15 = *(_QWORD *)(a1 + 720);
    if ( v15 )
    {
      *(_QWORD *)&v20 = __PAIR64__(a3, a2);
      *((_QWORD *)&v20 + 1) = __PAIR64__(a6, a5);
      v21 = HIDWORD(a6);
      v16 = *(_DWORD *)(a1 + 728);
      v17 = v16 == -1;
      v18 = v16 + 1;
      *(_DWORD *)(a1 + 728) = v18;
      if ( v17 )
        *(_DWORD *)(a1 + 728) = ++v18;
      HIDWORD(v21) = v18;
      v22 = v20;
      v23 = v21;
      v24 = a4;
      return (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 24LL))(
                                          v15,
                                          &v22);
    }
  }
  return result;
}
