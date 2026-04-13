/*
 * XREFs of ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x180014A94
 * Callers:
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x1800124D8 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x180012698 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18000AF9C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18000B058 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x180012094 (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x1800188B4 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::basic_istream<unsigned short>::_Ipfx(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // r14
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  __int64 v8; // rdi
  unsigned __int16 *v9; // rdx
  int v10; // ecx
  unsigned __int16 v11; // di
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // ecx
  unsigned __int16 **v17; // rax
  unsigned __int16 *v18; // rcx
  int v19; // ecx
  _WORD **v20; // rcx
  __int16 *v21; // rdx
  __int16 v22; // ax
  unsigned __int16 *v23; // rdx
  int v24; // ecx
  unsigned __int16 v25; // ax
  int v27; // edx
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // ecx
  __int64 v32; // [rsp+70h] [rbp+18h] BYREF

  v1 = a1;
  v2 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
  if ( !*(_DWORD *)(v2 + 16) )
  {
    v3 = *(_QWORD *)(v2 + 80);
    if ( v3 )
      std::basic_ostream<unsigned short>::flush(v3);
    v4 = v1 + *(int *)(*(_QWORD *)v1 + 4LL);
    if ( (*(_BYTE *)(v4 + 24) & 1) != 0 )
    {
      v5 = std::ios_base::getloc(v4, &v32);
      v6 = std::use_facet<std::ctype<unsigned short>>(v5);
      if ( v32 )
      {
        v7 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        if ( v7 )
          (**v7)(v7, 1LL);
      }
      try
      {
        v8 = *(_QWORD *)(*(int *)(*(_QWORD *)v1 + 4LL) + v1 + 72);
        v9 = **(unsigned __int16 ***)(v8 + 56);
        if ( v9 )
          v10 = **(_DWORD **)(v8 + 80);
        else
          v10 = 0;
        if ( v10 <= 0 )
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
        else
          v11 = *v9;
        while ( v11 != 0xFFFF )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, 72LL, v11) )
            goto LABEL_49;
          v14 = *(_QWORD *)(*(int *)(*(_QWORD *)v1 + 4LL) + v1 + 72);
          v15 = **(_QWORD **)(v14 + 56);
          if ( v15 )
            v16 = **(_DWORD **)(v14 + 80);
          else
            v16 = 0;
          if ( v16 <= 1 )
          {
            if ( v15 )
              v19 = **(_DWORD **)(v14 + 80);
            else
              v19 = 0;
            if ( v19 <= 0 )
            {
              v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
            }
            else
            {
              --**(_DWORD **)(v14 + 80);
              v20 = *(_WORD ***)(v14 + 56);
              v21 = (*v20)++;
              v22 = *v21;
            }
            if ( v22 == -1 )
            {
              v11 = -1;
            }
            else
            {
              v23 = **(unsigned __int16 ***)(v14 + 56);
              if ( v23 )
                v24 = **(_DWORD **)(v14 + 80);
              else
                v24 = 0;
              if ( v24 <= 0 )
                v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
              else
                v25 = *v23;
              v11 = v25;
            }
          }
          else
          {
            --**(_DWORD **)(v14 + 80);
            v17 = *(unsigned __int16 ***)(v14 + 56);
            v18 = *v17 + 1;
            *v17 = v18;
            v11 = *v18;
          }
        }
        v12 = v1 + *(int *)(*(_QWORD *)v1 + 4LL);
        v13 = *(_DWORD *)(v12 + 16) | 1;
        if ( !*(_QWORD *)(v12 + 72) )
          LOBYTE(v13) = *(_BYTE *)(v12 + 16) | 5;
        std::ios_base::clear((std::ios_base *)v12, v13, 0);
      }
      catch ( ... )
      {
        v28 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
        v29 = *(_DWORD *)(v28 + 16) | 4;
        v30 = v29 & 0x17;
        *(_DWORD *)(v28 + 16) = v30;
        if ( (v30 & *(_DWORD *)(v28 + 20)) != 0 )
          throw;
        v1 = a1;
        goto LABEL_39;
      }
LABEL_49:
      ;
    }
LABEL_39:
    v2 = v1 + *(int *)(*(_QWORD *)v1 + 4LL);
    if ( !*(_DWORD *)(v2 + 16) )
      return 1;
  }
  v27 = *(_DWORD *)(v2 + 16) | 2;
  if ( !*(_QWORD *)(v2 + 72) )
    LOBYTE(v27) = *(_BYTE *)(v2 + 16) | 6;
  std::ios_base::clear((std::ios_base *)v2, v27, 0);
  return 0;
}
