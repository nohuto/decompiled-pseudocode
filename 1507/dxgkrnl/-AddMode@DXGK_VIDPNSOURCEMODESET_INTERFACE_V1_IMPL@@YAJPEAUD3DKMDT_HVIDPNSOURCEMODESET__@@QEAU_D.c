/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00888F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0002FFC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C00032D4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0017A20 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     DMM::IsValidColorBasis @ 0x1C002BCAC (DMM--IsValidColorBasis.c)
 *     ?IsPathFromSourceConnectedToMiracast@DMMVIDPN@@QEBAEI@Z @ 0x1C017C540 (-IsPathFromSourceConnectedToMiracast@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        __int64 **this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r15d
  __int64 v17; // rsi
  __int64 v18; // rcx
  void (__fastcall ***v19)(_QWORD, __int64); // rbx
  int v20; // edx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v21; // rdi
  int v22; // edx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v28; // rcx
  _QWORD *v29; // rdi
  __int64 v30; // rdi
  int v31; // eax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v32; // rdi
  _QWORD *v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 *v36; // rdx
  __int64 v37; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v43; // rax
  __int64 *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 *v57; // rbx
  unsigned int v58; // edi
  __int64 v59; // rax
  DMMVIDPN *Container; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // ecx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  _QWORD *v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 (__fastcall ***v98)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7006);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v43 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v43 + 24) = 0LL;
    *(_QWORD *)(v43 + 32) = this;
    WdLogEvent5_WdError(v43);
    v16 = -1071774960;
    goto LABEL_48;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    v97 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v97 + 24) = this;
    WdLogEvent5_WdError(v97);
    v16 = -1071774968;
    goto LABEL_48;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 1) - 3) <= 1 )
  {
    v44 = this[14];
    if ( !v44[5] )
    {
      v45 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v45);
    }
    v48 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v44[5] + 64) + 48);
    if ( !*(_QWORD *)(v48 + 8) )
    {
      v51 = WdLogNewEntry5_WdAssertion(v47, v46, v49, v50);
      WdLogEvent5_WdAssertion(v51);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v48 + 8) + 16LL)) < 1200
      && *(_BYTE *)(v53 + 1908) )
    {
      v56 = WdLogNewEntry5_WdAssertion(v53, v52, v54, v55);
      WdLogEvent5_WdAssertion(v56);
      v16 = -1071774960;
      goto LABEL_48;
    }
    v57 = this[14];
    v58 = *((_DWORD *)v57 + 6);
    if ( !v57[5] )
    {
      v59 = WdLogNewEntry5_WdAssertion(v53, v52, v54, v55);
      WdLogEvent5_WdAssertion(v59);
    }
    Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(v57[5] + 64);
    if ( DMMVIDPN::IsPathFromSourceConnectedToMiracast(Container, v58) )
    {
      v62 = WdLogNewEntry5_WdError(v61);
      WdLogEvent5_WdError(v62);
      v16 = -1071774960;
      goto LABEL_48;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4E506456u);
  v16 = 0;
  v17 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    v18 = *(_DWORD *)a2;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *PoolWithTag = &SetElement::`vftable';
    *((_DWORD *)PoolWithTag + 6) = v18;
    if ( (_DWORD)v18 == -1 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v18, v12, v14, v15);
      WdLogEvent5_WdAssertion(v63);
    }
    *(_QWORD *)(v17 + 40) = 0LL;
    *(_DWORD *)(v17 + 56) = 1833173006;
    *(_QWORD *)v17 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_DWORD *)(v17 + 72) = 0;
    *(_QWORD *)(v17 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(v17 + 48) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *(_QWORD *)(v17 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    memset((void *)(v17 + 76), 0, 0x20uLL);
  }
  else
  {
    v17 = 0LL;
  }
  v19 = (void (__fastcall ***)(_QWORD, __int64))v17;
  if ( !v17 )
  {
    v64 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v64 + 24) = this;
    WdLogEvent5_WdLowResource(v64);
    v16 = -1073741801;
    goto LABEL_112;
  }
  v20 = *((_DWORD *)a2 + 1);
  if ( v20 == 1 )
  {
LABEL_12:
    v21 = a2 + 2;
    if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
    {
      v91 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v91[3] = *(_DWORD *)v21;
      v91[4] = *((unsigned int *)a2 + 3);
      v91[5] = v21;
      WdLogEvent5_WdError(v91);
      v16 = -1071774918;
    }
    else if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
    {
      v90 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v90[3] = *((unsigned int *)a2 + 4);
      v90[4] = *((unsigned int *)a2 + 5);
      v90[5] = v21;
      WdLogEvent5_WdError(v90);
      v16 = -1071774917;
    }
    else if ( *((_DWORD *)a2 + 6) )
    {
      if ( *((_DWORD *)a2 + 7) )
      {
        if ( DMM::IsValidColorBasis(*((_DWORD *)a2 + 8)) )
        {
          v24 = *((_DWORD *)a2 + 9);
          if ( v24 < 4 && v24 )
          {
            *(_DWORD *)(v17 + 72) = v22;
            *(_OWORD *)(v17 + 76) = *(_OWORD *)v21;
            *(_OWORD *)(v17 + 92) = *(_OWORD *)(a2 + 6);
            goto LABEL_22;
          }
          v89 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v89 + 24) = *((int *)a2 + 9);
          *(_QWORD *)(v89 + 32) = v21;
          WdLogEvent5_WdError(v89);
          v16 = -1071774913;
        }
        else
        {
          v72 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v72 + 24) = *((int *)a2 + 8);
          *(_QWORD *)(v72 + 32) = v21;
          WdLogEvent5_WdError(v72);
          v16 = -1071774914;
        }
      }
      else
      {
        v71 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v71 + 24) = *((int *)a2 + 7);
        *(_QWORD *)(v71 + 32) = v21;
        WdLogEvent5_WdError(v71);
        v16 = -1071774915;
      }
    }
    else
    {
      v66 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v66 + 24) = *((unsigned int *)a2 + 6);
      *(_QWORD *)(v66 + 32) = v21;
      WdLogEvent5_WdError(v66);
      v16 = -1071774916;
    }
    v92 = WdLogNewEntry5_WdWarning(v68, v67, v69, v70);
    WdLogEvent5_WdWarning(v92);
    v83 = (_QWORD *)WdLogNewEntry5_WdTrace(v94, v93, v95, v96);
    v83[3] = v17;
    goto LABEL_111;
  }
  if ( v20 != 2 )
  {
    if ( v20 <= 2 || v20 > 4 )
    {
      v65 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v65[3] = v17;
      v65[4] = this;
      v65[5] = *((int *)a2 + 1);
      WdLogEvent5_WdError(v65);
      v16 = -1071774960;
      goto LABEL_112;
    }
    goto LABEL_12;
  }
  *(_DWORD *)(v17 + 72) = 2;
  *(_DWORD *)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v17 + 76) = a2[2];
LABEL_22:
  v25 = *(unsigned int *)(v17 + 24);
  v26 = this + 6;
  v19 = 0LL;
  v98 = (__int64 (__fastcall ***)(_QWORD, __int64))v17;
  if ( (_QWORD *)*v26 == v26 )
  {
    v27 = 0LL;
  }
  else
  {
    v27 = *v26 - 8LL;
    if ( !v27 )
      goto LABEL_28;
    while ( *(_DWORD *)(v27 + 24) != (_DWORD)v25 )
    {
      v28 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v27 + 8);
      if ( v28 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)(this + 6) )
        v27 = 0LL;
      else
        v27 = (__int64)v28 - 8;
      if ( !v27 )
        goto LABEL_28;
    }
  }
  if ( v27 )
  {
    v73 = 2 - (DMMVIDPNSOURCEMODE::operator==(v27, v17) != 0);
    goto LABEL_95;
  }
LABEL_28:
  v29 = this + 6;
  if ( (_QWORD *)*v29 == v29 || (v30 = *v29 - 8LL) == 0 )
  {
LABEL_36:
    v33 = this + 6;
    if ( (_QWORD *)*v33 == v33 )
      goto LABEL_41;
    v34 = *v33 - 8LL;
    if ( *v33 == 8LL )
      goto LABEL_41;
    while ( v34 != v17 )
    {
      v35 = *(_QWORD **)(v34 + 8);
      if ( v35 != v33 )
      {
        v34 = (__int64)(v35 - 1);
        if ( v34 )
          continue;
      }
      goto LABEL_41;
    }
    if ( !v34 )
    {
LABEL_41:
      v36 = this[7];
      v37 = v17 + 8;
      *(_QWORD *)(v17 + 8) = v33;
      *(_QWORD *)(v17 + 16) = v36;
      if ( (_QWORD *)*v36 != v33 )
        __fastfail(3u);
      *v36 = v37;
      this[7] = (__int64 *)v37;
      this[8] = (__int64 *)((char *)this[8] + 1);
    }
    else
    {
      v84 = WdLogNewEntry5_WdAssertion(v33, v25, v14, v15);
      WdLogEvent5_WdAssertion(v84);
    }
    if ( *(_QWORD *)(v17 + 40) )
    {
      v85 = WdLogNewEntry5_WdAssertion(v33, v36, v14, v15);
      WdLogEvent5_WdAssertion(v85);
    }
    v38 = a2 - 4;
    *(_QWORD *)(v17 + 40) = this;
    if ( *((_DWORD *)a2 - 4) == 305419896 )
    {
      v39 = *((_QWORD *)v38 + 1);
      if ( !v39 || DoublyLinkedList<DMMVIDPNSOURCEMODE>::ContainsByReference((__int64)(this + 4), v39) )
      {
        ExFreePoolWithTag(a2 - 4, 0);
      }
      else
      {
        v88 = WdLogNewEntry5_WdError(v87);
        *(_QWORD *)(v88 + 24) = v38;
        *(_QWORD *)(v88 + 32) = this;
        WdLogEvent5_WdError(v88);
        v16 = -1071774928;
      }
    }
    else
    {
      v86 = WdLogNewEntry5_WdError(v33);
      *(_QWORD *)(v86 + 24) = v38;
      WdLogEvent5_WdError(v86);
      v16 = -1071774960;
    }
    goto LABEL_48;
  }
  while ( 1 )
  {
    v31 = *(_DWORD *)(v30 + 72);
    if ( v31 != *(_DWORD *)(v17 + 72) )
      goto LABEL_33;
    if ( v31 == 1 )
      break;
    if ( v31 != 2 )
    {
      if ( v31 <= 2 || v31 > 4 )
      {
        if ( (unsigned int)(v31 - 1) <= 3 )
        {
          v74 = WdLogNewEntry5_WdAssertion(v27, v25, v14, v15);
          WdLogEvent5_WdAssertion(v74);
        }
        goto LABEL_33;
      }
      break;
    }
    if ( *(_DWORD *)(v30 + 76) == *(_DWORD *)(v17 + 76) )
      goto LABEL_94;
LABEL_33:
    v32 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v30 + 8);
    if ( v32 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)(this + 6) )
      v30 = 0LL;
    else
      v30 = (__int64)v32 - 8;
    if ( !v30 )
      goto LABEL_36;
  }
  if ( *(_DWORD *)(v30 + 76) != *(_DWORD *)(v17 + 76)
    || *(_DWORD *)(v30 + 80) != *(_DWORD *)(v17 + 80)
    || *(_DWORD *)(v30 + 84) != *(_DWORD *)(v17 + 84)
    || *(_DWORD *)(v30 + 88) != *(_DWORD *)(v17 + 88)
    || *(_DWORD *)(v30 + 92) != *(_DWORD *)(v17 + 92)
    || *(_DWORD *)(v30 + 96) != *(_DWORD *)(v17 + 96)
    || *(_DWORD *)(v30 + 100) != *(_DWORD *)(v17 + 100)
    || *(_DWORD *)(v30 + 104) != *(_DWORD *)(v17 + 104) )
  {
    goto LABEL_33;
  }
LABEL_94:
  v73 = 1;
LABEL_95:
  v75 = (unsigned int)(v73 - 1);
  if ( (_DWORD)v75 )
  {
    if ( (_DWORD)v75 == 1 )
    {
      v81 = (_QWORD *)WdLogNewEntry5_WdError(v75);
      v81[3] = *(unsigned int *)(v17 + 24);
      v81[4] = v17;
      v81[5] = this;
      WdLogEvent5_WdError(v81);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v98);
      v16 = -1071774940;
    }
    else
    {
      v76 = WdLogNewEntry5_WdError(v75);
      WdLogEvent5_WdError(v76);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v98);
      v16 = -1073741823;
    }
  }
  else
  {
    v82 = WdLogNewEntry5_WdTrace(v75, v25, v14, v15);
    *(_QWORD *)(v82 + 24) = v17;
    *(_QWORD *)(v82 + 32) = this;
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v98);
    v16 = -1071774956;
  }
  v83 = (_QWORD *)WdLogNewEntry5_WdTrace(v78, v77, v79, v80);
  v83[3] = a2;
LABEL_111:
  v40 = v16;
  v83[5] = v16;
  v83[4] = this;
LABEL_112:
  if ( v19 )
    (**v19)(v19, 1LL);
LABEL_48:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v40, &EventProfilerExit, v41, 7006);
  return (unsigned int)v16;
}
