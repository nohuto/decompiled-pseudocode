/*
 * XREFs of ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0092960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0006730 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAAEQEBVDMMVIDPNSOURCEMODE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     sub_1C002BB68 @ 0x1C002BB68 (sub_1C002BB68.c)
 *     ?AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z @ 0x1C0092580 (-AddMode@DMMVIDPNSOURCEMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@@Z.c)
 *     ?IsPathFromSourceConnectedToMiracast@DMMVIDPN@@QEBAEI@Z @ 0x1C0180280 (-IsPathFromSourceConnectedToMiracast@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v8; // r15
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v14; // rsi
  __int64 v15; // rcx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v16; // rbx
  int v17; // edx
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbx
  unsigned int v42; // edi
  __int64 v43; // rax
  DMMVIDPN *Container; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v64; // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7006);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v32 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v32 + 24) = 0LL;
    *(_QWORD *)(v32 + 32) = this;
LABEL_50:
    WdLogEvent5_WdError(v32);
    goto LABEL_51;
  }
  if ( this && *((_DWORD *)this + 32) == 1833173004 )
    v8 = this;
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v33 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v33 + 24) = this;
    WdLogEvent5_WdError(v33);
    LODWORD(v18) = -1071774968;
    goto LABEL_31;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 1) - 3) <= 1 )
  {
    v34 = *((_QWORD *)v8 + 14);
    if ( !*(_QWORD *)(v34 + 40) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v35);
    }
    v37 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v34 + 40) + 64LL) + 48);
    if ( !*(_QWORD *)(v37 + 8) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v36);
      WdLogEvent5_WdAssertion(v38);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v37 + 8) + 16LL)) < 1200
      && *(_BYTE *)(v39 + 1916) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v39);
      WdLogEvent5_WdAssertion(v40);
LABEL_51:
      LODWORD(v18) = -1071774960;
      goto LABEL_31;
    }
    v41 = *((_QWORD *)v8 + 14);
    v42 = *(_DWORD *)(v41 + 24);
    if ( !*(_QWORD *)(v41 + 40) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v39);
      WdLogEvent5_WdAssertion(v43);
    }
    Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v41 + 40) + 64LL);
    if ( DMMVIDPN::IsPathFromSourceConnectedToMiracast(Container, v42) )
    {
      v32 = WdLogNewEntry5_WdError(v45);
      goto LABEL_50;
    }
  }
  PoolWithTag = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x4E506456u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    v15 = *(_DWORD *)a2;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *(_QWORD *)PoolWithTag = &SetElement::`vftable';
    *((_DWORD *)PoolWithTag + 6) = v15;
    if ( (_DWORD)v15 == -1 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v46);
    }
    *((_QWORD *)v14 + 5) = 0LL;
    *((_DWORD *)v14 + 14) = 1833173006;
    *((_DWORD *)v14 + 18) = 0;
    *(_QWORD *)v14 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
    *((_QWORD *)v14 + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
    *((_QWORD *)v14 + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
    *((_QWORD *)v14 + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
    memset(v14 + 19, 0, 0x20uLL);
  }
  else
  {
    v14 = 0LL;
  }
  v16 = v14;
  if ( !v14 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v47 + 24) = this;
    WdLogEvent5_WdLowResource(v47);
    LODWORD(v18) = -1073741801;
    goto LABEL_29;
  }
  v17 = *((_DWORD *)a2 + 1);
  if ( v17 != 1 )
  {
    if ( v17 == 2 )
    {
      *((_DWORD *)v14 + 18) = 2;
      v14[19] = a2[2];
      goto LABEL_25;
    }
    if ( v17 <= 2 || v17 > 4 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v48[3] = v14;
      v48[4] = this;
      v48[5] = *((int *)a2 + 1);
      WdLogEvent5_WdError(v48);
      LODWORD(v18) = -1071774960;
      goto LABEL_29;
    }
  }
  v18 = a2 + 2;
  if ( *((_DWORD *)a2 + 2) < 0x64u || *((_DWORD *)a2 + 3) < 0x64u )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v58[3] = *(_DWORD *)v18;
    v58[4] = *((unsigned int *)a2 + 3);
    v58[5] = v18;
    WdLogEvent5_WdError(v58);
    LODWORD(v18) = -1071774918;
  }
  else if ( *((_DWORD *)a2 + 4) < 0x64u || *((_DWORD *)a2 + 5) < 0x64u )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v57[3] = *((unsigned int *)a2 + 4);
    v57[4] = *((unsigned int *)a2 + 5);
    v57[5] = v18;
    WdLogEvent5_WdError(v57);
    LODWORD(v18) = -1071774917;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    if ( *((_DWORD *)a2 + 7) )
    {
      if ( sub_1C002BB68(*((_DWORD *)a2 + 8)) )
      {
        v21 = *((_DWORD *)a2 + 9);
        if ( v21 < 4 && v21 )
        {
          *((_DWORD *)v14 + 18) = v19;
          *(_OWORD *)(v14 + 19) = *(_OWORD *)v18;
          LODWORD(v18) = 0;
          *(_OWORD *)(v14 + 23) = *(_OWORD *)(a2 + 6);
          goto LABEL_24;
        }
        v56 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v56 + 24) = *((int *)a2 + 9);
        *(_QWORD *)(v56 + 32) = v18;
        WdLogEvent5_WdError(v56);
        LODWORD(v18) = -1071774913;
      }
      else
      {
        v55 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v55 + 24) = *((int *)a2 + 8);
        *(_QWORD *)(v55 + 32) = v18;
        WdLogEvent5_WdError(v55);
        LODWORD(v18) = -1071774914;
      }
    }
    else
    {
      v54 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v54 + 24) = *((int *)a2 + 7);
      *(_QWORD *)(v54 + 32) = v18;
      WdLogEvent5_WdError(v54);
      LODWORD(v18) = -1071774915;
    }
  }
  else
  {
    v49 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v49 + 24) = *((unsigned int *)a2 + 6);
    *(_QWORD *)(v49 + 32) = v18;
    WdLogEvent5_WdError(v49);
    LODWORD(v18) = -1071774916;
  }
  v59 = WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
  WdLogEvent5_WdWarning(v59);
LABEL_24:
  if ( (int)v18 < 0 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v12, v13);
    v29 = (int)v18;
    v60[3] = v14;
    v60[4] = this;
    v60[5] = (int)v18;
    goto LABEL_29;
  }
LABEL_25:
  v64 = v14;
  v16 = 0LL;
  v22 = DMMVIDPNSOURCEMODESET::AddMode(v8, (__int64 (__fastcall ****)(_QWORD, __int64))&v64, v12, v13);
  v18 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)v22;
  if ( v22 >= 0 )
  {
    v27 = a2 - 4;
    if ( *(_DWORD *)v27 == 305419896 )
    {
      v28 = *((_QWORD *)v27 + 1);
      if ( v28 && !DoublyLinkedList<DMMVIDPNSOURCEMODE>::ContainsByReference((__int64)v8 + 32, v28) )
      {
        v63 = WdLogNewEntry5_WdError(v62);
        *(_QWORD *)(v63 + 24) = v27;
        *(_QWORD *)(v63 + 32) = v8;
        WdLogEvent5_WdError(v63);
        LODWORD(v18) = -1071774928;
        goto LABEL_31;
      }
      ExFreePoolWithTag(v27, 0);
      LODWORD(v18) = 0;
      goto LABEL_29;
    }
    v32 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v32 + 24) = v27;
    goto LABEL_50;
  }
  v61 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
  v61[3] = a2;
  v61[4] = this;
  v61[5] = v18;
LABEL_29:
  if ( v16 )
    (**(void (__fastcall ***)(struct D3DKMDT_HVIDPNSOURCEMODESET__ *, __int64))v16)(v16, 1LL);
LABEL_31:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v29, &EventProfilerExit, v30, 7006);
  return (unsigned int)v18;
}
