/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C007D710
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0004200 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0004308 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001D6A4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C01A9640 (-IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r15d
  __int64 v13; // rsi
  __int64 v14; // rcx
  void (__fastcall ***v15)(_QWORD, __int64); // rbx
  __int64 v16; // rcx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v17; // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // rdi
  int v26; // eax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v27; // rdi
  _QWORD *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  unsigned int v47; // edi
  __int64 v48; // rax
  DMMVIDPN *Container; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  int v61; // ecx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  _QWORD *v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  __int64 (__fastcall ***v87)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7006);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v38 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v38 + 24) = 0LL;
    *(_QWORD *)(v38 + 32) = this;
    WdLogEvent5_WdError(v38);
    v12 = -1071774960;
    goto LABEL_49;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    v86 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v86 + 24) = this;
    WdLogEvent5_WdError(v86);
    v12 = -1071774968;
    goto LABEL_49;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 1) - 3) <= 1 )
  {
    v39 = *((_QWORD *)this + 14);
    if ( !*(_QWORD *)(v39 + 40) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v40);
    }
    v42 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v39 + 40) + 64LL) + 48);
    if ( !*(_QWORD *)(v42 + 8) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v41);
      WdLogEvent5_WdAssertion(v43);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v42 + 8) + 16LL)) < 1200
      && *(_BYTE *)(v44 + 2052) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v44);
      WdLogEvent5_WdAssertion(v45);
      v12 = -1071774960;
      goto LABEL_49;
    }
    v46 = *((_QWORD *)this + 14);
    v47 = *(_DWORD *)(v46 + 24);
    if ( !*(_QWORD *)(v46 + 40) )
    {
      v48 = WdLogNewEntry5_WdAssertion(v44);
      WdLogEvent5_WdAssertion(v48);
    }
    Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v46 + 40) + 64LL);
    if ( DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(Container, v47) )
    {
      v51 = WdLogNewEntry5_WdError(v50);
      WdLogEvent5_WdError(v51);
      v12 = -1071774960;
      goto LABEL_49;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4E506456u);
  v12 = 0;
  v13 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    v14 = *(_DWORD *)a2;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *PoolWithTag = &IndexedSetElement<unsigned int>::`vftable';
    *((_DWORD *)PoolWithTag + 6) = v14;
    if ( (_DWORD)v14 == -1 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v52);
    }
    *(_QWORD *)(v13 + 40) = 0LL;
    *(_DWORD *)(v13 + 56) = 1833173006;
    *(_QWORD *)v13 = &DMMVIDPNSOURCEMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *(_DWORD *)(v13 + 72) = 0;
    *(_QWORD *)(v13 + 32) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *(_QWORD *)(v13 + 48) = &DMMVIDPNSOURCEMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODE>'};
    *(_QWORD *)(v13 + 64) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    memset((void *)(v13 + 76), 0, 0x20uLL);
  }
  else
  {
    v13 = 0LL;
  }
  v15 = (void (__fastcall ***)(_QWORD, __int64))v13;
  if ( !v13 )
  {
    v53 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v53 + 24) = this;
    WdLogEvent5_WdLowResource(v53);
    v12 = -1073741801;
    goto LABEL_113;
  }
  v16 = *((unsigned int *)a2 + 1);
  if ( (_DWORD)v16 == 1 )
  {
LABEL_12:
    v17 = a2 + 2;
    if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v80[3] = *(_DWORD *)v17;
      v80[4] = *((unsigned int *)a2 + 3);
      v80[5] = v17;
      WdLogEvent5_WdError(v80);
      v12 = -1071774918;
    }
    else if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
    {
      v79 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v79[3] = *((unsigned int *)a2 + 4);
      v79[4] = *((unsigned int *)a2 + 5);
      v79[5] = v17;
      WdLogEvent5_WdError(v79);
      v12 = -1071774917;
    }
    else if ( *((_DWORD *)a2 + 6) )
    {
      if ( *((_DWORD *)a2 + 7) )
      {
        v18 = *((_DWORD *)a2 + 8);
        if ( v18 < 6 && v18 )
        {
          v19 = *((_DWORD *)a2 + 9);
          if ( v19 < 4 && v19 )
          {
            *(_DWORD *)(v13 + 72) = v16;
            *(_OWORD *)(v13 + 76) = *(_OWORD *)v17;
            *(_OWORD *)(v13 + 92) = *(_OWORD *)(a2 + 6);
            goto LABEL_23;
          }
          v77 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v77 + 24) = *((int *)a2 + 9);
          *(_QWORD *)(v77 + 32) = v17;
          WdLogEvent5_WdError(v77);
          v12 = -1071774913;
        }
        else
        {
          v78 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v78 + 24) = *((int *)a2 + 8);
          *(_QWORD *)(v78 + 32) = v17;
          WdLogEvent5_WdError(v78);
          v12 = -1071774914;
        }
      }
      else
      {
        v60 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v60 + 24) = *((int *)a2 + 7);
        *(_QWORD *)(v60 + 32) = v17;
        WdLogEvent5_WdError(v60);
        v12 = -1071774915;
      }
    }
    else
    {
      v55 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v55 + 24) = *((unsigned int *)a2 + 6);
      *(_QWORD *)(v55 + 32) = v17;
      WdLogEvent5_WdError(v55);
      v12 = -1071774916;
    }
    v81 = WdLogNewEntry5_WdWarning(v57, v56, v58, v59);
    WdLogEvent5_WdWarning(v81);
    v71 = (_QWORD *)WdLogNewEntry5_WdTrace(v83, v82, v84, v85);
    v71[3] = v13;
    goto LABEL_112;
  }
  if ( (_DWORD)v16 != 2 )
  {
    if ( (int)v16 <= 2 || (int)v16 > 4 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v54[3] = v13;
      v54[4] = this;
      v54[5] = *((int *)a2 + 1);
      WdLogEvent5_WdError(v54);
      v12 = -1071774960;
      goto LABEL_113;
    }
    goto LABEL_12;
  }
  *(_DWORD *)(v13 + 72) = 2;
  *(_DWORD *)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *)(v13 + 76) = a2[2];
LABEL_23:
  v20 = *(unsigned int *)(v13 + 24);
  v21 = (_QWORD *)((char *)this + 48);
  v15 = 0LL;
  v87 = (__int64 (__fastcall ***)(_QWORD, __int64))v13;
  if ( (_QWORD *)*v21 == v21 )
  {
    v22 = 0LL;
  }
  else
  {
    v22 = *v21 - 8LL;
    if ( !v22 )
      goto LABEL_29;
    while ( *(_DWORD *)(v22 + 24) != (_DWORD)v20 )
    {
      v23 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v22 + 8);
      if ( v23 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
        v22 = 0LL;
      else
        v22 = (__int64)v23 - 8;
      if ( !v22 )
        goto LABEL_29;
    }
  }
  if ( v22 )
  {
    v61 = 2 - (DMMVIDPNSOURCEMODE::operator==(v22, v13) != 0);
    goto LABEL_95;
  }
LABEL_29:
  v24 = (_QWORD *)((char *)this + 48);
  if ( (_QWORD *)*v24 == v24 || (v25 = *v24 - 8LL) == 0 )
  {
LABEL_37:
    v28 = (_QWORD *)((char *)this + 48);
    if ( (_QWORD *)*v28 == v28 )
      goto LABEL_42;
    v29 = *v28 - 8LL;
    if ( *v28 == 8LL )
      goto LABEL_42;
    while ( v29 != v13 )
    {
      v30 = *(_QWORD **)(v29 + 8);
      if ( v30 != v28 )
      {
        v29 = (__int64)(v30 - 1);
        if ( v29 )
          continue;
      }
      goto LABEL_42;
    }
    if ( !v29 )
    {
LABEL_42:
      v31 = (_QWORD *)*((_QWORD *)this + 7);
      v32 = (_QWORD *)(v13 + 8);
      if ( (_QWORD *)*v31 != v28 )
        __fastfail(3u);
      *v32 = v28;
      *(_QWORD *)(v13 + 16) = v31;
      *v31 = v32;
      *((_QWORD *)this + 7) = v32;
      ++*((_QWORD *)this + 8);
    }
    else
    {
      v72 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v72);
    }
    if ( *(_QWORD *)(v13 + 40) )
    {
      v73 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v73);
    }
    v33 = a2 - 4;
    *(_QWORD *)(v13 + 40) = this;
    if ( *((_DWORD *)a2 - 4) == 305419896 )
    {
      v34 = *((_QWORD *)v33 + 1);
      if ( !v34 || DoublyLinkedList<DMMVIDPNSOURCEMODE>::ContainsByReference((__int64)this + 32, v34) )
      {
        ExFreePoolWithTag(a2 - 4, 0);
      }
      else
      {
        v76 = WdLogNewEntry5_WdError(v75);
        *(_QWORD *)(v76 + 24) = v33;
        *(_QWORD *)(v76 + 32) = this;
        WdLogEvent5_WdError(v76);
        v12 = -1071774928;
      }
    }
    else
    {
      v74 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v74 + 24) = v33;
      WdLogEvent5_WdError(v74);
      v12 = -1071774960;
    }
    goto LABEL_49;
  }
  while ( 1 )
  {
    v26 = *(_DWORD *)(v25 + 72);
    if ( v26 != *(_DWORD *)(v13 + 72) )
      goto LABEL_34;
    if ( v26 == 1 )
      break;
    if ( v26 != 2 )
    {
      if ( v26 <= 2 || v26 > 4 )
      {
        if ( (unsigned int)(v26 - 1) <= 3 )
        {
          v62 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v62);
        }
        goto LABEL_34;
      }
      break;
    }
    if ( *(_DWORD *)(v25 + 76) == *(_DWORD *)(v13 + 76) )
      goto LABEL_94;
LABEL_34:
    v27 = *(DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL **)(v25 + 8);
    if ( v27 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
      v25 = 0LL;
    else
      v25 = (__int64)v27 - 8;
    if ( !v25 )
      goto LABEL_37;
  }
  if ( *(_DWORD *)(v25 + 76) != *(_DWORD *)(v13 + 76)
    || *(_DWORD *)(v25 + 80) != *(_DWORD *)(v13 + 80)
    || *(_DWORD *)(v25 + 84) != *(_DWORD *)(v13 + 84)
    || *(_DWORD *)(v25 + 88) != *(_DWORD *)(v13 + 88)
    || *(_DWORD *)(v25 + 92) != *(_DWORD *)(v13 + 92)
    || *(_DWORD *)(v25 + 96) != *(_DWORD *)(v13 + 96)
    || *(_DWORD *)(v25 + 100) != *(_DWORD *)(v13 + 100)
    || *(_DWORD *)(v25 + 104) != *(_DWORD *)(v13 + 104) )
  {
    goto LABEL_34;
  }
LABEL_94:
  v61 = 1;
LABEL_95:
  v63 = (unsigned int)(v61 - 1);
  if ( (_DWORD)v63 )
  {
    if ( (_DWORD)v63 == 1 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdError(v63);
      v69[3] = *(unsigned int *)(v13 + 24);
      v69[4] = v13;
      v69[5] = this;
      WdLogEvent5_WdError(v69);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v87);
      v12 = -1071774940;
    }
    else
    {
      v64 = WdLogNewEntry5_WdError(v63);
      WdLogEvent5_WdError(v64);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v87);
      v12 = -1073741823;
    }
  }
  else
  {
    v70 = WdLogNewEntry5_WdTrace(v63, v20, v10, v11);
    *(_QWORD *)(v70 + 24) = v13;
    *(_QWORD *)(v70 + 32) = this;
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v87);
    v12 = -1071774956;
  }
  v71 = (_QWORD *)WdLogNewEntry5_WdTrace(v66, v65, v67, v68);
  v71[3] = a2;
LABEL_112:
  v35 = v12;
  v71[5] = v12;
  v71[4] = this;
LABEL_113:
  if ( v15 )
    (**v15)(v15, 1LL);
LABEL_49:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v35, &EventProfilerExit, v36, 7006);
  return (unsigned int)v12;
}
