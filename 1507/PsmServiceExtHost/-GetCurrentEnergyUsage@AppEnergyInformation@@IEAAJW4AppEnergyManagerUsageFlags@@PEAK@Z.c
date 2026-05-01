/*
 * XREFs of ?GetCurrentEnergyUsage@AppEnergyInformation@@IEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x18004951C
 * Callers:
 *     ?GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x180049714 (-GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x180049714 (-GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z.c)
 *     ?OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z @ 0x18004B1F8 (-OnEnergyConsumedInternal@AppEnergyInformation@@IEAAJKH@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::GetCurrentEnergyUsage(AppEnergyInformation *a1, int a2, __int64 a3)
{
  int v4; // esi
  _QWORD *v6; // rdi
  unsigned int v7; // r12d
  _QWORD *i; // rbx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rsi
  int v12; // eax
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  char *v15; // rax
  int v16; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h]
  __int64 v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v19 = a2;
  v4 = 0;
  if ( *((_QWORD *)a1 + 34) )
  {
    v6 = (_QWORD *)((char *)a1 + 24);
    v7 = a2 & 1;
    for ( i = (_QWORD *)*((_QWORD *)a1 + 3); i != v6; i = (_QWORD *)*i )
    {
      v9 = *((_QWORD *)a1 + 34);
      v10 = *((_QWORD *)a1 + 30);
      v11 = i[2];
      v18 = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)v9 + 64LL))(
              v9,
              *(_QWORD *)(v11 + 8),
              v10,
              v7,
              &v18);
      v13 = (_QWORD *)*((_QWORD *)a1 + 30);
      v14 = -1LL;
      v4 = v12;
      do
        ++v14;
      while ( *((_WORD *)v13 + v14) );
      if ( v13 == (_QWORD *)((char *)a1 + 256) )
        v15 = (char *)a1 + 270;
      else
        v15 = (char *)*((_QWORD *)a1 + 32);
      if ( v14 > (v15 - (char *)v13) >> 1 )
        __int2c();
      *((_QWORD *)a1 + 31) = (char *)v13 + 2 * v14;
      if ( v4 >= 0 )
        AppEnergyInformation::OnEnergyConsumedInternal(a1, v18, v7);
    }
    if ( v20 )
      return (unsigned int)AppEnergyInformation::GetEnergyUsage(a1, v19 ^ 2u);
    return (unsigned int)v4;
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)0x3C3,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)0x80004001LL,
      v16);
    return 2147500033LL;
  }
}
