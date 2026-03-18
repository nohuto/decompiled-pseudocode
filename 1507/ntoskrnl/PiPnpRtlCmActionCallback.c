/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x14043C5D4
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     Template_zjqq @ 0x1401FB744 (Template_zjqq.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140438E44 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x14043AA00 (PiPnpRtlCacheObjectBaseKey.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14043D4B4 (PiDmObjectGetCachedCmProperty.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14043E1DC (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x14043E2AC (_CmMapCmObjectTypeToPnpObjectType.c)
 *     _PnpSetObjectProperty @ 0x1404D8694 (_PnpSetObjectProperty.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x1404DF26C (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmListAddObject @ 0x1404DF9D4 (PiDmListAddObject.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E04DC (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E0538 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E066C (PiDmAddCacheReferenceForObject.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E4C04 (_CmGetInstallerClassRegProp.c)
 *     PnpIsNullGuid @ 0x14054E1B4 (PnpIsNullGuid.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140555D3C (PiPnpRtlGetFilteredDeviceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x140555FC4 (PiDmGetCmObjectListFromCache.c)
 *     PiDmListAddList @ 0x14058C898 (PiDmListAddList.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14058DD9C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14058E624 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PnpIsValidGuidString @ 0x14058E904 (PnpIsValidGuidString.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x14067FB38 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x14067FB74 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14067FB8C (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14067FBE4 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14067FC98 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14067FDA4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmListRemoveList @ 0x140680530 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140680838 (PiDmListRemoveObject.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(__int64 a1, const WCHAR *a2, unsigned int a3, int a4, int a5, __int64 a6)
{
  unsigned int v9; // esi
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int FilteredDeviceInterfaceList; // eax
  int v15; // eax
  _QWORD *v16; // r9
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  unsigned int v21; // eax
  PVOID PoolWithTag; // r12
  __int64 v23; // r9
  int DeviceRegProp; // eax
  int v25; // esi
  bool v26; // sf
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rdx
  unsigned int *v33; // rsi
  int v34; // eax
  unsigned int *v35; // r14
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int *v39; // rcx
  _QWORD *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // eax
  _QWORD *v44; // r9
  __int64 v45; // r14
  __int64 v46; // rdx
  signed __int64 *v47; // rbx
  ULONG_PTR v48; // rdx
  char v49; // si
  signed __int64 v50; // rax
  signed __int64 v51; // rcx
  signed __int64 v52; // rtt
  ULONG_PTR v53; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v55; // ax
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rsi
  char IsNullGuid; // al
  __int64 v60; // r8
  const EVENT_DESCRIPTOR *v61; // rdx
  GUID *p_Guid; // rcx
  _QWORD *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  int Object; // esi
  __int64 *v68; // r14
  _QWORD *v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  char v73; // [rsp+50h] [rbp-89h] BYREF
  char v74[3]; // [rsp+51h] [rbp-88h] BYREF
  size_t Size; // [rsp+54h] [rbp-85h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-79h] BYREF
  unsigned int *v77; // [rsp+68h] [rbp-71h] BYREF
  PVOID v78; // [rsp+70h] [rbp-69h] BYREF
  PVOID P; // [rsp+78h] [rbp-61h] BYREF
  __int64 v80; // [rsp+80h] [rbp-59h] BYREF
  __int64 v81; // [rsp+88h] [rbp-51h]
  __int64 v82; // [rsp+90h] [rbp-49h]
  __int64 v83; // [rsp+98h] [rbp-41h]
  __int64 v84; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v85; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v86; // [rsp+B0h] [rbp-29h] BYREF
  _QWORD v87[2]; // [rsp+B8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-11h] BYREF
  GUID Guid; // [rsp+D8h] [rbp-1h] BYREF

  v9 = -1073741822;
  if ( a4 > 13 )
  {
    v18 = a4 - 14;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
      {
        if ( a5 != 1 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
          return v9;
        v81 = 0LL;
        v80 = 0LL;
        v82 = 0LL;
        v83 = 0LL;
        v78 = 0LL;
        Object = PiDmGetObject(5LL, (__int64)a2, &v78);
        if ( Object >= 0 )
        {
          v68 = (__int64 *)v78;
          v81 = *(_QWORD *)(a6 + 24);
          v82 = *(_QWORD *)(a6 + 32);
          v80 = a1;
          do
          {
            LOBYTE(v83) = 0;
            Object = PiDmListEnumObjectsWithCallback(
                       3,
                       v68,
                       (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlEnumDevicesInContainerCallback,
                       (__int64)&v80);
          }
          while ( Object >= 0 && (_BYTE)v83 );
          if ( v68 )
            PiDmObjectRelease((unsigned int *)v68);
        }
        *(_DWORD *)a6 = Object;
        return (unsigned int)-1073741536;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 || a5 != 1 || (*(_DWORD *)(a6 + 80) & 0x10000) != 0 )
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
        v69 = *(_QWORD **)(a6 + 8);
        v70 = v69[1];
        if ( v70 )
        {
          if ( *v69 )
          {
            PiDmListRemoveObject(3LL, v70, *v69, v74);
            if ( v74[0] )
              PiDmListRemoveList(v71, v69[1], v72, *v69);
          }
        }
        PiPnpRtlFreeContainerRemoveInfo(v69);
      }
      return 0;
    }
    FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(*(_QWORD *)(a6 + 24), a2, &v85);
    v9 = FilteredDeviceInterfaceList;
    if ( FilteredDeviceInterfaceList < 0 )
      goto LABEL_31;
    v57 = v85;
LABEL_123:
    *(_QWORD *)(a6 + 8) = v57;
    return v9;
  }
  if ( a4 == 13 )
  {
    if ( a5 == 1 || *(int *)a6 < 0 )
      return 0;
    P = 0LL;
    v77 = 0LL;
    v33 = 0LL;
    v73 = 0;
    v34 = PiDmGetObject(5LL, (__int64)a2, &P);
    v35 = (unsigned int *)P;
    if ( v34 >= 0 )
    {
      v36 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &v77);
      v33 = v77;
      if ( v36 >= 0 )
      {
        PiDmListAddObject(3LL, v35, v77, &v73);
        if ( !v73 )
          PiDmListAddList(v37, v35, v38, v33);
      }
    }
    if ( v35 )
      PiDmObjectRelease(v35);
    if ( !v33 )
      return 0;
    v39 = v33;
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
                PiPnpRtlCacheObjectBaseKey(a1, (__int64)a2, v15, v16);
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
            v40 = *(_QWORD **)(a6 + 8);
            if ( *v40 )
            {
              v41 = v40[1];
              if ( v41 )
                PiDmListRemoveObject(4LL, v41, *v40, 0LL);
              v42 = v40[2];
              if ( v42 )
                PiDmListAddObject(4LL, v42, *v40, 0LL);
            }
            PiPnpRtlFreeInstallerClassChangeInfo(v40);
          }
          return 0;
        }
        v9 = 0;
        if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0
          || ((v21 = *(_DWORD *)(a6 + 40), PoolWithTag = 0LL, Size = 0LL, !v21)
           || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x47706E50u), v9 = 0, !PoolWithTag))
          && *(_DWORD *)(a6 + 40) )
        {
LABEL_60:
          if ( *(_QWORD *)(a6 + 16) )
          {
LABEL_61:
            if ( a3 != 1 || *(_DWORD *)(a6 + 24) != 9 )
              return v9;
            v30 = 0LL;
            if ( *(_DWORD *)(a6 + 28) == 1
              && *(_DWORD *)(a6 + 40) == 78
              && (unsigned __int8)PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
            {
              v30 = *(_QWORD *)(a6 + 32);
            }
            FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(a2, v30, v87);
            v9 = FilteredDeviceInterfaceList;
            if ( FilteredDeviceInterfaceList >= 0 )
            {
              *(_QWORD *)(a6 + 8) = v87[0];
              return v9;
            }
            goto LABEL_31;
          }
          v43 = CmMapCmObjectTypeToPnpObjectType(a3);
          PiPnpRtlCacheObjectBaseKey(a1, (__int64)a2, v43, v44);
          v26 = (v9 & 0x80000000) != 0;
LABEL_49:
          if ( v26 )
            return v9;
          goto LABEL_61;
        }
        LODWORD(Size) = *(_DWORD *)(a6 + 40);
        if ( a3 == 1 )
        {
          v23 = *(int *)(a6 + 24);
          if ( (unsigned int)(v23 - 1) > 0x24 || !DevicePropertyRead[v23] || DevicePropertyWrite[v23] )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              (__int64)a2,
                              *(_QWORD *)(a6 + 16),
                              v23,
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
            v26 = (v9 & 0x80000000) != 0;
            if ( v9 )
              goto LABEL_49;
            goto LABEL_60;
          }
          v56 = *(int *)(a6 + 24);
          if ( (unsigned int)(v56 - 1) > 0x24 || !ClassPropertyRead[v56] || ClassPropertyWrite[v56] )
          {
            DeviceRegProp = CmGetInstallerClassRegProp(
                              PiPnpRtlCtx,
                              (_DWORD)a2,
                              *(_QWORD *)(a6 + 16),
                              v56,
                              (__int64)&Size + 4,
                              (__int64)PoolWithTag,
                              (__int64)&Size);
LABEL_42:
            v25 = DeviceRegProp;
            if ( (DeviceRegProp < 0
               || Size != __PAIR64__(*(_DWORD *)(a6 + 28), *(_DWORD *)(a6 + 40))
               || memcmp(PoolWithTag, *(const void **)(a6 + 32), (unsigned int)Size))
              && (v25 != -1073741275 || *(_DWORD *)(a6 + 40))
              && v25 != -1073741790 )
            {
              goto LABEL_58;
            }
LABEL_45:
            *(_DWORD *)a6 = v25;
            v9 = -1073741536;
            goto LABEL_46;
          }
        }
        v25 = -1073741790;
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
        v57 = v87[1];
      }
      else
      {
        if ( a3 != 3 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo(a2, &v86);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList < 0 )
          goto LABEL_31;
        v57 = v86;
      }
      goto LABEL_123;
    }
    if ( a3 != 1 )
    {
      if ( a3 == 3 )
      {
        v63 = *(_QWORD **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v63 )
        {
          v64 = v63[1];
          if ( v64 )
            PiDmListRemoveObject(0LL, v64, *v63, 0LL);
          v65 = v63[2];
          if ( v65 )
            PiDmListRemoveObject(1LL, v65, *v63, 0LL);
          v66 = v63[3];
          if ( v66 )
            PiDmListRemoveObject(2LL, v66, *v63, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo(v63);
      }
      return 0;
    }
    v58 = *(_QWORD *)(a6 + 8);
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(v58 + 4));
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
        v61 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceDelete_Failure;
        goto LABEL_132;
      }
    }
    else if ( _bittest(&Microsoft_Windows_Kernel_PnPEnableBits, 0x13u) )
    {
      IsNullGuid = PnpIsNullGuid(&Guid);
      v61 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceDelete_Success;
LABEL_132:
      p_Guid = &Guid;
      if ( IsNullGuid )
        p_Guid = 0LL;
      Template_zjqq((__int64)p_Guid, v61, v60, a2, (__int64)p_Guid, *(_DWORD *)v58, *(_DWORD *)a6);
    }
    if ( *(int *)a6 >= 0 && *(_WORD *)(v58 + 4) )
    {
      v84 = MEMORY[0xFFFFF78000000014];
      PnpSetObjectProperty(a1, v58 + 4, 2, 0LL, (__int64)&DEVPKEY_DeviceClass_LastDeleteDate, 16, (__int64)&v84, 8, 0);
    }
    PiPnpRtlFreeDeviceDeleteInfo(v58);
    return 0;
  }
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 || !*(_BYTE *)(a6 + 32) )
    {
      v31 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiDmRemoveCacheReferenceForObject(v31, v32);
      return 0;
    }
    BugCheckParameter2 = 0LL;
    v45 = (unsigned int)CmMapCmObjectTypeToPnpObjectType(a3);
    if ( (int)PiDmGetObject(v45, v46, &BugCheckParameter2) < 0 )
      return 0;
    v47 = (signed __int64 *)BugCheckParameter2;
    PiDmObjectAcquireExclusiveLock(BugCheckParameter2);
    v49 = v47[4] & 1;
    *((_DWORD *)v47 + 8) |= 1u;
    _m_prefetchw(v47);
    v50 = *v47;
    v51 = *v47 - 16;
    if ( (*v47 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v51 = 0LL;
    if ( (v50 & 2) != 0
      || (v48 = BugCheckParameter2,
          v52 = *v47,
          v52 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v51, v50)) )
    {
      v53 = BugCheckParameter2;
      ExfReleasePushLock((_QWORD *)BugCheckParameter2, v48);
    }
    else
    {
      v53 = BugCheckParameter2;
    }
    KeAbPostRelease(v53);
    CurrentThread = KeGetCurrentThread();
    v55 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v55;
    if ( !v55
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v49 )
      PiDmRemoveCacheReferenceForObject((unsigned int)v45, a2);
    v39 = (unsigned int *)BugCheckParameter2;
LABEL_82:
    PiDmObjectRelease(v39);
    return 0;
  }
  v27 = CmMapCmObjectTypeToPnpObjectType(a3);
  v29 = PiDmAddCacheReferenceForObject(v27, v28, 0LL);
  *(_DWORD *)a6 = v29;
  v9 = -1073741536;
  if ( v29 >= 0 )
    return 0;
  return v9;
}
