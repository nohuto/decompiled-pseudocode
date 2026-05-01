/*
 * XREFs of ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180018F54
 * Callers:
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180019188 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180003D64 (-_com_issue_error@@YAXJ@Z.c)
 *     ??1_bstr_t@@QEAA@XZ @ 0x180008E8C (--1_bstr_t@@QEAA@XZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180008EFC (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall StartLayout::AddSchemaToCollection(
        StartLayout *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct IXMLDOMSchemaCollection *a4)
{
  HRESULT v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  LONGLONG v15; // rcx
  LPVOID v16; // rcx
  LPVOID ppv; // [rsp+38h] [rbp-19h] BYREF
  LONGLONG v19; // [rsp+40h] [rbp-11h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v21[8]; // [rsp+50h] [rbp-1h] BYREF
  VARIANTARG pvarg; // [rsp+58h] [rbp+7h] BYREF
  __int64 v23; // [rsp+70h] [rbp+1Fh]
  VARIANTARG v24; // [rsp+78h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int16 v26; // [rsp+D0h] [rbp+7Fh] BYREF

  v23 = -2LL;
  ppv = 0LL;
  v7 = CoCreateInstance(
         &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_2933bf81_7b36_11d2_b20e_00c04f983e60,
         &ppv);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 397LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_26;
  }
  v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 398LL;
    goto LABEL_5;
  }
  _bstr_t::_bstr_t((_bstr_t *)&v20, a2);
  if ( v20 )
    v10 = *v20;
  else
    v10 = 0LL;
  (*(void (__fastcall **)(LPVOID, __int64, __int16 *))(*(_QWORD *)ppv + 520LL))(ppv, v10, &v26);
  if ( v26 == -1 )
  {
    v19 = 0LL;
    v11 = (*(__int64 (__fastcall **)(LPVOID, LONGLONG *))(*(_QWORD *)ppv + 360LL))(ppv, &v19);
    v8 = v11;
    if ( v11 >= 0 )
    {
      pvarg.vt = 9;
      pvarg.llVal = v19;
      if ( v19 )
        (*(void (__fastcall **)(LONGLONG))(*(_QWORD *)v19 + 8LL))(v19);
      v24 = pvarg;
      v14 = *(_QWORD **)_bstr_t::_bstr_t((_bstr_t *)v21, (const unsigned __int16 *)this);
      if ( v14 )
        v14 = (_QWORD *)*v14;
      v8 = (*(__int64 (__fastcall **)(const unsigned __int16 *, _QWORD *, VARIANTARG *))(*(_QWORD *)a3 + 56LL))(
             a3,
             v14,
             &v24);
      _bstr_t::~_bstr_t((_bstr_t *)v21);
      if ( VariantClear(&pvarg) < 0 )
        _com_issue_error();
      if ( v8 >= 0 )
      {
        v8 = 0;
LABEL_23:
        v15 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(LONGLONG))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_25;
      }
      v12 = (unsigned int)v8;
      v13 = 407LL;
    }
    else
    {
      v12 = (unsigned int)v11;
      v13 = 406LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v12);
    goto LABEL_23;
  }
  v8 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x193,
    (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
    (const char *)0x80004005LL);
LABEL_25:
  _bstr_t::~_bstr_t((_bstr_t *)&v20);
LABEL_26:
  v16 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v8;
}
