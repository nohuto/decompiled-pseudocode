/*
 * XREFs of ?PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBUKeyboardEvent@@@Z @ 0x180069360
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeliverEventToInputService@InputDeliveryServer@@AEAAXPEBUKeyboardEvent@@I@Z @ 0x180069E0C (-DeliverEventToInputService@InputDeliveryServer@@AEAAXPEBUKeyboardEvent@@I@Z.c)
 *     ??A?$unordered_map@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@U?$hash@UtagInputRoutingInfo@@@3@U?$equal_to@UtagInputRoutingInfo@@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@@std@@QEAAAEAV?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@1@AEBUtagInputRoutingInfo@@@Z @ 0x18006A384 (--A-$unordered_map@UtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_delete@VInputTar.c)
 *     ?GetThread@InputTarget@@QEBA?AV?$ComPtr@VInputThread@@@WRL@Microsoft@@XZ @ 0x18006BBFC (-GetThread@InputTarget@@QEBA-AV-$ComPtr@VInputThread@@@WRL@Microsoft@@XZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::PostInputMessage(
        InputDeliveryServer *this,
        const struct tagInputRoutingInfo *a2,
        const struct KeyboardEvent *a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // xmm1_8
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 60) )
  {
    v5 = (_QWORD *)std::unordered_map<tagInputRoutingInfo,std::unique_ptr<InputTarget>>::operator[]((char *)this + 328);
    v6 = *(_QWORD *)(*(_QWORD *)InputTarget::GetThread(*v5, &v17) + 24LL);
    memset(v15, 0, 0x20uLL);
    v7 = *(_OWORD *)a3;
    v8 = *(_QWORD *)(v6 + 72);
    v9 = *((_QWORD *)a3 + 2);
    v10 = *(unsigned int *)(v6 + 40);
    v11 = *(unsigned int *)(v6 + 36);
    HIDWORD(v15[0]) = *((_DWORD *)a2 + 1);
    *(_OWORD *)&v15[1] = v7;
    LODWORD(v15[0]) = 1;
    v15[3] = v9;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, int))(*(_QWORD *)v8 + 56LL))(
            v8,
            v11,
            v10,
            v15,
            32);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xA6,
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
    InputDeliveryServer::DeliverEventToInputService(this, a3, 0);
  }
  return 0LL;
}
