/*
 * XREFs of ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C017F390
 * Callers:
 *     <none>
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004C24 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008180 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0008324 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0008FC0 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C00096C0 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0090A40 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
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
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r12
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v42; // [rsp+30h] [rbp-D0h] BYREF
  struct DMMVIDPNPRESENTPATH *(__fastcall *v43)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+48h] [rbp-B8h]
  _BYTE *v45; // [rsp+50h] [rbp-B0h]
  _BYTE *v46; // [rsp+70h] [rbp-90h]
  _BYTE v47[80]; // [rsp+80h] [rbp-80h] BYREF
  int v48; // [rsp+D0h] [rbp-30h]

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
  v42 = 0LL;
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
    (DMMVIDPNPRESENTPATH *)v47,
    v25,
    v23,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v48 != 2 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v27);
    WdLogEvent5_WdAssertion(v28);
  }
  v44 = 0;
  v43 = DMMVIDPNTOPOLOGY::FindByValue;
  v46 = v47;
  v45 = v47;
  v29 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v17,
          (__int64)&v43,
          &v42,
          1);
  v34 = v29;
  v14 = -1071774937;
  if ( v29 == -1071774937 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    v35[3] = v10;
    v35[4] = v5;
    v35[5] = v17;
    WdLogEvent5_WdWarning(v35);
    if ( v42 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v36);
      WdLogEvent5_WdAssertion(v37);
    }
    goto LABEL_19;
  }
  if ( v29 < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v31);
    v38[3] = v10;
    v38[4] = v5;
    v38[5] = v17;
    v38[6] = v34;
    WdLogEvent5_WdError(v38);
    v14 = v34;
LABEL_19:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v47);
    goto LABEL_23;
  }
  v39 = v42;
  if ( !v42 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v31);
    WdLogEvent5_WdAssertion(v40);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v47);
  *a4 = v39;
  v14 = 0;
LABEL_23:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 7035);
  return v14;
}
