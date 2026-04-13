/*
 * XREFs of ??$query@UIStorageItem@Storage@Windows@@@?$com_ptr_t@UIStorageFile@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStorageItem@Storage@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180053CF0
 * Callers:
 *     _lambda_54b1615c74727b96cfd9244fd3177ed2_::operator() @ 0x180052CFC (_lambda_54b1615c74727b96cfd9244fd3177ed2_--operator().c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Storage::IStorageFile,wil::err_exception_policy>::query<Windows::Storage::IStorageItem>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15CA,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x180053D3DLL);
  }
  return a2;
}
