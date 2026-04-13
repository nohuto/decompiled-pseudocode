/*
 * XREFs of ?MakeNoOpService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180055CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_shared@VNoOpService@Actions@CreativeFramework@@@std@@YA?AV?$shared_ptr@VNoOpService@Actions@CreativeFramework@@@0@XZ @ 0x18005600C (--$make_shared@VNoOpService@Actions@CreativeFramework@@@std@@YA-AV-$shared_ptr@VNoOpService@Acti.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CreativeFramework::Actions::MakeNoOpService(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rbx
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v8; // [rsp+30h] [rbp-18h]

  v2 = (__int64 *)std::make_shared<CreativeFramework::Actions::NoOpService>(v7);
  v3 = *v2;
  *v2 = 0LL;
  *a1 = v3;
  v4 = v2[1];
  v2[1] = 0LL;
  v5 = v8;
  a1[1] = v4;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
