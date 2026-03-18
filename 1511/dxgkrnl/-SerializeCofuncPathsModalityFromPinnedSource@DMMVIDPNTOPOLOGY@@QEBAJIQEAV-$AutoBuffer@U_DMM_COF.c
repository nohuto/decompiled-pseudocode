/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017E978
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017956C (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0008324 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0019540 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C002ADD4 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C002AE48 (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002B9A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C002BFAC (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0091398 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A1410 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0180B90 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v8; // rax
  int NumPathsFromSource; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 Container; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // r12d
  __int64 v28; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  DMMVIDPNSOURCEMODESET *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  size_t v40; // rbx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdi
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  unsigned __int8 v56; // dl
  unsigned __int8 *v57; // r8
  __int64 v58; // rcx
  unsigned __int8 v59; // di
  unsigned __int8 *v60; // rsi
  __int64 v61; // rbx
  _QWORD *v62; // rbx
  __int64 v63; // rax
  unsigned __int64 v64; // [rsp+20h] [rbp-79h] BYREF
  __int64 (__fastcall ***v65)(_QWORD, __int64); // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v66; // [rsp+30h] [rbp-69h]
  _QWORD v67[2]; // [rsp+40h] [rbp-59h] BYREF
  int v68; // [rsp+50h] [rbp-49h]
  _QWORD v69[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v70; // [rsp+68h] [rbp-31h]
  int v71; // [rsp+70h] [rbp-29h]
  __int64 v72; // [rsp+78h] [rbp-21h]
  __int64 v73; // [rsp+80h] [rbp-19h] BYREF
  void **v74; // [rsp+88h] [rbp-11h] BYREF
  __int128 v75; // [rsp+90h] [rbp-9h]
  void **v76; // [rsp+A0h] [rbp+7h]
  void *Src; // [rsp+A8h] [rbp+Fh]
  size_t Size; // [rsp+B0h] [rbp+17h]
  int v79; // [rsp+B8h] [rbp+1Fh]
  unsigned int v80; // [rsp+110h] [rbp+77h] BYREF
  DMMVIDPNSOURCEMODESET *v81; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = a2;
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(a3 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v64 = 0LL;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v3, &v64);
  v11 = NumPathsFromSource;
  if ( NumPathsFromSource == -1071774919 )
  {
    v12 = WdLogNewEntry5_WdDmmEvent(v10);
    *(_QWORD *)(v12 + 24) = v3;
    *(_QWORD *)(v12 + 32) = this;
    WdLogEvent5_WdDmmEvent(v12);
    return 3223192377LL;
  }
  if ( NumPathsFromSource < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v13[3] = v3;
    v13[4] = this;
    v13[5] = v11;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v11;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v15 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v3);
  v16 = *(_QWORD *)(v15 + 104);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
    v17 = *(_QWORD *)(v15 + 104);
  }
  else
  {
    v17 = 0LL;
  }
  v73 = v17;
  if ( !*(_QWORD *)(v17 + 144) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v18);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v73, 0LL);
  v19 = 0LL;
  v67[0] = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  v67[1] = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  v69[1] = v69;
  v20 = v69;
  v69[0] = v69;
  v68 = 0;
  v70 = 0LL;
  v71 = 2;
  v72 = 0LL;
  v66 = 0LL;
  if ( !v64 )
    goto LABEL_15;
  do
  {
    v80 = -1;
    if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v3, v19, &v80) < 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = v80;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v3, v80);
    if ( !Path )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v30);
    }
    Src = 0LL;
    v74 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    Size = 0LL;
    v76 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v75 = 0LL;
    v79 = 3;
    v31 = *((_QWORD *)Path + 12);
    v81 = 0LL;
    v32 = *(_QWORD *)(v31 + 104);
    if ( v32 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v32 + 96));
      v33 = *(_QWORD *)(v31 + 104);
      v27 = v80;
    }
    else
    {
      v33 = 0LL;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v81, v33);
    v35 = v81;
    if ( !v81 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v34);
      WdLogEvent5_WdAssertion(v36);
    }
    if ( *((_QWORD *)v35 + 18) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v34);
      WdLogEvent5_WdAssertion(v37);
    }
    v38 = DMMVIDPNTARGETMODESET::Serialize(v35);
    v11 = v38;
    if ( v38 < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v39);
      v52[4] = v27;
      v52[3] = v3;
      v52[5] = this;
      v52[6] = v11;
      WdLogEvent5_WdError(v52);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v81, 0LL);
      goto LABEL_48;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v81, 0LL);
    v40 = Size;
    v41 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
    v45 = (__int64)v41;
    if ( v41 )
    {
      v41[1] = 0LL;
      v41[2] = 0LL;
      *v41 = &DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>::`vftable'{for `SetElement'};
      v41[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v41[4] = 0LL;
      v41[5] = 0LL;
      *((_DWORD *)v41 + 12) = 3;
    }
    else
    {
      v45 = 0LL;
    }
    v65 = (__int64 (__fastcall ***)(_QWORD, __int64))v45;
    if ( !v45 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL, v42, v43, v44);
      v51[5] = v27;
      v51[3] = 56LL;
      v51[4] = v3;
      WdLogEvent5_WdLowResource(v51);
      LODWORD(v11) = -1073741801;
      goto LABEL_46;
    }
    v46 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v45, v40 + 360);
    v11 = v46;
    if ( v46 < 0 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdError(v47);
      v50[4] = v27;
      v50[3] = v3;
      v50[5] = this;
      v50[6] = v11;
      WdLogEvent5_WdError(v50);
LABEL_46:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v65);
LABEL_48:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v74);
      goto LABEL_64;
    }
    if ( *((_DWORD *)Path + 28) != 254 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v47);
      WdLogEvent5_WdAssertion(v48);
    }
    if ( *((_DWORD *)Path + 29) != 254 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v47);
      WdLogEvent5_WdAssertion(v49);
    }
    DMMVIDPNPRESENTPATH::Serialize(Path, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v45 + 32));
    memmove((void *)(*(_QWORD *)(v45 + 32) + 360LL), Src, Size);
    v65 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v67, v45);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v65);
    DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v74);
    v19 = v66 + 1;
    v66 = v19;
  }
  while ( v19 < v64 );
  v21 = v70;
  v20 = (_QWORD *)v69[0];
  if ( v70 > 1 )
    goto LABEL_16;
LABEL_15:
  v21 = 1LL;
LABEL_16:
  v22 = 4 * v21 + 4;
  if ( v20 != v69 )
  {
    v23 = v20 - 1;
    while ( v23 )
    {
      v22 += v23[5];
      v24 = (_QWORD *)v23[1];
      if ( v24 == v69 )
        v23 = 0LL;
      else
        v23 = v24 - 1;
    }
  }
  v53 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a3, v22);
  v11 = v53;
  if ( v53 >= 0 )
  {
    v56 = 1;
    **(_BYTE **)(a3 + 32) = v70;
    v57 = *(unsigned __int8 **)(a3 + 32);
    v58 = *v57;
    if ( (unsigned __int8)v58 > 1u )
      v56 = *v57;
    v59 = 0;
    v60 = &v57[4 * v56 + 4];
    if ( (_QWORD *)v69[0] != v69 )
    {
      v61 = v69[0] - 8LL;
      if ( v69[0] != 8LL )
      {
        do
        {
          *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL * v59 + 4) = (_DWORD)v60 - *(_DWORD *)(a3 + 32);
          memmove(v60, *(const void **)(v61 + 32), *(_QWORD *)(v61 + 40));
          v60 += *(_QWORD *)(v61 + 40);
          v62 = *(_QWORD **)(v61 + 8);
          if ( v62 == v69 )
            v61 = 0LL;
          else
            v61 = (__int64)(v62 - 1);
          ++v59;
        }
        while ( v61 );
      }
    }
    if ( v59 != **(_BYTE **)(a3 + 32) )
    {
      v63 = WdLogNewEntry5_WdAssertion(v58);
      WdLogEvent5_WdAssertion(v63);
    }
    LODWORD(v11) = 0;
  }
  else
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v54);
    v55[3] = a3;
    v55[4] = v3;
    v55[5] = this;
    v55[6] = v11;
    WdLogEvent5_WdError(v55);
  }
LABEL_64:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v67);
  return (unsigned int)v11;
}
