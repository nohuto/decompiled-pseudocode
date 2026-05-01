/*
 * XREFs of ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180006E7C
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x180005F90 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180006188 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18000693C (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180006AA4 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x1800071C8 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(const WCHAR **this, __int64 a2)
{
  TaskbarLayoutPolicyManager *v4; // rcx
  int PolicyLayoutXML; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  struct IXMLDOMDocument2 *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-40h] BYREF
  struct IXMLDOMDocument2 *v18; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  const WCHAR *v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v23; // [rsp+90h] [rbp+30h] BYREF
  int v24; // [rsp+98h] [rbp+38h] BYREF

  v19[1] = -2LL;
  v18 = 0LL;
  if ( (int)TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout((TaskbarLayoutPolicyManager *)this, &v23, &v24) >= 0
    && v23 )
  {
    PolicyLayoutXML = TaskbarLayoutPolicyManager::GetPolicyLayoutXML(this, &v18);
    v6 = PolicyLayoutXML;
    if ( PolicyLayoutXML < 0 )
    {
      v7 = 346LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)PolicyLayoutXML);
      v8 = v18;
      goto LABEL_23;
    }
  }
  else
  {
    PolicyLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v4, &v18);
    v6 = PolicyLayoutXML;
    if ( PolicyLayoutXML < 0 )
    {
      v7 = 350LL;
      goto LABEL_7;
    }
  }
  v17 = 0LL;
  v20 = *((_OWORD *)this + 4);
  v21 = this[10];
  v8 = v18;
  v9 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, const WCHAR *, __int128 *))v18->lpVtbl->setProperty)(
         v18,
         this[11],
         &v20);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v9 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, const WCHAR *, _QWORD))v8->lpVtbl->selectSingleNode)(
           v8,
           this[13],
           &v17);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 355LL;
      goto LABEL_12;
    }
    v19[0] = 0LL;
    v11 = (**v17)(v17, &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60, v19);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v11 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *), __int64))TaskbarLayoutPolicyManager::PopulateAndSetPinned)(
              v12,
              a2,
              &v17,
              3LL);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v6 = 0;
LABEL_19:
        v14 = v19[0];
        if ( v19[0] )
        {
          v19[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        goto LABEL_21;
      }
      v13 = 359LL;
    }
    else
    {
      v13 = 358LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_19;
  }
  v10 = 354LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_21:
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
  }
LABEL_23:
  if ( v8 )
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v8->lpVtbl->Release)(v8);
  return v6;
}
