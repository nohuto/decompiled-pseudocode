/*
 * XREFs of ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180005D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180006188 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180006598 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180006700 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18000693C (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800079AC (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180007A88 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180007D78 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyTaskbarLayout(__int64 a1, int a2, int *a3, int *a4)
{
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  int ActivationFactory; // eax
  TaskbarLayoutPolicyManager *v12; // rcx
  unsigned int v13; // edi
  struct IXMLDOMDocument2 *v14; // rbx
  TaskbarLayoutPolicyManager *v15; // rcx
  int CanApplyGroupPolicyLayout; // eax
  __int64 v17; // rdx
  TaskbarLayoutPolicyManager *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  struct IXMLDOMNode *v22; // rcx
  __int64 v23; // rcx
  struct IXMLDOMNode *v25; // [rsp+20h] [rbp-50h] BYREF
  __int64 v26; // [rsp+28h] [rbp-48h] BYREF
  struct IXMLDOMDocument2 *v27[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v27[1] = (struct IXMLDOMDocument2 *)-2LL;
  *a3 = 0;
  *a4 = 0;
  v26 = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(
         L"SharedStartModel.StartLayoutInitializationStatics",
         0x31u,
         &hstringHeader,
         &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v26);
  v13 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_35;
  }
  v14 = 0LL;
  v27[0] = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      TaskbarLayoutPolicyManager::GetOEMLayoutXML((TaskbarLayoutPolicyManager *)a1, v27);
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_32;
      if ( (unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
      {
        CanApplyGroupPolicyLayout = TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
                                      (TaskbarLayoutPolicyManager *)a1,
                                      a3,
                                      a4);
        v13 = CanApplyGroupPolicyLayout;
        if ( CanApplyGroupPolicyLayout >= 0 )
          goto LABEL_33;
        v17 = 125LL;
        goto LABEL_21;
      }
      TaskbarLayoutPolicyManager::GetLayoutModificationXML(v15, v27);
    }
  }
  else
  {
    TaskbarLayoutPolicyManager::GetDefaultLayoutXML(v12, v27);
  }
  v14 = v27[0];
  if ( v27[0] )
  {
    v19 = a2
        ? TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v18, v27[0])
        : TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML(v18, v27[0]);
    if ( v19 >= 0 )
    {
      hstringHeader = *(HSTRING_HEADER *)(a1 + 64);
      CanApplyGroupPolicyLayout = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, HSTRING_HEADER *))v14->lpVtbl->setProperty)(
                                    v14,
                                    *(_QWORD *)(a1 + 88),
                                    &hstringHeader);
      v13 = CanApplyGroupPolicyLayout;
      if ( CanApplyGroupPolicyLayout < 0 )
      {
        v17 = 143LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)CanApplyGroupPolicyLayout);
        goto LABEL_33;
      }
      if ( a2 )
        v20 = *(_QWORD *)(a1 + 104);
      else
        v20 = *(_QWORD *)(a1 + 96);
      v25 = 0LL;
      v21 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, __int64, struct IXMLDOMNode **))v14->lpVtbl->selectSingleNode)(
              v14,
              v20,
              &v25);
      v22 = v25;
      if ( v21 >= 0 && v25 )
      {
        if ( a2 == 2 )
        {
          *a4 = TaskbarLayoutPolicyManager::IsOverrideLayout((TaskbarLayoutPolicyManager *)a1, v25);
          v22 = v25;
        }
        *a3 = 1;
      }
      if ( v22 )
      {
        v25 = 0LL;
        ((void (__fastcall *)(struct IXMLDOMNode *))v22->lpVtbl->Release)(v22);
      }
    }
  }
LABEL_32:
  v13 = 0;
LABEL_33:
  if ( v14 )
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v14->lpVtbl->Release)(v14);
LABEL_35:
  v23 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return v13;
}
