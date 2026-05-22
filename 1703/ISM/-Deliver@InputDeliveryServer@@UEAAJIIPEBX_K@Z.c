/*
 * XREFs of ?Deliver@InputDeliveryServer@@UEAAJIIPEBX_K@Z @ 0x180069CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::Deliver(
        InputDeliveryServer *this,
        __int64 a2,
        __int64 a3,
        const void *a4,
        unsigned __int64 a5)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, const void *, _DWORD))(**((_QWORD **)this + 11) + 56LL))(
         *((_QWORD *)this + 11),
         a2,
         a3,
         a4,
         a5);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x219,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x180069D03LL);
  }
  return 0LL;
}
