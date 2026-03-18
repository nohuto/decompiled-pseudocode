/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x14043B138
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     Template_zjqq @ 0x1401BFB54 (Template_zjqq.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14043C4E0 (PiDmObjectGetCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14043CB7C (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14043DD68 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14043E564 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14043EA04 (PiDmListEnumObjectsWithCallback.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x14045AC18 (PiDmObjectAcquireExclusiveLock.c)
 *     _PnpSetObjectProperty @ 0x14045C530 (_PnpSetObjectProperty.c)
 *     PnpIsNullGuid @ 0x14045E9F8 (PnpIsNullGuid.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404969B0 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140496C38 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x140496EA8 (PiDmGetCmObjectListFromCache.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404B07CC (PiDmRemoveCacheReferenceForObject.c)
 *     _CmGetInstallerClassRegProp @ 0x1404DDCC8 (_CmGetInstallerClassRegProp.c)
 *     PiDmListAddObject @ 0x1404E4F54 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E5114 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddList @ 0x140518AC0 (PiDmListAddList.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405199A0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14051A6DC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PnpIsValidGuidString @ 0x14051A7F0 (PnpIsValidGuidString.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x140604D74 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x140604DB0 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140604DC8 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140604E20 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140604ED4 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140604FE4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmListRemoveList @ 0x140605934 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140605B28 (PiDmListRemoveObject.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(__int64 a1, const WCHAR *a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // esi
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int FilteredDeviceInterfaceList; // eax
  unsigned int v15; // eax
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  unsigned int v20; // eax
  PVOID PoolWithTag; // r12
  __int64 v22; // r9
  int DeviceRegProp; // eax
  int v24; // esi
  bool v25; // sf
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rdx
  void *v32; // rsi
  int v33; // eax
  PVOID v34; // r14
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  void *v38; // rcx
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // rdx
  signed __int64 *v44; // rbx
  char v45; // si
  signed __int64 v46; // rax
  signed __int64 v47; // rcx
  signed __int64 v48; // rtt
  ULONG_PTR v49; // rbx
  unsigned int v50; // eax
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rsi
  char IsNullGuid; // al
  __int64 v55; // r8
  const EVENT_DESCRIPTOR *v56; // rdx
  GUID *p_Guid; // rcx
  _QWORD *v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  int Object; // esi
  PVOID v63; // r14
  _QWORD *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  char v68; // [rsp+50h] [rbp-89h] BYREF
  char v69[3]; // [rsp+51h] [rbp-88h] BYREF
  size_t Size; // [rsp+54h] [rbp-85h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-79h] BYREF
  void *v72; // [rsp+68h] [rbp-71h] BYREF
  PVOID v73; // [rsp+70h] [rbp-69h] BYREF
  PVOID P; // [rsp+78h] [rbp-61h] BYREF
  __int64 v75; // [rsp+80h] [rbp-59h] BYREF
  __int64 v76; // [rsp+88h] [rbp-51h]
  __int64 v77; // [rsp+90h] [rbp-49h]
  __int64 v78; // [rsp+98h] [rbp-41h]
  __int64 v79; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v80; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-29h] BYREF
  _QWORD v82[2]; // [rsp+B8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-11h] BYREF
  GUID Guid; // [rsp+D8h] [rbp-1h] BYREF

  v9 = -1073741822;
  if ( a4 > 13 )
  {
    v17 = a4 - 14;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( a5 != 1 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
          return v9;
        v76 = 0LL;
        v75 = 0LL;
        v77 = 0LL;
        v78 = 0LL;
        v73 = 0LL;
        Object = PiDmGetObject(5LL, a2, &v73);
        if ( Object >= 0 )
        {
          v63 = v73;
          v76 = *(_QWORD *)(a6 + 24);
          v77 = *(_QWORD *)(a6 + 32);
          v75 = a1;
          do
          {
            LOBYTE(v78) = 0;
            Object = PiDmListEnumObjectsWithCallback(3LL, v63, PiPnpRtlEnumDevicesInContainerCallback, &v75);
          }
          while ( Object >= 0 && (_BYTE)v78 );
          if ( v63 )
            PiDmObjectRelease(v63);
        }
        *(_DWORD *)a6 = Object;
        return (unsigned int)-1073741536;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 || a5 != 1 || (*(_DWORD *)(a6 + 80) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceInterfaceList(a6);
      }
      else
      {
        if ( a5 != 1 || (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceList(a6);
      }
LABEL_30:
      if ( FilteredDeviceInterfaceList == -1073741802 )
        return 0;
LABEL_31:
      *(_DWORD *)a6 = FilteredDeviceInterfaceList;
      return (unsigned int)-1073741536;
    }
    if ( a5 != 1 )
    {
      if ( *(int *)a6 >= 0 )
      {
        v64 = *(_QWORD **)(a6 + 8);
        v65 = v64[1];
        if ( v65 )
        {
          if ( *v64 )
          {
            PiDmListRemoveObject(3LL, v65, *v64, v69);
            if ( v69[0] )
              PiDmListRemoveList(v66, v64[1], v67, *v64);
          }
        }
        PiPnpRtlFreeContainerRemoveInfo(v64);
      }
      return 0;
    }
    FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(*(_QWORD *)(a6 + 24), a2, &v80);
    v9 = FilteredDeviceInterfaceList;
    if ( FilteredDeviceInterfaceList < 0 )
      goto LABEL_31;
    v52 = v80;
LABEL_122:
    *(_QWORD *)(a6 + 8) = v52;
    return v9;
  }
  if ( a4 == 13 )
  {
    if ( a5 == 1 || *(int *)a6 < 0 )
      return 0;
    P = 0LL;
    v72 = 0LL;
    v32 = 0LL;
    v68 = 0;
    v33 = PiDmGetObject(5LL, a2, &P);
    v34 = P;
    if ( v33 >= 0 )
    {
      v35 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v72);
      v32 = v72;
      if ( v35 >= 0 )
      {
        PiDmListAddObject(3LL, v34, v72, &v68);
        if ( !v68 )
          PiDmListAddList(v36, v34, v37, v32);
      }
    }
    if ( v34 )
      PiDmObjectRelease(v34);
    if ( !v32 )
      return 0;
    v38 = v32;
    goto LABEL_82;
  }
  v10 = a4 - 2;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 5;
        if ( !v13 )
        {
          if ( a5 == 1 )
          {
            if ( (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
              goto LABEL_14;
            FilteredDeviceInterfaceList = PiDmObjectGetCachedCmProperty(
                                            a3,
                                            (_DWORD)a2,
                                            a3,
                                            *(_DWORD *)(a6 + 24),
                                            *(_QWORD *)(a6 + 32),
                                            *(_QWORD *)(a6 + 40),
                                            *(_QWORD *)(a6 + 48));
            if ( FilteredDeviceInterfaceList < 0
              && FilteredDeviceInterfaceList != -1073741275
              && FilteredDeviceInterfaceList != -1073741789
              && FilteredDeviceInterfaceList != -1073741772 )
            {
              v9 = 0;
LABEL_14:
              if ( !*(_QWORD *)(a6 + 16) )
              {
                v15 = CmMapCmObjectTypeToPnpObjectType(a3);
                PiPnpRtlCacheObjectBaseKey(a1, a2, v15);
              }
              return v9;
            }
            goto LABEL_31;
          }
          if ( *(int *)a6 < 0 )
          {
            if ( *(_DWORD *)a6 == -1073741275 )
              PiDmObjectUpdateCachedCmProperty(a3, (int)a2, a3, *(_DWORD *)(a6 + 24), 0, 0LL, 0);
          }
          else
          {
            PiDmObjectUpdateCachedCmProperty(
              a3,
              (int)a2,
              a3,
              *(_DWORD *)(a6 + 24),
              **(_DWORD **)(a6 + 32),
              *(PCWSTR *)(a6 + 40),
              **(_DWORD **)(a6 + 48));
          }
          return 0;
        }
        if ( v13 != 1 )
          return v9;
        if ( a5 != 1 )
        {
          if ( *(int *)a6 < 0 )
            return v9;
          PiDmObjectUpdateCachedCmProperty(
            a3,
            (int)a2,
            a3,
            *(_DWORD *)(a6 + 24),
            *(_DWORD *)(a6 + 28),
            *(PCWSTR *)(a6 + 32),
            *(_DWORD *)(a6 + 40));
          if ( a3 == 1 && *(_DWORD *)(a6 + 24) == 9 )
          {
            v39 = *(_QWORD **)(a6 + 8);
            if ( *v39 )
            {
              v40 = v39[1];
              if ( v40 )
                PiDmListRemoveObject(4LL, v40, *v39, 0LL);
              v41 = v39[2];
              if ( v41 )
                PiDmListAddObject(4LL, v41, *v39, 0LL);
            }
            PiPnpRtlFreeInstallerClassChangeInfo(v39);
          }
          return 0;
        }
        v9 = 0;
        if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0
          || ((v20 = *(_DWORD *)(a6 + 40), PoolWithTag = 0LL, Size = 0LL, !v20)
           || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x47706E50u), v9 = 0, !PoolWithTag))
          && *(_DWORD *)(a6 + 40) )
        {
LABEL_60:
          if ( *(_QWORD *)(a6 + 16) )
          {
LABEL_61:
            if ( a3 != 1 || *(_DWORD *)(a6 + 24) != 9 )
              return v9;
            v29 = 0LL;
            if ( *(_DWORD *)(a6 + 28) == 1
              && *(_DWORD *)(a6 + 40) == 78
              && (unsigned __int8)PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
            {
              v29 = *(_QWORD *)(a6 + 32);
            }
            FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(a2, v29, v82);
            v9 = FilteredDeviceInterfaceList;
            if ( FilteredDeviceInterfaceList >= 0 )
            {
              *(_QWORD *)(a6 + 8) = v82[0];
              return v9;
            }
            goto LABEL_31;
          }
          v50 = CmMapCmObjectTypeToPnpObjectType(a3);
          PiPnpRtlCacheObjectBaseKey(a1, a2, v50);
          v25 = (v9 & 0x80000000) != 0;
LABEL_49:
          if ( v25 )
            return v9;
          goto LABEL_61;
        }
        LODWORD(Size) = *(_DWORD *)(a6 + 40);
        if ( a3 == 1 )
        {
          v22 = *(int *)(a6 + 24);
          if ( (unsigned int)(v22 - 1) > 0x24 || !DevicePropertyRead[v22] || DevicePropertyWrite[v22] )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              (__int64)a2,
                              *(_QWORD *)(a6 + 16),
                              v22,
                              (__int64)&Size + 4,
                              (__int64)PoolWithTag,
                              (__int64)&Size);
            goto LABEL_42;
          }
        }
        else
        {
          if ( a3 != 2 )
          {
LABEL_58:
            v9 = 0;
LABEL_46:
            if ( PoolWithTag )
              ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
            v25 = (v9 & 0x80000000) != 0;
            if ( v9 )
              goto LABEL_49;
            goto LABEL_60;
          }
          v51 = *(int *)(a6 + 24);
          if ( (unsigned int)(v51 - 1) > 0x24 || !ClassPropertyRead[v51] || ClassPropertyWrite[v51] )
          {
            DeviceRegProp = CmGetInstallerClassRegProp(
                              PiPnpRtlCtx,
                              (_DWORD)a2,
                              *(_QWORD *)(a6 + 16),
                              v51,
                              (__int64)&Size + 4,
                              (__int64)PoolWithTag,
                              (__int64)&Size);
LABEL_42:
            v24 = DeviceRegProp;
            if ( (DeviceRegProp < 0
               || Size != __PAIR64__(*(_DWORD *)(a6 + 28), *(_DWORD *)(a6 + 40))
               || memcmp(PoolWithTag, *(const void **)(a6 + 32), (unsigned int)Size))
              && (v24 != -1073741275 || *(_DWORD *)(a6 + 40))
              && v24 != -1073741790 )
            {
              goto LABEL_58;
            }
LABEL_45:
            *(_DWORD *)a6 = v24;
            v9 = -1073741536;
            goto LABEL_46;
          }
        }
        v24 = -1073741790;
        goto LABEL_45;
      }
      if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
        return v9;
      FilteredDeviceInterfaceList = PiDmGetCmObjectListFromCache(
                                      a3,
                                      *(_QWORD *)(a6 + 16),
                                      *(_QWORD *)(a6 + 24),
                                      *(_QWORD *)(a6 + 32),
                                      *(_DWORD *)(a6 + 40),
                                      *(_QWORD *)(a6 + 48));
      goto LABEL_30;
    }
    if ( a5 == 1 )
    {
      if ( a3 == 1 )
      {
        FilteredDeviceInterfaceList = PiPnpRtlGatherDeviceDeleteInfo(a2);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_31;
        v52 = v82[1];
      }
      else
      {
        if ( a3 != 3 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo(a2, &v81);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_31;
        v52 = v81;
      }
      goto LABEL_122;
    }
    if ( a3 != 1 )
    {
      if ( a3 == 3 )
      {
        v58 = *(_QWORD **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v58 )
        {
          v59 = v58[1];
          if ( v59 )
            PiDmListRemoveObject(0LL, v59, *v58, 0LL);
          v60 = v58[2];
          if ( v60 )
            PiDmListRemoveObject(1LL, v60, *v58, 0LL);
          v61 = v58[3];
          if ( v61 )
            PiDmListRemoveObject(2LL, v61, *v58, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo(v58);
      }
      return 0;
    }
    v53 = *(_QWORD *)(a6 + 8);
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(v53 + 4));
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      *(_QWORD *)&Guid.Data1 = 0LL;
      *(_QWORD *)Guid.Data4 = 0LL;
    }
    if ( *(int *)a6 < 0 )
    {
      if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x14u) )
      {
        IsNullGuid = PnpIsNullGuid(&Guid);
        v56 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceDelete_Failure;
        goto LABEL_131;
      }
    }
    else if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x13u) )
    {
      IsNullGuid = PnpIsNullGuid(&Guid);
      v56 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceDelete_Success;
LABEL_131:
      p_Guid = &Guid;
      if ( IsNullGuid )
        p_Guid = 0LL;
      Template_zjqq((__int64)p_Guid, v56, v55, a2, (__int64)p_Guid, *(_DWORD *)v53, *(_DWORD *)a6);
    }
    if ( *(int *)a6 >= 0 && *(_WORD *)(v53 + 4) )
    {
      v79 = MEMORY[0xFFFFF78000000014];
      PnpSetObjectProperty(a1, v53 + 4, 2, 0LL, (__int64)&DEVPKEY_DeviceClass_LastDeleteDate, 16, (__int64)&v79, 8, 0);
    }
    PiPnpRtlFreeDeviceDeleteInfo(v53);
    return 0;
  }
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 || !*(_BYTE *)(a6 + 32) )
    {
      v30 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiDmRemoveCacheReferenceForObject(v30, v31);
      return 0;
    }
    BugCheckParameter2 = 0LL;
    v42 = (unsigned int)CmMapCmObjectTypeToPnpObjectType(a3);
    if ( (int)PiDmGetObject(v42, v43, &BugCheckParameter2) < 0 )
      return 0;
    v44 = (signed __int64 *)BugCheckParameter2;
    PiDmObjectAcquireExclusiveLock(BugCheckParameter2);
    v45 = v44[4] & 1;
    *((_DWORD *)v44 + 8) |= 1u;
    _m_prefetchw(v44);
    v46 = *v44;
    v47 = *v44 - 16;
    if ( (*v44 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v47 = 0LL;
    if ( (v46 & 2) != 0
      || (v48 = *v44, v48 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v47, v46)) )
    {
      v49 = BugCheckParameter2;
      ExfReleasePushLock((_QWORD *)BugCheckParameter2);
    }
    else
    {
      v49 = BugCheckParameter2;
    }
    KeAbPostRelease(v49);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v45 )
      PiDmRemoveCacheReferenceForObject((unsigned int)v42, a2);
    v38 = (void *)BugCheckParameter2;
LABEL_82:
    PiDmObjectRelease(v38);
    return 0;
  }
  v26 = CmMapCmObjectTypeToPnpObjectType(a3);
  v28 = PiDmAddCacheReferenceForObject(v26, v27, 0LL);
  *(_DWORD *)a6 = v28;
  v9 = -1073741536;
  if ( v28 >= 0 )
    return 0;
  return v9;
}
