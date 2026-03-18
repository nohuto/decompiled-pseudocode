/*
 * XREFs of ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C009A510
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004CDC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0005DCC (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C00062C0 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008434 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0089CE8 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 Container; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  struct DMMVIDPNTARGET *v14; // rax
  __int64 v15; // rcx
  struct DMMVIDPNSOURCE *v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  unsigned int v27; // ebx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+30h] [rbp-D0h] BYREF
  struct DMMVIDPNPRESENTPATH *(__fastcall *v46)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+48h] [rbp-B8h]
  _BYTE *v48; // [rsp+50h] [rbp-B0h]
  _BYTE *v49; // [rsp+70h] [rbp-90h]
  _BYTE v50[80]; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+D0h] [rbp-30h]

  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6021);
  if ( !a4 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v32[3] = 0LL;
    v32[4] = v7;
    v32[5] = v5;
    v32[6] = this;
    WdLogEvent5_WdError(v32);
    v27 = -1073741811;
    goto LABEL_13;
  }
  *a4 = 0LL;
  v8 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v10 = v8;
  if ( !v8 )
  {
    v33 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v33 + 24) = this;
    WdLogEvent5_WdError(v33);
    v27 = -1071774976;
    goto LABEL_13;
  }
  v45 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v8 + 160);
  if ( !IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v7) )
  {
    v34 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v34 + 24) = v7;
    WdLogEvent5_WdError(v34);
    v27 = -1071774972;
    goto LABEL_13;
  }
  v14 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v13 + 312), v5);
  if ( !v14 )
  {
    v35 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v35 + 24) = v5;
    WdLogEvent5_WdError(v35);
    v27 = -1071774971;
    goto LABEL_13;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v50,
    v16,
    v14,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v51 != 2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v36);
  }
  v47 = 0;
  v46 = DMMVIDPNTOPOLOGY::FindByValue;
  v49 = v50;
  v48 = v50;
  v21 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v10,
          (__int64)&v46,
          &v45,
          0LL);
  v26 = v21;
  v27 = -1071774937;
  if ( v21 == -1071774937 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    v37[3] = v7;
    v37[4] = v5;
    v37[5] = v10;
    WdLogEvent5_WdWarning(v37);
    if ( v45 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
      WdLogEvent5_WdAssertion(v42);
    }
    goto LABEL_24;
  }
  if ( v21 < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v23);
    v43[3] = v7;
    v43[4] = v5;
    v43[5] = v10;
    v43[6] = v26;
    WdLogEvent5_WdDmmEvent(v43);
    v27 = v26;
LABEL_24:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v50);
    goto LABEL_13;
  }
  v28 = v45;
  if ( !v45 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    WdLogEvent5_WdAssertion(v44);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v50);
  *a4 = v28;
  v27 = 0;
LABEL_13:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 6021);
  return v27;
}
