/*
 * XREFs of ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017B650
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

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r13
  __int64 v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 Container; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  struct DMMVIDPNTARGET *v23; // rax
  __int64 v24; // rcx
  struct DMMVIDPNSOURCE *v25; // r10
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r12
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v48; // [rsp+30h] [rbp-D0h] BYREF
  struct DMMVIDPNPRESENTPATH *(__fastcall *v49)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+48h] [rbp-B8h]
  _BYTE *v51; // [rsp+50h] [rbp-B0h]
  _BYTE *v52; // [rsp+70h] [rbp-90h]
  _BYTE v53[80]; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+D0h] [rbp-30h]

  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 7035);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v10 = v7;
  v8[3] = v7;
  v8[4] = v5;
  v8[5] = this;
  v8[6] = a4;
  if ( !a4 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = 0LL;
    v11[4] = v7;
    v11[5] = v5;
    v11[6] = this;
    WdLogEvent5_WdError(v11);
    v14 = -1073741811;
    goto LABEL_23;
  }
  *a4 = 0LL;
  v15 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v17 = v15;
  if ( !v15 )
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    v14 = -1071774976;
    goto LABEL_23;
  }
  v48 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v15 + 160);
  if ( !IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v7) )
  {
    v22 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v22 + 24) = v7;
    WdLogEvent5_WdError(v22);
    v14 = -1071774972;
    goto LABEL_23;
  }
  v23 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v21 + 312), v5);
  if ( !v23 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v26 + 24) = v5;
    WdLogEvent5_WdError(v26);
    v14 = -1071774971;
    goto LABEL_23;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v53,
    v25,
    v23,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v54 != 2 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
    WdLogEvent5_WdAssertion(v31);
  }
  v50 = 0;
  v49 = DMMVIDPNTOPOLOGY::FindByValue;
  v52 = v53;
  v51 = v53;
  v32 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v17,
          (__int64)&v49,
          &v48,
          1LL);
  v37 = v32;
  v14 = -1071774937;
  if ( v32 == -1071774937 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    v38[3] = v10;
    v38[4] = v5;
    v38[5] = v17;
    WdLogEvent5_WdWarning(v38);
    if ( v48 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
      WdLogEvent5_WdAssertion(v43);
    }
    goto LABEL_19;
  }
  if ( v32 < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v34);
    v44[3] = v10;
    v44[4] = v5;
    v44[5] = v17;
    v44[6] = v37;
    WdLogEvent5_WdError(v44);
    v14 = v37;
LABEL_19:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v53);
    goto LABEL_23;
  }
  v45 = v48;
  if ( !v48 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
    WdLogEvent5_WdAssertion(v46);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v53);
  *a4 = v45;
  v14 = 0;
LABEL_23:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 7035);
  return v14;
}
