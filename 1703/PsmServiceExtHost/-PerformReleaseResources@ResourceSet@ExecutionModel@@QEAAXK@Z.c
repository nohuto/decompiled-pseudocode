/*
 * XREFs of ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180010080
 * Callers:
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x180002510 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18000F930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x1800013D8 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000450C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     TraceLoggingProviderEnabled @ 0x18000579C (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000CB20 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18000EE70 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012D30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180013364 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostRemoveResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800142B4 (-RmpActivityHostRemoveResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_.c)
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180017310 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::PerformReleaseResources(ExecutionModel::ResourceSet *this, char a2)
{
  UCHAR v4; // dl
  ExecutionModel::ResourceSet *v5; // rcx
  __int64 v6; // rcx
  struct _RM_OBJECT_HEADER *v7; // rcx
  DWORD v8; // edi
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v13; // rax
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-B0h] BYREF
  char v18; // [rsp+70h] [rbp-98h] BYREF
  char v19; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  void *v21; // [rsp+B8h] [rbp-50h]
  int v22; // [rsp+C0h] [rbp-48h]
  int v23; // [rsp+C4h] [rbp-44h]
  char *v24; // [rsp+C8h] [rbp-40h]
  int v25; // [rsp+D0h] [rbp-38h]
  int v26; // [rsp+D4h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 *v28; // [rsp+108h] [rbp+0h]
  int v29; // [rsp+110h] [rbp+8h]
  int v30; // [rsp+114h] [rbp+Ch]
  char *v31; // [rsp+118h] [rbp+10h]
  int v32; // [rsp+120h] [rbp+18h]
  int v33; // [rsp+124h] [rbp+1Ch]
  char *v34; // [rsp+128h] [rbp+20h]
  int v35; // [rsp+130h] [rbp+28h]
  int v36; // [rsp+134h] [rbp+2Ch]
  __int64 *v37; // [rsp+138h] [rbp+30h]
  int v38; // [rsp+140h] [rbp+38h]
  int v39; // [rsp+144h] [rbp+3Ch]

  ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(
    *((__int64 ***)this + 3),
    (const unsigned __int16 **)this,
    0LL);
  v5 = (ExecutionModel::ResourceSet *)*((_QWORD *)this + 228);
  if ( v5 )
    ExecutionModel::ResourceSet::ResetPriorities(v5);
  if ( (*((_BYTE *)this + 1356) & 1) != 0 )
  {
    if ( TraceLoggingProviderEnabled(v5, v4, 0LL) )
    {
      v8 = GetTickCount() - *((_DWORD *)this + 465);
      RmpSystemMemoryMetricsQuery(
        *(struct _RM_PARTITION **)(*((_QWORD *)this + 173) + 112LL),
        (struct _RM_SYSTEM_MEMORY_METRICS *)v17);
      if ( (unsigned int)dword_18004D030 > 4 )
      {
        if ( TlgKeywordOn(v9, 0x400000000001uLL) )
        {
          v13 = *((_QWORD *)this + 230);
          v30 = 0;
          v33 = 0;
          v36 = 0;
          v39 = 0;
          v14 = v13;
          v28 = &v14;
          v31 = &v19;
          v34 = &v18;
          v15 = v8;
          v37 = &v15;
          v29 = 8;
          v32 = 8;
          v35 = 8;
          v38 = 8;
          TlgWrite(v10, &unk_180043090, v11, v12, 6u, &pData);
        }
      }
    }
  }
  if ( *((_BYTE *)this + 12) && (a2 & 1) == 0 )
    RmpCommitValuesAdd(
      *(_QWORD *)(*((_QWORD *)this + 174) + 944LL),
      *((_QWORD *)this + 185),
      (unsigned __int64 *)(*((_QWORD *)this + 174) + 944LL));
  RmpResourceSetReleaseResources(*((struct _RM_RESOURCE_SET **)this + 173));
  *((_QWORD *)this + 173) = 0LL;
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  v6 = *((_QWORD *)this + 174);
  if ( v6 )
    RmpActivityHostRemoveResourceSet(v6, this, *((unsigned int *)this + 350));
  if ( *((_QWORD *)this + 223) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 223, 0LL);
  *((_QWORD *)this + 225) = 0LL;
  *((_QWORD *)this + 226) = 0LL;
  *((_QWORD *)this + 227) = 0LL;
  if ( *((_QWORD *)this + 228) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 228, 0LL);
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 9) != 0 && (qword_18004D048 & 9) == qword_18004D048 )
  {
    v26 = 0;
    v24 = (char *)this + 1840;
    v25 = 8;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18004317B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v21 = &unk_180043186;
    UserData.Reserved = 2;
    v22 = 43;
    v23 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  v7 = (struct _RM_OBJECT_HEADER *)*((_QWORD *)this + 174);
  if ( v7 )
  {
    RmpObjectRelease(v7);
    *((_QWORD *)this + 174) = 0LL;
  }
}
