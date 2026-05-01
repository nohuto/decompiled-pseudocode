/*
 * XREFs of ?Init@AppEnergyInformationForUser@@QEAAJKPEAX@Z @ 0x1800519BC
 * Callers:
 *     ?GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInformationForUser@@@Z @ 0x1800361E4 (-GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInfor.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180053A80 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppEnergyInformationForUser::Init(AppEnergyInformationForUser *this, int a2, void *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  DWORD LengthSid; // ebp
  void *v10; // rax
  void *v11; // rdx
  unsigned int v12; // r8d
  const char *v13; // r9
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IsValidSid(a3) )
  {
    v6 = -2147024809;
    v7 = 1603LL;
LABEL_3:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v7,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)v6,
      v14);
    return v6;
  }
  LengthSid = GetLengthSid(a3);
  v10 = operator new[](LengthSid, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 1) = v10;
  if ( !v10 )
  {
    v6 = -2147024882;
    v7 = 1607LL;
    goto LABEL_3;
  }
  if ( !CopySid(LengthSid, v10, a3) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, v11, v12, v13);
    __debugbreak();
  }
  *((_DWORD *)this + 4) = a2;
  return 0LL;
}
