/*
 * XREFs of ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x180005F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180006D20 (-PopulateDefaultLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITa.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180006E7C (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 *     ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18000706C (-PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskba.c)
 *     ?ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x180007B8C (-ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITas.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::GetTaskbarLayout(TaskbarLayoutPolicyManager *a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v9; // ebx
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r14
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 i; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v23; // [rsp+90h] [rbp+30h] BYREF
  char v24; // [rsp+A0h] [rbp+40h] BYREF

  v4 = a2;
  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(TaskbarLayoutPolicyManager *, __int64, int *, char *))(*(_QWORD *)a1 + 24LL))(
         a1,
         a2,
         &v23,
         &v24);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  if ( v23 )
  {
    v10 = 0LL;
    v18 = 0LL;
    v11 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    if ( v4 )
    {
      v12 = v4 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
        {
          v9 = -2147024809;
          goto LABEL_19;
        }
        v13 = TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(a1);
        v9 = v13;
        if ( v13 < 0 )
        {
          v15 = 180LL;
          goto LABEL_17;
        }
      }
      else
      {
        v13 = TaskbarLayoutPolicyManager::PopulateOEMLayoutItems(a1, &v18);
        v9 = v13;
        if ( v13 < 0 )
        {
          v15 = 177LL;
          goto LABEL_17;
        }
      }
    }
    else
    {
      v13 = TaskbarLayoutPolicyManager::PopulateDefaultLayoutItems(a1, &v18);
      v9 = v13;
      if ( v13 < 0 )
      {
        v15 = 174LL;
        goto LABEL_17;
      }
    }
    v13 = TaskbarLayoutPolicyManager::ConvertItemsToObjectArray(v14, &v18, a3);
    v9 = v13;
    if ( v13 >= 0 )
    {
LABEL_18:
      v10 = v18;
      v11 = v19;
LABEL_19:
      if ( v10 )
      {
        for ( i = 0LL; i < v11; ++i )
        {
          v17 = v10[i];
          if ( v17 )
          {
            v10[i] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
        CoTaskMemFree(v10);
      }
      return v9;
    }
    v15 = 188LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_18;
  }
  v9 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA8,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)0x80004005LL);
  return v9;
}
