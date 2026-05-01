/*
 * XREFs of ?GetOrCreateEnergyInformationForUser@AppEnergyInformation@@IEAAJKPEAU_SID@@PEAPEAVAppEnergyInformationForUser@@@Z @ 0x180049C38
 * Callers:
 *     ?StartEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z @ 0x18004C8D4 (-StartEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z.c)
 *     ?StopEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z @ 0x18004CACC (-StopEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_delete@VAppEnergyInformationForUser@@@tlx@@YAXPEAVAppEnergyInformationForUser@@@Z @ 0x1800487D8 (--$_delete@VAppEnergyInformationForUser@@@tlx@@YAXPEAVAppEnergyInformationForUser@@@Z.c)
 *     ?Init@AppEnergyInformationForUser@@QEAAJKPEAX@Z @ 0x18004AB24 (-Init@AppEnergyInformationForUser@@QEAAJKPEAX@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::GetOrCreateEnergyInformationForUser(
        AppEnergyInformation *this,
        unsigned int a2,
        struct _SID *a3,
        struct AppEnergyInformationForUser **a4)
{
  unsigned int v4; // edi
  char *v5; // r14
  char *i; // rbx
  __int64 v10; // rax
  AppEnergyInformationForUser *v11; // rbx
  AppEnergyInformationForUser *v12; // rax
  AppEnergyInformationForUser *v13; // rsi
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  int v20; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = (char *)this + 24;
  *a4 = 0LL;
  for ( i = (char *)*((_QWORD *)this + 3); i != v5; i = *(char **)i )
  {
    if ( EqualSid(a3, *(PSID *)(*((_QWORD *)i + 2) + 8LL)) )
    {
      v10 = *((_QWORD *)i + 2);
      if ( *(_DWORD *)(v10 + 16) != a2 )
        *(_DWORD *)(v10 + 16) = a2;
      *a4 = (struct AppEnergyInformationForUser *)*((_QWORD *)i + 2);
      break;
    }
  }
  if ( !*a4 )
  {
    v11 = 0LL;
    v12 = (AppEnergyInformationForUser *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      *(_DWORD *)v12 = 0;
      *((_QWORD *)v12 + 1) = 0LL;
      *((_DWORD *)v12 + 4) = 0;
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      v11 = v13;
      v14 = AppEnergyInformationForUser::Init(v13, a2, a3);
      v4 = v14;
      if ( v14 < 0 )
      {
        v15 = (unsigned int)v14;
        v16 = 893LL;
        goto LABEL_20;
      }
      v17 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v17 )
      {
        v17[2] = v13;
        v18 = (_QWORD *)*((_QWORD *)v5 + 1);
        v17[1] = v18;
        *v17 = v5;
        *a4 = v13;
        *v18 = v17;
        *((_QWORD *)v5 + 1) = v17;
        ++*((_QWORD *)v5 + 2);
        return v4;
      }
      v16 = 895LL;
    }
    else
    {
      v16 = 890LL;
    }
    v4 = -2147024882;
    v15 = 2147942414LL;
LABEL_20:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v16,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)v15,
      v20);
    if ( v11 )
      tlx::_delete<AppEnergyInformationForUser>(v11);
  }
  return v4;
}
