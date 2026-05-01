/*
 * XREFs of ?Init@EnergyToastMessage@@QEAAJPEBG0@Z @ 0x180051A74
 * Callers:
 *     ?RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z @ 0x1800524CC (-RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180012860 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall EnergyToastMessage::Init(
        EnergyToastMessage *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)this,
          (__int64 *)L"windows.immersivecontrolpanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel",
          (__int64)a3,
          a4) )
  {
    v9 = 1742LL;
LABEL_3:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v9,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)0x8007000ELL,
      v15);
    return 2147942414LL;
  }
  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)this + 32,
          (__int64 *)L"windows.immersivecontrolpanel_6.2.0.0_neutral_neutral_cw5n1h2txyewy",
          v7,
          v8) )
  {
    v9 = 1744LL;
    goto LABEL_3;
  }
  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)this + 64,
          (__int64 *)a2,
          v11,
          v12) )
  {
    v9 = 1746LL;
    goto LABEL_3;
  }
  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)this + 96,
          (__int64 *)a3,
          v13,
          v14) )
  {
    v9 = 1748LL;
    goto LABEL_3;
  }
  return 0LL;
}
