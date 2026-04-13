/*
 * XREFs of ?GetActionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@W4ActionServices@12@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180055D54
 * Callers:
 *     ?GetActionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@W4ActionServices@12@AEBUActionContext@12@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@4@@Z @ 0x180055E40 (-GetActionService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Acti_ea_180055E40.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800136E0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180038088 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CreativeFramework::Actions::GetActionService(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  void **v4; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  unsigned int v11; // eax
  _BYTE v12[8]; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (void **)&unk_180080D30;
  while ( *(_DWORD *)v4 != a2 )
  {
    v4 += 2;
    if ( v4 == &CreativeFramework::Actions::IActionService::`vftable' )
    {
      v11 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\actionfactory.cpp",
        (const char *)v11);
      JUMPOUT(0x180055E3CLL);
    }
  }
  v6 = (__int64 *)((__int64 (__fastcall *)(_BYTE *, __int64, __int64))v4[1])(v12, a3, a4);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a1 != v6 )
  {
    v7 = a1[1];
    a1[1] = v6[1];
    v6[1] = v7;
    v8 = *a1;
    *a1 = *v6;
    *v6 = v8;
  }
  v9 = v13;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return a1;
}
