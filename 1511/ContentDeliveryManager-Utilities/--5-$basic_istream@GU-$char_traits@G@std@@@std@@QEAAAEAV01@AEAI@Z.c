/*
 * XREFs of ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x1800124D8
 * Callers:
 *     ?GetImpressionEventExpirationTime@?A0x15bf3041@@YA_KPEBG0_K@Z @ 0x18000DE38 (-GetImpressionEventExpirationTime@-A0x15bf3041@@YA_KPEBG0_K@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18000AF9C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18000B058 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x180014A94 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180018C90 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::basic_istream<unsigned short>::operator>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // r14
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  char v19; // [rsp+58h] [rbp-60h]
  __int64 v20; // [rsp+60h] [rbp-58h] BYREF
  bool v21; // [rsp+68h] [rbp-50h]
  __int64 v22; // [rsp+70h] [rbp-48h]
  _BYTE v24[56]; // [rsp+80h] [rbp-38h] BYREF
  int v26; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a1;
  v26 = 0;
  v22 = a1;
  v4 = *(int *)(*(_QWORD *)a1 + 4LL);
  v5 = *(_QWORD *)(v4 + a1 + 72);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(v4 + a1 + 72));
  if ( (unsigned __int8)std::basic_istream<unsigned short>::_Ipfx(v3) )
  {
    v6 = std::ios_base::getloc(v3 + *(int *)(*(_QWORD *)v3 + 4LL), &v27);
    v7 = std::use_facet<std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>>(v6);
    if ( v27 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      if ( v8 )
        (**v8)(v8, 1LL);
    }
    try
    {
      v9 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
      v18 = 0LL;
      v19 = 1;
      v20 = *(_QWORD *)(v9 + 72);
      v21 = v20 == 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64 *, __int64 *, __int64, int *, __int64))(*(_QWORD *)v7 + 88LL))(
        v7,
        v24,
        &v20,
        &v18,
        v9,
        &v26,
        a2);
    }
    catch ( ... )
    {
      v15 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
      v16 = *(_DWORD *)(v15 + 16) | 4;
      v17 = v16 & 0x17;
      *(_DWORD *)(v15 + 16) = v17;
      if ( (v17 & *(_DWORD *)(v15 + 20)) != 0 )
        throw;
      v3 = a1;
    }
  }
  v10 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
  if ( v26 )
  {
    v11 = v26 | *(_DWORD *)(v10 + 16);
    if ( !*(_QWORD *)(v10 + 72) )
      LOBYTE(v11) = v11 | 4;
    std::ios_base::clear((std::ios_base *)v10, v11, 0);
  }
  v12 = *(int *)(*(_QWORD *)v3 + 4LL);
  v13 = *(_QWORD *)(v12 + v3 + 72);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 16LL))(*(_QWORD *)(v12 + v3 + 72));
  return v3;
}
