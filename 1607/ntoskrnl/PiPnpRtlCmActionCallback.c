/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x1404DFF48
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     Template_zjqq @ 0x1401CE134 (Template_zjqq.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PnpIsNullGuid @ 0x14048C8AC (PnpIsNullGuid.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404C5784 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x1404C5A0C (PiDmGetCmObjectListFromCache.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1404E1188 (PiDmObjectGetCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1404E12BC (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1404E2934 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1404E34C4 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1404E3A48 (PiDmListEnumObjectsWithCallback.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E72F8 (_CmGetInstallerClassRegProp.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1404E8C88 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmListAddObject @ 0x1404E8EF4 (PiDmListAddObject.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E90B4 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E9110 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E9218 (PiDmAddCacheReferenceForObject.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 *     PnpIsValidGuidString @ 0x14062DAE8 (PnpIsValidGuidString.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x14062EC28 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x14062EC64 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14062EC7C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14062ECD8 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14062ED30 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14062EDE4 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14062EEF4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14062F06C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmListAddList @ 0x14062F9D4 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x14062FBC8 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x14062FDBC (PiDmListRemoveObject.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(__int64 a1, const WCHAR *a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned int v6; // r14d
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
  void *v29; // rsi
  int v30; // eax
  PVOID v31; // r14
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  void *v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r9
  unsigned int v39; // eax
  __int64 v40; // rsi
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rsi
  bool IsNullGuid; // al
  __int64 v47; // r8
  const EVENT_DESCRIPTOR *v48; // rdx
  GUID *p_Guid; // rcx
  _QWORD *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  unsigned int v54; // r14d
  __int64 v55; // rdx
  signed __int64 *v56; // rbx
  char v57; // si
  signed __int64 v58; // rax
  signed __int64 v59; // rcx
  signed __int64 v60; // rtt
  ULONG_PTR v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  int Object; // esi
  PVOID v66; // r14
  _QWORD *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  char v71; // [rsp+50h] [rbp-89h] BYREF
  char v72[3]; // [rsp+51h] [rbp-88h] BYREF
  size_t Size; // [rsp+54h] [rbp-85h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-79h] BYREF
  void *v75; // [rsp+68h] [rbp-71h] BYREF
  PVOID P; // [rsp+70h] [rbp-69h] BYREF
  PVOID v77; // [rsp+78h] [rbp-61h] BYREF
  __int64 v78; // [rsp+80h] [rbp-59h] BYREF
  __int64 v79; // [rsp+88h] [rbp-51h]
  __int64 v80; // [rsp+90h] [rbp-49h]
  __int64 v81; // [rsp+98h] [rbp-41h]
  _QWORD v82[2]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-11h] BYREF
  GUID Guid; // [rsp+D8h] [rbp-1h] BYREF

  v6 = a3;
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
        v79 = 0LL;
        v78 = 0LL;
        v80 = 0LL;
        v81 = 0LL;
        v77 = 0LL;
        Object = PiDmGetObject(5LL, a2, &v77);
        if ( Object >= 0 )
        {
          v66 = v77;
          v79 = *(_QWORD *)(a6 + 24);
          v80 = *(_QWORD *)(a6 + 32);
          v78 = a1;
          do
          {
            LOBYTE(v81) = 0;
            Object = PiDmListEnumObjectsWithCallback(3LL, v66, PiPnpRtlEnumDevicesInContainerCallback, &v78);
          }
          while ( Object >= 0 && (_BYTE)v81 );
          if ( v66 )
            PiDmObjectRelease(v66);
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
        v67 = *(_QWORD **)(a6 + 8);
        v68 = v67[1];
        if ( v68 )
        {
          if ( *v67 )
          {
            PiDmListRemoveObject(3LL, v68, *v67, v72);
            if ( v72[0] )
              PiDmListRemoveList(v69, v67[1], v70, *v67);
          }
        }
        PiPnpRtlFreeContainerRemoveInfo(v67);
      }
      return 0;
    }
    FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(*(_QWORD *)(a6 + 24), a2, &v85);
    v9 = FilteredDeviceInterfaceList;
    if ( FilteredDeviceInterfaceList < 0 )
      goto LABEL_31;
    v44 = v85;
LABEL_115:
    *(_QWORD *)(a6 + 8) = v44;
    return v9;
  }
  if ( a4 == 13 )
  {
    if ( a5 == 1 || *(int *)a6 < 0 )
      return 0;
    P = 0LL;
    v75 = 0LL;
    v29 = 0LL;
    v71 = 0;
    v30 = PiDmGetObject(5LL, a2, &P);
    v31 = P;
    if ( v30 >= 0 )
    {
      v32 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v75);
      v29 = v75;
      if ( v32 >= 0 )
      {
        PiDmListAddObject(3LL, v31, v75, &v71);
        if ( !v71 )
          PiDmListAddList(v33, v31, v34, v29);
      }
    }
    if ( v31 )
      PiDmObjectRelease(v31);
    if ( !v29 )
      return 0;
    v35 = v29;
LABEL_77:
    PiDmObjectRelease(v35);
    return 0;
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
                v15 = CmMapCmObjectTypeToPnpObjectType(v6);
                PiPnpRtlCacheObjectBaseKey(a1, a2, v15);
              }
              return v9;
            }
            goto LABEL_31;
          }
          if ( *(int *)a6 < 0 )
          {
            if ( *(_DWORD *)a6 == -1073741275 )
              PiDmObjectUpdateCachedCmProperty((unsigned int)a3, a2, a3, *(unsigned int *)(a6 + 24), 0, 0LL, 0);
          }
          else
          {
            PiDmObjectUpdateCachedCmProperty(
              (unsigned int)a3,
              a2,
              a3,
              *(unsigned int *)(a6 + 24),
              **(_DWORD **)(a6 + 32),
              *(_QWORD *)(a6 + 40),
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
            (unsigned int)a3,
            a2,
            a3,
            *(unsigned int *)(a6 + 24),
            *(_DWORD *)(a6 + 28),
            *(_QWORD *)(a6 + 32),
            *(_DWORD *)(a6 + 40));
          if ( v6 == 1 && *(_DWORD *)(a6 + 24) == 9 )
          {
            v41 = *(_QWORD **)(a6 + 8);
            if ( *v41 )
            {
              v42 = v41[1];
              if ( v42 )
                PiDmListRemoveObject(4LL, v42, *v41, 0LL);
              v43 = v41[2];
              if ( v43 )
                PiDmListAddObject(4LL, v43, *v41, 0LL);
            }
            PiPnpRtlFreeInstallerClassChangeInfo(v41);
          }
          return 0;
        }
        v9 = 0;
        if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0
          || ((v20 = *(_DWORD *)(a6 + 40), PoolWithTag = 0LL, Size = 0LL, !v20)
           || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x47706E50u), v9 = 0, !PoolWithTag))
          && *(_DWORD *)(a6 + 40) )
        {
LABEL_63:
          if ( *(_QWORD *)(a6 + 16) )
          {
LABEL_64:
            if ( v6 != 1 || *(_DWORD *)(a6 + 24) != 9 )
              return v9;
            v40 = 0LL;
            if ( *(_DWORD *)(a6 + 28) == 1
              && *(_DWORD *)(a6 + 40) == 78
              && (unsigned __int8)PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
            {
              v40 = *(_QWORD *)(a6 + 32);
            }
            FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(a2, v40, v82);
            v9 = FilteredDeviceInterfaceList;
            if ( FilteredDeviceInterfaceList >= 0 )
            {
              *(_QWORD *)(a6 + 8) = v82[0];
              return v9;
            }
            goto LABEL_31;
          }
          v39 = CmMapCmObjectTypeToPnpObjectType(v6);
          PiPnpRtlCacheObjectBaseKey(a1, a2, v39);
          v25 = (v9 & 0x80000000) != 0;
LABEL_49:
          if ( v25 )
            return v9;
          goto LABEL_64;
        }
        LODWORD(Size) = *(_DWORD *)(a6 + 40);
        if ( v6 == 1 )
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
                              (__int64)&Size,
                              0);
            goto LABEL_42;
          }
        }
        else
        {
          if ( v6 != 2 )
          {
LABEL_61:
            v9 = 0;
LABEL_46:
            if ( PoolWithTag )
              ExFreePoolWithTag(PoolWithTag, 0x47706E50u);
            v25 = (v9 & 0x80000000) != 0;
            if ( v9 )
              goto LABEL_49;
            goto LABEL_63;
          }
          v38 = *(int *)(a6 + 24);
          if ( (unsigned int)(v38 - 1) > 0x24 || !ClassPropertyRead[v38] || ClassPropertyWrite[v38] )
          {
            DeviceRegProp = CmGetInstallerClassRegProp(
                              PiPnpRtlCtx,
                              (_DWORD)a2,
                              *(_QWORD *)(a6 + 16),
                              v38,
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
              goto LABEL_61;
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
      if ( (_DWORD)a3 == 1 )
      {
        FilteredDeviceInterfaceList = PiPnpRtlGatherDeviceDeleteInfo(a2);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_31;
        v44 = v82[1];
      }
      else
      {
        if ( (_DWORD)a3 != 3 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo(a2, &v83);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_31;
        v44 = v83;
      }
      goto LABEL_115;
    }
    if ( (_DWORD)a3 != 1 )
    {
      if ( (_DWORD)a3 == 3 )
      {
        v50 = *(_QWORD **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v50 )
        {
          v51 = v50[1];
          if ( v51 )
            PiDmListRemoveObject(0LL, v51, *v50, 0LL);
          v52 = v50[2];
          if ( v52 )
            PiDmListRemoveObject(1LL, v52, *v50, 0LL);
          v53 = v50[3];
          if ( v53 )
            PiDmListRemoveObject(2LL, v53, *v50, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo(v50);
      }
      return 0;
    }
    v45 = *(_QWORD *)(a6 + 8);
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(v45 + 4));
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
        v48 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceDelete_Failure;
        goto LABEL_124;
      }
    }
    else if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x13u) )
    {
      IsNullGuid = PnpIsNullGuid(&Guid);
      v48 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceDelete_Success;
LABEL_124:
      p_Guid = &Guid;
      if ( IsNullGuid )
        p_Guid = 0LL;
      Template_zjqq((__int64)p_Guid, v48, v47, a2, (__int64)p_Guid, *(_DWORD *)v45, *(_DWORD *)a6);
    }
    if ( *(int *)a6 >= 0 && *(_WORD *)(v45 + 4) )
    {
      v84 = MEMORY[0xFFFFF78000000014];
      PnpSetObjectProperty(a1, v45 + 4, 2, 0LL, (__int64)&DEVPKEY_DeviceClass_LastDeleteDate, 16, (__int64)&v84, 8, 0);
    }
    PiPnpRtlFreeDeviceDeleteInfo(v45);
    return 0;
  }
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 || !*(_BYTE *)(a6 + 32) )
    {
      v36 = CmMapCmObjectTypeToPnpObjectType((unsigned int)a3);
      PiDmRemoveCacheReferenceForObject(v36, v37);
      return 0;
    }
    BugCheckParameter2 = 0LL;
    v54 = CmMapCmObjectTypeToPnpObjectType((unsigned int)a3);
    if ( (int)PiDmGetObject(v54, v55, &BugCheckParameter2) < 0 )
      return 0;
    v56 = (signed __int64 *)BugCheckParameter2;
    PiDmObjectAcquireExclusiveLock(BugCheckParameter2);
    v57 = v56[4] & 1;
    *((_DWORD *)v56 + 8) |= 1u;
    _m_prefetchw(v56);
    v58 = *v56;
    v59 = *v56 - 16;
    if ( (*v56 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v59 = 0LL;
    if ( (v58 & 2) != 0
      || (v60 = *v56, v60 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v59, v58)) )
    {
      v61 = BugCheckParameter2;
      ExfReleasePushLock((_QWORD *)BugCheckParameter2);
    }
    else
    {
      v61 = BugCheckParameter2;
    }
    KeAbPostRelease(v61);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v62, v63, v64);
    if ( v57 )
      PiDmRemoveCacheReferenceForObject(v54, a2);
    v35 = (void *)BugCheckParameter2;
    goto LABEL_77;
  }
  v26 = CmMapCmObjectTypeToPnpObjectType((unsigned int)a3);
  v28 = PiDmAddCacheReferenceForObject(v26, v27, 0LL);
  *(_DWORD *)a6 = v28;
  v9 = -1073741536;
  if ( v28 >= 0 )
    return 0;
  return v9;
}
