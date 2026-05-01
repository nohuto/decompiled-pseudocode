/*
 * XREFs of ?GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180019994
 * Callers:
 *     ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x18001A660 (-ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180003D64 (-_com_issue_error@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall StartLayout::GetUintAttributeValue(
        StartLayout *this,
        struct IXMLDOMElement *a2,
        const struct _bstr_t *a3,
        unsigned int *a4)
{
  struct IXMLDOMElementVtbl *lpVtbl; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  bool v12; // zf
  VARIANTARG pvargDest; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_DWORD *)a3 = 0;
  VariantInit(&pvargDest);
  lpVtbl = a2->lpVtbl;
  if ( a2->lpVtbl )
    lpVtbl = (struct IXMLDOMElementVtbl *)lpVtbl->QueryInterface;
  v8 = (*(__int64 (__fastcall **)(StartLayout *, struct IXMLDOMElementVtbl *, VARIANTARG *))(*(_QWORD *)this + 352LL))(
         this,
         lpVtbl,
         &pvargDest);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 25LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\xmlhelpers.cpp",
      (const char *)v10);
    goto LABEL_15;
  }
  if ( pvargDest.vt == 1 )
  {
    v9 = -2147023728;
    goto LABEL_15;
  }
  v12 = pvargDest.vt == 23;
  if ( pvargDest.vt != 23 )
  {
    if ( VariantChangeType(&pvargDest, &pvargDest, 0, 0x17u) < 0 )
      _com_issue_error();
    v12 = pvargDest.vt == 23;
  }
  if ( !v12 )
  {
    v9 = -2147418113;
    v10 = 2147549183LL;
    v11 = 29LL;
    goto LABEL_13;
  }
  *(_DWORD *)a3 = pvargDest.lVal;
  v9 = 0;
LABEL_15:
  if ( VariantClear(&pvargDest) < 0 )
    _com_issue_error();
  return v9;
}
