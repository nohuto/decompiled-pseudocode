/*
 * XREFs of ?OnEnergyConsumed@AppEnergyInformation@@UEAAJKHK@Z @ 0x18002A950
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_delete@UAppEnergyInformationWorkItem@AppEnergyInformation@@@tlx@@YAXPEAUAppEnergyInformationWorkItem@AppEnergyInformation@@@Z @ 0x18004F848 (--$_delete@UAppEnergyInformationWorkItem@AppEnergyInformation@@@tlx@@YAXPEAUAppEnergyInformation.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::OnEnergyConsumed(AppEnergyInformation *this, int a2, int a3)
{
  _DWORD *v5; // rbx
  _DWORD *v7; // rax
  char *v8; // rbp
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0LL;
  v7 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *v7 = a2;
    v5 = v7;
    v7[1] = a3;
    if ( this )
      v8 = (char *)this + 8;
    else
      v8 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *, _DWORD *))(**((_QWORD **)this + 37) + 40LL))(
           *((_QWORD *)this + 37),
           v8,
           v7);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v5 = 0LL;
      v10 = 0;
      goto LABEL_10;
    }
    v11 = (unsigned int)v9;
    v12 = 963LL;
  }
  else
  {
    v10 = -2147024882;
    v12 = 958LL;
    v11 = 2147942414LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    (void *)v12,
    (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
    (const char *)v11,
    v14);
LABEL_10:
  if ( v5 )
    tlx::_delete<AppEnergyInformation::AppEnergyInformationWorkItem>(v5);
  return v10;
}
