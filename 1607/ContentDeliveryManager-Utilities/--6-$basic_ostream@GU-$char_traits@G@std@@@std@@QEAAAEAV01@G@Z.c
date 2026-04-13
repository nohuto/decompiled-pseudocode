/*
 * XREFs of ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x180053618
 * Callers:
 *     ?Rot13EncodeStringHelper@Details@Obfuscation@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180048B5C (-Rot13EncodeStringHelper@Details@Obfuscation@ContentManagement@@YA-AV-$basic_string@GU-$char_tra.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18001C28C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x180024B44 (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x180027418 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x1800548CC (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_ostream<unsigned short>::operator<<(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rsi
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned __int16 v9; // r8
  __int64 v10; // rcx
  int v11; // edx
  _WORD **v12; // rcx
  unsigned __int16 *v13; // rdx
  __int64 v14; // rcx
  int v15; // edx
  _WORD **v16; // rcx
  unsigned __int16 *v17; // rdx
  __int64 v18; // rcx
  unsigned __int16 v19; // r8
  __int64 v20; // rcx
  int v21; // edx
  _WORD **v22; // rcx
  unsigned __int16 *v23; // rdx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rcx
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // ecx
  __int64 v31; // [rsp+28h] [rbp-40h] BYREF
  char v32; // [rsp+30h] [rbp-38h]
  int v34; // [rsp+80h] [rbp+18h]

  v3 = a1;
  v4 = 0;
  v34 = 0;
  std::basic_ostream<unsigned short>::sentry::sentry((__int64)&v31, a1);
  if ( v32 )
  {
    v5 = *(int *)(*(_QWORD *)v3 + 4LL);
    v6 = *(_QWORD *)(v5 + v3 + 40);
    if ( v6 > 1 )
      v7 = v6 - 1;
    else
      v7 = 0LL;
    try
    {
      if ( (*(_DWORD *)(v5 + v3 + 24) & 0x1C0) == 0x40 )
      {
LABEL_17:
        v14 = *(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72);
        if ( **(_QWORD **)(v14 + 64) )
          v15 = **(_DWORD **)(v14 + 88);
        else
          v15 = 0;
        if ( v15 <= 0 )
        {
          a2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 24LL))(v14, a2);
        }
        else
        {
          --**(_DWORD **)(v14 + 88);
          v16 = *(_WORD ***)(v14 + 64);
          v17 = (*v16)++;
          *v17 = a2;
        }
        if ( a2 == 0xFFFF )
          v4 = 4;
        while ( 1 )
        {
          v34 = v4;
          if ( v4 || v7 <= 0 )
            break;
          v18 = *(int *)(*(_QWORD *)v3 + 4LL);
          v19 = *(_WORD *)(v18 + v3 + 88);
          v20 = *(_QWORD *)(v18 + v3 + 72);
          if ( **(_QWORD **)(v20 + 64) )
            v21 = **(_DWORD **)(v20 + 88);
          else
            v21 = 0;
          if ( v21 <= 0 )
          {
            v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 24LL))(v20, v19);
          }
          else
          {
            --**(_DWORD **)(v20 + 88);
            v22 = *(_WORD ***)(v20 + 64);
            v23 = (*v22)++;
            *v23 = v19;
          }
          if ( v19 == 0xFFFF )
            v4 = 4;
          --v7;
        }
      }
      else
      {
        while ( !v4 )
        {
          if ( v7 <= 0 )
            goto LABEL_17;
          v8 = *(int *)(*(_QWORD *)v3 + 4LL);
          v9 = *(_WORD *)(v8 + v3 + 88);
          v10 = *(_QWORD *)(v8 + v3 + 72);
          if ( **(_QWORD **)(v10 + 64) )
            v11 = **(_DWORD **)(v10 + 88);
          else
            v11 = 0;
          if ( v11 <= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, v9);
          }
          else
          {
            --**(_DWORD **)(v10 + 88);
            v12 = *(_WORD ***)(v10 + 64);
            v13 = (*v12)++;
            *v13 = v9;
          }
          if ( v9 == 0xFFFF )
            v4 = 4;
          v34 = v4;
          --v7;
        }
      }
    }
    catch ( ... )
    {
      v28 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
      v29 = *(_DWORD *)(v28 + 16) | 4;
      v30 = v29 & 0x17;
      *(_DWORD *)(v28 + 16) = v30;
      if ( (v30 & *(_DWORD *)(v28 + 20)) != 0 )
        throw;
      v3 = a1;
      v4 = v34;
    }
  }
  *(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 40) = 0LL;
  v24 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
  if ( v4 )
  {
    v25 = v4 | *(_DWORD *)(v24 + 16);
    if ( !*(_QWORD *)(v24 + 72) )
      LOBYTE(v25) = v25 | 4;
    std::ios_base::clear((std::ios_base *)v24, v25, 0);
  }
  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(v31);
  v26 = *(_QWORD *)(*(int *)(*(_QWORD *)v31 + 4LL) + v31 + 72);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return v3;
}
