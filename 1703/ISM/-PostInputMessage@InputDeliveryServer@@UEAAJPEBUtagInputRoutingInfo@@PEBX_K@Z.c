/*
 * XREFs of ?PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBX_K@Z @ 0x180069210
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@U?$hash@UtagInputRoutingInfo@@@3@U?$equal_to@UtagInputRoutingInfo@@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@@std@@QEAAAEAV?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@1@AEBUtagInputRoutingInfo@@@Z @ 0x18006A384 (--A-$unordered_map@UtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_delete@VInputTar.c)
 *     ?GetThread@InputTarget@@QEBA?AV?$ComPtr@VInputThread@@@WRL@Microsoft@@XZ @ 0x18006BBFC (-GetThread@InputTarget@@QEBA-AV-$ComPtr@VInputThread@@@WRL@Microsoft@@XZ.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::PostInputMessage(
        InputDeliveryServer *this,
        const struct tagInputRoutingInfo *a2,
        const void *a3,
        size_t a4)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  const char *v9; // r9
  int v10; // eax
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rcx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 60) )
  {
    v7 = (_QWORD *)std::unordered_map<tagInputRoutingInfo,std::unique_ptr<InputTarget>>::operator[]((char *)this + 328);
    v8 = *(_QWORD *)InputTarget::GetThread(*v7, &v17);
    v10 = *((_DWORD *)a2 + 1);
    v11 = *(_QWORD *)(v8 + 24);
    if ( a4 + 32 >= 0x1000 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x83,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
        v9);
      __debugbreak();
    }
    dword_1800D3BB0 = 0;
    dword_1800D3BB4 = v10;
    dword_1800D3BB8 = a4;
    memcpy_0(&unk_1800D3BD0, a3, a4);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, int))(**(_QWORD **)(v11 + 72) + 56LL))(
            *(_QWORD *)(v11 + 72),
            *(unsigned int *)(v11 + 36),
            *(unsigned int *)(v11 + 40),
            &dword_1800D3BB0,
            (int)a4 + 32);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x93,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const void *, _DWORD))(**((_QWORD **)this + 12) + 56LL))(
            *((_QWORD *)this + 12),
            *(unsigned int *)a2,
            *((unsigned int *)a2 + 1),
            a3,
            a4);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x162,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v15);
      JUMPOUT(0x180069359LL);
    }
  }
  return 0LL;
}
