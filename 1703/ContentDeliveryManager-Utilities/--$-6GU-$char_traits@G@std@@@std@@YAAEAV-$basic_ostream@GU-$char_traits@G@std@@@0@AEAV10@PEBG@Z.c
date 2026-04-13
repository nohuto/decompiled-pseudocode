/*
 * XREFs of ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x18003DC90
 * Callers:
 *     ?GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180038E48 (-GetSubscriptionPlacementNameFromSubscriptionId@SubscribedContentStore@CreativeFramework@@YA-AV-.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180039970 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002382C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x18002C19C (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x18002EAE0 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x18006B434 (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::operator<<<unsigned short,std::char_traits<unsigned short>>(__int64 a1, _WORD *a2)
{
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned __int16 v9; // r8
  __int64 v10; // rcx
  int v11; // edx
  _WORD **v12; // rcx
  unsigned __int16 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int16 v16; // r8
  __int64 v17; // rcx
  int v18; // edx
  _WORD **v19; // rcx
  unsigned __int16 *v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rcx
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // [rsp+28h] [rbp-40h] BYREF
  char v29; // [rsp+30h] [rbp-38h]
  int v31; // [rsp+78h] [rbp+10h]

  v3 = a1;
  v4 = 0;
  v31 = 0;
  if ( *a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 40);
  if ( v6 <= 0 || v6 <= v5 )
    v7 = 0LL;
  else
    v7 = v6 - v5;
  std::basic_ostream<unsigned short>::sentry::sentry((__int64)&v28, a1);
  if ( v29 )
  {
    try
    {
      if ( (*(_DWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 24) & 0x1C0) != 0x40 )
      {
        while ( v7 > 0 )
        {
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
            goto LABEL_22;
          --v7;
        }
      }
      v14 = *(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72);
      if ( (*(__int64 (__fastcall **)(__int64, _WORD *, __int64))(*(_QWORD *)v14 + 72LL))(v14, a2, v5) == v5 )
      {
        while ( v7 > 0 )
        {
          v15 = *(int *)(*(_QWORD *)v3 + 4LL);
          v16 = *(_WORD *)(v15 + v3 + 88);
          v17 = *(_QWORD *)(v15 + v3 + 72);
          if ( **(_QWORD **)(v17 + 64) )
            v18 = **(_DWORD **)(v17 + 88);
          else
            v18 = 0;
          if ( v18 <= 0 )
          {
            v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 24LL))(v17, v16);
          }
          else
          {
            --**(_DWORD **)(v17 + 88);
            v19 = *(_WORD ***)(v17 + 64);
            v20 = (*v19)++;
            *v20 = v16;
          }
          if ( v16 == 0xFFFF )
          {
            v4 = 4;
            goto LABEL_32;
          }
          --v7;
        }
      }
      else
      {
LABEL_22:
        v4 = 4;
LABEL_32:
        v31 = 4;
      }
      *(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 40) = 0LL;
    }
    catch ( ... )
    {
      v25 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
      v26 = *(_DWORD *)(v25 + 16) | 4;
      v27 = v26 & 0x17;
      *(_DWORD *)(v25 + 16) = v27;
      if ( (v27 & *(_DWORD *)(v25 + 20)) != 0 )
        throw;
      v3 = a1;
      v4 = v31;
    }
  }
  else
  {
    v4 = 4;
  }
  v21 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
  if ( v4 )
  {
    v22 = v4 | *(_DWORD *)(v21 + 16);
    if ( !*(_QWORD *)(v21 + 72) )
      LOBYTE(v22) = v22 | 4;
    std::ios_base::clear((std::ios_base *)v21, v22, 0);
  }
  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(v28);
  v23 = *(_QWORD *)(*(int *)(*(_QWORD *)v28 + 4LL) + v28 + 72);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return v3;
}
