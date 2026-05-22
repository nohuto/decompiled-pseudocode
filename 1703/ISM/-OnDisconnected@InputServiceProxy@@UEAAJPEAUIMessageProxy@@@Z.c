/*
 * XREFs of ?OnDisconnected@InputServiceProxy@@UEAAJPEAUIMessageProxy@@@Z @ 0x1800888E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProxy::OnDisconnected(InputServiceProxy *this, struct IMessageProxy *a2)
{
  int v4; // eax
  void (__fastcall ***v5)(_QWORD, GUID *, struct IMessageProxy **); // rcx
  struct IMessageProxy *v6; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMessageProxy *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xD7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\inputservice\\lib\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180088999LL);
  }
  if ( *((_QWORD *)this + 3) )
  {
    v5 = (void (__fastcall ***)(_QWORD, GUID *, struct IMessageProxy **))*((_QWORD *)this + 3);
    v10 = 0LL;
    (**v5)(v5, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v10);
    v6 = v10;
    if ( v10 == a2 )
    {
      v7 = *((_QWORD *)this + 3);
      if ( v7 )
      {
        *((_QWORD *)this + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        v6 = v10;
      }
    }
    if ( v6 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return 0LL;
}
