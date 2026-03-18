/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017A518
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C0174F90 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0017A20 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C002B18C (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C002C10C (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C002C28C (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C69C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B726C (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017CE50 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource(
        DMMVIDPNTOPOLOGY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  __int64 v9; // rax
  int NumPathsFromSource; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 Container; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned int v36; // r12d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  DMMVIDPNSOURCEMODESET *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  size_t v55; // rbx
  _QWORD *v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdi
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // r9
  _QWORD *v73; // rax
  __int64 v74; // rdx
  unsigned __int8 *v75; // r8
  __int64 v76; // rcx
  unsigned __int8 v77; // di
  unsigned __int8 *v78; // rsi
  __int64 v79; // rbx
  _QWORD *v80; // rbx
  __int64 v81; // rax
  unsigned __int64 v82; // [rsp+20h] [rbp-79h] BYREF
  __int64 (__fastcall ***v83)(_QWORD, __int64); // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v84; // [rsp+30h] [rbp-69h]
  _QWORD v85[2]; // [rsp+40h] [rbp-59h] BYREF
  int v86; // [rsp+50h] [rbp-49h]
  _QWORD v87[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v88; // [rsp+68h] [rbp-31h]
  int v89; // [rsp+70h] [rbp-29h]
  __int64 v90; // [rsp+78h] [rbp-21h]
  __int64 v91; // [rsp+80h] [rbp-19h] BYREF
  void **v92; // [rsp+88h] [rbp-11h] BYREF
  __int128 v93; // [rsp+90h] [rbp-9h]
  void **v94; // [rsp+A0h] [rbp+7h]
  void *Src; // [rsp+A8h] [rbp+Fh]
  size_t Size; // [rsp+B0h] [rbp+17h]
  int v97; // [rsp+B8h] [rbp+1Fh]
  unsigned int v98; // [rsp+110h] [rbp+77h] BYREF
  DMMVIDPNSOURCEMODESET *v99; // [rsp+118h] [rbp+7Fh] BYREF

  v4 = (unsigned int)a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a3 + 32) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  v82 = 0LL;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v4, &v82);
  v12 = NumPathsFromSource;
  if ( NumPathsFromSource == -1071774919 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v11);
    *(_QWORD *)(v13 + 24) = v4;
    *(_QWORD *)(v13 + 32) = this;
    WdLogEvent5_WdDmmEvent(v13);
    return 3223192377LL;
  }
  if ( NumPathsFromSource < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v14[3] = v4;
    v14[4] = this;
    v14[5] = v12;
    WdLogEvent5_WdError(v14);
    return (unsigned int)v12;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v16 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v4);
  v20 = *(_QWORD *)(v16 + 104);
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 96));
    v21 = *(_QWORD *)(v16 + 104);
  }
  else
  {
    v21 = 0LL;
  }
  v91 = v21;
  if ( !*(_QWORD *)(v21 + 144) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v20, v17, v18, v19);
    WdLogEvent5_WdAssertion(v22);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v91, 0LL);
  v25 = 0LL;
  v85[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v85[1] = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  v87[1] = v87;
  v26 = v87;
  v87[0] = v87;
  v86 = 0;
  v88 = 0LL;
  v89 = 2;
  v90 = 0LL;
  v84 = 0LL;
  if ( !v82 )
    goto LABEL_15;
  do
  {
    v98 = -1;
    if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (unsigned int)v4, v25, &v98) < 0 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
      WdLogEvent5_WdAssertion(v35);
    }
    v36 = v98;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v4, v98);
    if ( !Path )
    {
      v42 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
      WdLogEvent5_WdAssertion(v42);
    }
    Src = 0LL;
    v92 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    Size = 0LL;
    v94 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v93 = 0LL;
    v97 = 3;
    v43 = *((_QWORD *)Path + 12);
    v99 = 0LL;
    v44 = *(_QWORD *)(v43 + 104);
    if ( v44 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v44 + 96));
      v45 = *(_QWORD *)(v43 + 104);
      v36 = v98;
    }
    else
    {
      v45 = 0LL;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v99, v45);
    v50 = v99;
    if ( !v99 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v47, v46, v48, v49);
      WdLogEvent5_WdAssertion(v51);
    }
    if ( *((_QWORD *)v50 + 18) )
    {
      v52 = WdLogNewEntry5_WdAssertion(v47, v46, v48, v49);
      WdLogEvent5_WdAssertion(v52);
    }
    v53 = DMMVIDPNTARGETMODESET::Serialize(v50);
    v12 = v53;
    if ( v53 < 0 )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdError(v54);
      v69[4] = v36;
      v69[3] = v4;
      v69[5] = this;
      v69[6] = v12;
      WdLogEvent5_WdError(v69);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v99, 0LL);
      goto LABEL_48;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v99, 0LL);
    v55 = Size;
    v56 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
    v59 = (__int64)v56;
    if ( v56 )
    {
      v56[1] = 0LL;
      v56[2] = 0LL;
      *v56 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
      v56[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v56[4] = 0LL;
      v56[5] = 0LL;
      *((_DWORD *)v56 + 12) = 3;
    }
    else
    {
      v59 = 0LL;
    }
    v83 = (__int64 (__fastcall ***)(_QWORD, __int64))v59;
    if ( !v59 )
    {
      v68 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL);
      v68[5] = v36;
      v68[3] = 56LL;
      v68[4] = v4;
      WdLogEvent5_WdLowResource(v68);
      LODWORD(v12) = -1073741801;
      goto LABEL_46;
    }
    v60 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v59, v55 + 360, v57, v58);
    v12 = v60;
    if ( v60 < 0 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(v62);
      v67[4] = v36;
      v67[3] = v4;
      v67[5] = this;
      v67[6] = v12;
      WdLogEvent5_WdError(v67);
LABEL_46:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v83);
LABEL_48:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v92);
      goto LABEL_64;
    }
    if ( *((_DWORD *)Path + 28) != 254 )
    {
      v65 = WdLogNewEntry5_WdAssertion(v62, v61, v63, v64);
      WdLogEvent5_WdAssertion(v65);
    }
    if ( *((_DWORD *)Path + 29) != 254 )
    {
      v66 = WdLogNewEntry5_WdAssertion(v62, v61, v63, v64);
      WdLogEvent5_WdAssertion(v66);
    }
    DMMVIDPNPRESENTPATH::Serialize(Path, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v59 + 32));
    memmove((void *)(*(_QWORD *)(v59 + 32) + 360LL), Src, Size);
    v83 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v85, v59);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v83);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v92);
    v25 = v84 + 1;
    v84 = v25;
  }
  while ( v25 < v82 );
  v27 = v88;
  v26 = (_QWORD *)v87[0];
  if ( v88 > 1 )
    goto LABEL_16;
LABEL_15:
  v27 = 1LL;
LABEL_16:
  v28 = 4 * v27 + 4;
  if ( v26 != v87 )
  {
    v29 = v26 - 1;
    while ( v29 )
    {
      v28 += v29[5];
      v30 = (_QWORD *)v29[1];
      if ( v30 == v87 )
        v29 = 0LL;
      else
        v29 = v30 - 1;
    }
  }
  v70 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a3, v28, v23, v24);
  v12 = v70;
  if ( v70 >= 0 )
  {
    v74 = 1LL;
    **(_BYTE **)(a3 + 32) = v88;
    v75 = *(unsigned __int8 **)(a3 + 32);
    v76 = *v75;
    if ( (unsigned __int8)v76 > 1u )
      v74 = *v75;
    v77 = 0;
    v78 = &v75[4 * (unsigned __int8)v74 + 4];
    if ( (_QWORD *)v87[0] != v87 )
    {
      v79 = v87[0] - 8LL;
      if ( v87[0] != 8LL )
      {
        do
        {
          *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL * v77 + 4) = (_DWORD)v78 - *(_DWORD *)(a3 + 32);
          memmove(v78, *(const void **)(v79 + 32), *(_QWORD *)(v79 + 40));
          v78 += *(_QWORD *)(v79 + 40);
          v80 = *(_QWORD **)(v79 + 8);
          if ( v80 == v87 )
            v79 = 0LL;
          else
            v79 = (__int64)(v80 - 1);
          ++v77;
        }
        while ( v79 );
      }
    }
    if ( v77 != **(_BYTE **)(a3 + 32) )
    {
      v81 = WdLogNewEntry5_WdAssertion(v76, v74, v75, v72);
      WdLogEvent5_WdAssertion(v81);
    }
    LODWORD(v12) = 0;
  }
  else
  {
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v71);
    v73[3] = a3;
    v73[4] = v4;
    v73[5] = this;
    v73[6] = v12;
    WdLogEvent5_WdError(v73);
  }
LABEL_64:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v85);
  return (unsigned int)v12;
}
