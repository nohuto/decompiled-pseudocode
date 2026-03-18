/*
 * XREFs of ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A0310
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
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  unsigned int v24; // ebx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  struct DMMVIDPNPRESENTPATH *(__fastcall *v40)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *); // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+48h] [rbp-B8h]
  _BYTE *v42; // [rsp+50h] [rbp-B0h]
  _BYTE *v43; // [rsp+70h] [rbp-90h]
  _BYTE v44[80]; // [rsp+80h] [rbp-80h] BYREF
  int v45; // [rsp+D0h] [rbp-30h]

  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6021);
  if ( !a4 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v29[3] = 0LL;
    v29[4] = v7;
    v29[5] = v5;
    v29[6] = this;
    WdLogEvent5_WdError(v29);
    v24 = -1073741811;
    goto LABEL_13;
  }
  *a4 = 0LL;
  v8 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v10 = v8;
  if ( !v8 )
  {
    v30 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    v24 = -1071774976;
    goto LABEL_13;
  }
  v39 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v8 + 160);
  if ( !IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v7) )
  {
    v31 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v31 + 24) = v7;
    WdLogEvent5_WdError(v31);
    v24 = -1071774972;
    goto LABEL_13;
  }
  v14 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v13 + 312), v5);
  if ( !v14 )
  {
    v32 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v32 + 24) = v5;
    WdLogEvent5_WdError(v32);
    v24 = -1071774971;
    goto LABEL_13;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v44,
    v16,
    v14,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v45 != 2 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v33);
  }
  v41 = 0;
  v40 = DMMVIDPNTOPOLOGY::FindByValue;
  v43 = v44;
  v42 = v44;
  v18 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v10,
          (__int64)&v40,
          &v39,
          0);
  v23 = v18;
  v24 = -1071774937;
  if ( v18 == -1071774937 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    v34[3] = v7;
    v34[4] = v5;
    v34[5] = v10;
    WdLogEvent5_WdWarning(v34);
    if ( v39 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35);
      WdLogEvent5_WdAssertion(v36);
    }
    goto LABEL_24;
  }
  if ( v18 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v20);
    v37[3] = v7;
    v37[4] = v5;
    v37[5] = v10;
    v37[6] = v23;
    WdLogEvent5_WdDmmEvent(v37);
    v24 = v23;
LABEL_24:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v44);
    goto LABEL_13;
  }
  v25 = v39;
  if ( !v39 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v38);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v44);
  *a4 = v25;
  v24 = 0;
LABEL_13:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 6021);
  return v24;
}
