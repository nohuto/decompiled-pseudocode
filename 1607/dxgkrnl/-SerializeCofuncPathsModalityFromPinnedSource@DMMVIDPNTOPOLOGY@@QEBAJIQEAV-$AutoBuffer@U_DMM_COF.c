/*
 * XREFs of ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01A7D44
 * Callers:
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01A2F90 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000AC70 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001D6A4 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0033A98 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0033F28 (--1-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0033F7C (--1-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@UEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C00342DC (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0080A8C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0081030 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV?$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01A9F54 (-Serialize@DMMVIDPNTARGETMODESET@@QEBAJQEAV-$AutoBuffer@U_DMM_VIDPNTARGETMODESET_SERIALIZATION@@.c)
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
  __int64 v42; // rdi
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  unsigned __int8 v53; // dl
  unsigned __int8 *v54; // r8
  __int64 v55; // rcx
  unsigned __int8 v56; // di
  unsigned __int8 *v57; // rsi
  __int64 v58; // rbx
  _QWORD *v59; // rbx
  __int64 v60; // rax
  unsigned __int64 v61; // [rsp+20h] [rbp-79h] BYREF
  __int64 (__fastcall ***v62)(_QWORD, __int64); // [rsp+28h] [rbp-71h] BYREF
  unsigned __int64 v63; // [rsp+30h] [rbp-69h]
  _QWORD v64[2]; // [rsp+40h] [rbp-59h] BYREF
  int v65; // [rsp+50h] [rbp-49h]
  _QWORD v66[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v67; // [rsp+68h] [rbp-31h]
  int v68; // [rsp+70h] [rbp-29h]
  __int64 v69; // [rsp+78h] [rbp-21h]
  __int64 v70; // [rsp+80h] [rbp-19h] BYREF
  void **v71; // [rsp+88h] [rbp-11h] BYREF
  __int128 v72; // [rsp+90h] [rbp-9h]
  void **v73; // [rsp+A0h] [rbp+7h]
  void *Src; // [rsp+A8h] [rbp+Fh]
  size_t Size; // [rsp+B0h] [rbp+17h]
  int v76; // [rsp+B8h] [rbp+1Fh]
  unsigned int v77; // [rsp+110h] [rbp+77h] BYREF
  DMMVIDPNSOURCEMODESET *v78; // [rsp+118h] [rbp+7Fh] BYREF

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
  v61 = 0LL;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v3, &v61);
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
  v70 = v17;
  if ( !*(_QWORD *)(v17 + 144) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v18);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v70, 0LL);
  v19 = 0LL;
  v64[0] = &Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::`vftable';
  v64[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::`vftable';
  v66[1] = v66;
  v20 = v66;
  v66[0] = v66;
  v65 = 0;
  v67 = 0LL;
  v68 = 2;
  v69 = 0LL;
  v63 = 0LL;
  if ( !v61 )
    goto LABEL_15;
  do
  {
    v77 = -1;
    if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v3, v19, &v77) < 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = v77;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v3, v77);
    if ( !Path )
    {
      v30 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v30);
    }
    Src = 0LL;
    v71 = &DMM::AutoBuffer<_DMM_VIDPNTARGETMODESET_SERIALIZATION>::`vftable'{for `SetElement'};
    Size = 0LL;
    v73 = &DMM::AutoBuffer<_DMM_VIDPNTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v72 = 0LL;
    v76 = 3;
    v31 = *((_QWORD *)Path + 12);
    v78 = 0LL;
    v32 = *(_QWORD *)(v31 + 104);
    if ( v32 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v32 + 96));
      v33 = *(_QWORD *)(v31 + 104);
      v27 = v77;
    }
    else
    {
      v33 = 0LL;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, v33);
    v35 = v78;
    if ( !v78 )
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
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v39);
      v49[4] = v27;
      v49[3] = v3;
      v49[5] = this;
      v49[6] = v11;
      WdLogEvent5_WdError(v49);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, 0LL);
      goto LABEL_48;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, 0LL);
    v40 = Size;
    v41 = operator new(0x38uLL, 0x4E506456u, PagedPool);
    v42 = (__int64)v41;
    if ( v41 )
    {
      v41[1] = 0LL;
      v41[2] = 0LL;
      *v41 = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `SetElement'};
      v41[3] = &DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
      v41[4] = 0LL;
      v41[5] = 0LL;
      *((_DWORD *)v41 + 12) = 3;
    }
    else
    {
      v42 = 0LL;
    }
    v62 = (__int64 (__fastcall ***)(_QWORD, __int64))v42;
    if ( !v42 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdLowResource(0LL);
      v48[5] = v27;
      v48[3] = 56LL;
      v48[4] = v3;
      WdLogEvent5_WdLowResource(v48);
      LODWORD(v11) = -1073741801;
      goto LABEL_46;
    }
    v43 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v42, v40 + 360);
    v11 = v43;
    if ( v43 < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v44);
      v47[4] = v27;
      v47[3] = v3;
      v47[5] = this;
      v47[6] = v11;
      WdLogEvent5_WdError(v47);
LABEL_46:
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v62);
LABEL_48:
      DMM::AutoBuffer<_DMM_VIDPNTARGETMODESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDPNTARGETMODESET_SERIALIZATION>(&v71);
      goto LABEL_64;
    }
    if ( *((_DWORD *)Path + 28) != 254 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v44);
      WdLogEvent5_WdAssertion(v45);
    }
    if ( *((_DWORD *)Path + 29) != 254 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v44);
      WdLogEvent5_WdAssertion(v46);
    }
    DMMVIDPNPRESENTPATH::Serialize(Path, *(struct _D3DKMDT_VIDPN_PRESENT_PATH *const *)(v42 + 32));
    memmove((void *)(*(_QWORD *)(v42 + 32) + 360LL), Src, Size);
    v62 = 0LL;
    Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(v64, v42);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v62);
    DMM::AutoBuffer<_DMM_VIDPNTARGETMODESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDPNTARGETMODESET_SERIALIZATION>(&v71);
    v19 = v63 + 1;
    v63 = v19;
  }
  while ( v19 < v61 );
  v21 = v67;
  v20 = (_QWORD *)v66[0];
  if ( v67 > 1 )
    goto LABEL_16;
LABEL_15:
  v21 = 1LL;
LABEL_16:
  v22 = 4 * v21 + 4;
  if ( v20 != v66 )
  {
    v23 = v20 - 1;
    while ( v23 )
    {
      v22 += v23[5];
      v24 = (_QWORD *)v23[1];
      if ( v24 == v66 )
        v23 = 0LL;
      else
        v23 = v24 - 1;
    }
  }
  v50 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a3, v22);
  v11 = v50;
  if ( v50 >= 0 )
  {
    v53 = 1;
    **(_BYTE **)(a3 + 32) = v67;
    v54 = *(unsigned __int8 **)(a3 + 32);
    v55 = *v54;
    if ( (unsigned __int8)v55 > 1u )
      v53 = *v54;
    v56 = 0;
    v57 = &v54[4 * v53 + 4];
    if ( (_QWORD *)v66[0] != v66 )
    {
      v58 = v66[0] - 8LL;
      if ( v66[0] != 8LL )
      {
        do
        {
          *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4LL * v56 + 4) = (_DWORD)v57 - *(_DWORD *)(a3 + 32);
          memmove(v57, *(const void **)(v58 + 32), *(_QWORD *)(v58 + 40));
          v57 += *(_QWORD *)(v58 + 40);
          v59 = *(_QWORD **)(v58 + 8);
          if ( v59 == v66 )
            v58 = 0LL;
          else
            v58 = (__int64)(v59 - 1);
          ++v56;
        }
        while ( v58 );
      }
    }
    if ( v56 != **(_BYTE **)(a3 + 32) )
    {
      v60 = WdLogNewEntry5_WdAssertion(v55);
      WdLogEvent5_WdAssertion(v60);
    }
    LODWORD(v11) = 0;
  }
  else
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v51);
    v52[3] = a3;
    v52[4] = v3;
    v52[5] = this;
    v52[6] = v11;
    WdLogEvent5_WdError(v52);
  }
LABEL_64:
  Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>(v64);
  return (unsigned int)v11;
}
