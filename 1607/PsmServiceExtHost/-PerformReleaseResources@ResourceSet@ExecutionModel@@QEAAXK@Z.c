/*
 * XREFs of ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180011700
 * Callers:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012630 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     RmpActivityHostUnapplyResourceSet @ 0x180019A9C (RmpActivityHostUnapplyResourceSet.c)
 * Callees:
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180001A44 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     ?QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z @ 0x180003658 (-QueryCommitAndAvailablePhysical@ExecutionModel@@YAXPEA_K0@Z.c)
 *     ??0?$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800037C0 (--0-$CComPtrBase@VResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     RmpCommitValuesAdd @ 0x180007008 (RmpCommitValuesAdd.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000EBB0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011440 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800151B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x180017F14 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180035E00 (-RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180035E94 (-RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180036500 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 */

void __fastcall ExecutionModel::ResourceSet::PerformReleaseResources(ExecutionModel::ResourceSet *this, char a2)
{
  UCHAR v4; // dl
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 **v11; // rax
  unsigned int (__fastcall *v12)(ExecutionModel::ResourceSet *__hidden); // rax
  unsigned int (__fastcall *v13)(ExecutionModel::ResourceSet *__hidden); // rax
  _QWORD *v14; // rsi
  _QWORD *i; // rbx
  int v16; // eax
  volatile signed __int32 *v17; // rbx
  ExecutionModel::ResourceSet *v18; // rsi
  __int64 v19; // rax
  unsigned int (__fastcall *v20)(ExecutionModel::ResourceSet *__hidden); // rax
  __int64 v21; // rsi
  int v22; // r9d
  _QWORD *v23; // rdx
  __int64 v24; // rax
  volatile signed __int32 *v25; // rcx
  unsigned __int64 *v26; // r8
  const struct _TlgProvider_t *v27; // rcx
  DWORD v28; // esi
  TraceLoggingHProvider v29; // rcx
  LPCGUID v30; // r8
  LPCGUID v31; // r9
  ExecutionModel::ResourceSet *v32; // rbx
  unsigned int (__fastcall *v33)(ExecutionModel::ResourceSet *__hidden); // rax
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v37[8]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  ExecutionModel::ResourceSet *v40; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v42[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v43[24]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v44; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  char *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  int *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __int64 *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  _BYTE *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  __int64 *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]

  ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(*((__int64 ***)this + 3), this, 0LL);
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)this + 229);
  if ( v5 )
    ExecutionModel::ResourceSet::ResetPriorities((const struct _TlgProvider_t *)((char *)v5 - 1368));
  if ( (*((_BYTE *)this + 1356) & 1) != 0 )
  {
    if ( TraceLoggingProviderEnabled(v5, v4, 0LL) )
    {
      ExecutionModel::QueryCommitAndAvailablePhysical((ExecutionModel *)v37, &v38, v26);
      v28 = GetTickCount() - *((_DWORD *)this + 482);
      if ( (unsigned int)dword_18004C030 > 4 )
      {
        if ( TlgKeywordOn(v27, 0x400000000001uLL) )
        {
          v36 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 64LL))((char *)this + 1368);
          v56 = &v36;
          v58 = v37;
          v60 = &v38;
          v39 = v28;
          v62 = &v39;
          v57 = 8LL;
          v59 = 8LL;
          v61 = 8LL;
          v63 = 8LL;
          TlgWrite(v29, &unk_180042999, v30, v31, 6u, &pData);
        }
      }
    }
  }
  if ( *((_BYTE *)this + 12) && (a2 & 1) == 0 )
    RmpCommitValuesAdd(
      *(_QWORD *)(*((_QWORD *)this + 175) + 944LL),
      *((_QWORD *)this + 186),
      (_QWORD *)(*((_QWORD *)this + 175) + 944LL));
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  v6 = *((_QWORD *)this + 175);
  if ( v6 )
  {
    v7 = (_QWORD *)((char *)this + 1376);
    v8 = v6 + 24LL * *((int *)this + 352);
    v9 = *((_QWORD *)this + 172);
    v10 = (_QWORD *)*((_QWORD *)this + 173);
    if ( *(ExecutionModel::ResourceSet **)(v9 + 8) != (ExecutionModel::ResourceSet *)((char *)this + 1376)
      || (_QWORD *)*v10 != v7 )
    {
      __fastfail(3u);
    }
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v7 = 0LL;
    *((_QWORD *)this + 173) = 0LL;
    --*(_DWORD *)(v8 + 632);
    v11 = *(__int64 ***)this;
    *((_DWORD *)this + 352) = 2;
    v12 = (unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden))v11[2];
    if ( v12 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(this);
    else
      v12(this);
    v13 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)this + 16LL);
    if ( v13 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(this);
    else
      v13(this);
  }
  v14 = (_QWORD *)((char *)this + 1896);
  while ( (_QWORD *)*v14 != v14 )
  {
    ATL::CComPtrBase<ExecutionModel::ResourceSet>::CComPtrBase<ExecutionModel::ResourceSet>(
      &v40,
      *(ExecutionModel::ResourceSet **)(*v14 + 16LL));
    utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
      (char *)this + 1896,
      v42,
      *v14);
    v32 = v40;
    ExecutionModel::ResourceSet::RemoveBGResourceSetForSharing(v40, this);
    if ( v32 )
    {
      v33 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v32 + 16LL);
      if ( v33 == ExecutionModel::ResourceSet::Release )
        ExecutionModel::ResourceSet::Release(v32);
      else
        v33(v32);
    }
  }
  for ( i = (_QWORD *)((char *)this + 1872);
        (_QWORD *)*i != i;
        utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
          (char *)this + 1872,
          v43,
          *i) )
  {
    ExecutionModel::ResourceSet::RemoveFGResourceSetForSharing(*(ExecutionModel::ResourceSet **)(*i + 16LL), this);
  }
  if ( *((_QWORD *)this + 224) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 224, 0LL);
  *((_QWORD *)this + 226) = 0LL;
  *((_QWORD *)this + 227) = 0LL;
  *((_QWORD *)this + 228) = 0LL;
  if ( *((_QWORD *)this + 229) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 229, 0LL);
  *((_QWORD *)this + 231) = 0LL;
  if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 9) != 0 && (qword_18004C048 & 9) == qword_18004C048 )
  {
    v50 = 8LL;
    v49 = (char *)this + 1864;
    v35 = *((_DWORD *)this + 354);
    v51 = &v35;
    v16 = (*((_DWORD *)this + 353) >> 1) & 1;
    v52 = 4LL;
    LODWORD(v34) = v16;
    v53 = &v34;
    v54 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18004266C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_18004C038;
    v46 = &unk_180042677;
    UserData.Reserved = 2;
    v47 = 72;
    v48 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v17 = (volatile signed __int32 *)*((_QWORD *)this + 174);
  v18 = (ExecutionModel::ResourceSet *)*((_QWORD *)v17 + 5);
  RmpObjectRelease(v17);
  v19 = *(_QWORD *)v18;
  *((_QWORD *)v18 + 174) = 0LL;
  v20 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(v19 + 16);
  if ( v20 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release(v18);
  else
    v20(v18);
  *((_QWORD *)v17 + 5) = 0LL;
  v21 = *(_QWORD *)(*((_QWORD *)this + 3) + 224LL) + 1864LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(*((_QWORD *)this + 3) + 224LL) + 1880LL);
  v22 = *(_DWORD *)(v21 + 4) >> 5;
  v34 = *((_QWORD *)v17 + 1) & (-1LL << (*(_DWORD *)(v21 + 4) & 0x1F));
  v23 = (_QWORD *)(*(_QWORD *)(v21 + 8)
                 + 8LL
                 * ((37
                   * (BYTE6(v34)
                    + 37
                    * (BYTE5(v34)
                     + 37
                     * (BYTE4(v34)
                      + 37
                      * (BYTE3(v34) + 37 * (BYTE2(v34) + 37 * (BYTE1(v34) + 37 * ((unsigned __int8)v34 + 11623883)))))))
                   + HIBYTE(v34)) & (unsigned int)(v22 - 1)));
  v24 = *(_QWORD *)v17;
  v44 = v23;
  if ( (v24 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v23 = v44;
  while ( (*v23 & 1) == 0 )
  {
    if ( (volatile signed __int32 *)*v23 == v17 )
    {
      *v23 = *(_QWORD *)v17;
      --*(_DWORD *)v21;
      *(_QWORD *)v17 |= 0x8000000000000002uLL;
      break;
    }
    v23 = (_QWORD *)*v23;
  }
  *((_DWORD *)v17 + 5) |= 0x80000000;
  RtlReleaseSRWLockExclusive(v21 + 16);
  RmpObjectRelease(v17);
  v25 = (volatile signed __int32 *)*((_QWORD *)this + 175);
  if ( v25 )
  {
    RmpObjectRelease(v25);
    *((_QWORD *)this + 175) = 0LL;
  }
}
