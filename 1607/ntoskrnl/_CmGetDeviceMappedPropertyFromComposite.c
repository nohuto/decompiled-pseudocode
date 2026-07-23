/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x14050B84C
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1404E3720 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1406DD574 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1400C1760 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x14010AC6C (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     wcscmp @ 0x14014F524 (wcscmp.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpMultiSzGetLen @ 0x1404B8BCC (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceStatus @ 0x1404DA838 (_CmGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1404DB7E0 (_NtPlugPlayGetDeviceStatus.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14050C7CC (_NtPlugPlayGetDeviceProperty.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14050C958 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x14050CB90 (_CmGetDeviceParent.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140513264 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceRelationsList @ 0x1406DB9B8 (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceChildren @ 0x1406DD05C (_CmGetDeviceChildren.c)
 *     _CmGetDeviceSiblings @ 0x1406DD964 (_CmGetDeviceSiblings.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromComposite(
        __int64 a1,
        const wchar_t *a2,
        size_t a3,
        __int64 a4,
        _DWORD *a5,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int a7,
        int *a8,
        int a9)
{
  wchar_t *v10; // r14
  int *v12; // rsi
  int DeviceStatus; // ebx
  int v15; // edx
  unsigned int v16; // r15d
  unsigned int v17; // ecx
  size_t v18; // rdi
  int ObjectProperty; // eax
  __int64 v20; // r9
  __int64 v21; // rdi
  int v22; // eax
  const wchar_t *v23; // r11
  int v24; // eax
  NTSTATUS v25; // eax
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // eax
  int v29; // edx
  unsigned int v30; // eax
  int v31; // r13d
  int DeviceRelationsList; // eax
  unsigned int v33; // eax
  int DeviceParent; // eax
  int DeviceChildren; // eax
  int v36; // eax
  int v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int DeviceProperty; // eax
  size_t v44; // r9
  unsigned int v46; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v50; // [rsp+74h] [rbp-8Ch] BYREF
  int v51; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v52; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v53; // [rsp+80h] [rbp-80h] BYREF
  char v54[4]; // [rsp+84h] [rbp-7Ch] BYREF
  int v55; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v56; // [rsp+8Ch] [rbp-74h]
  size_t pcchLength; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v59; // [rsp+A8h] [rbp-58h] BYREF
  char v60[4]; // [rsp+ACh] [rbp-54h] BYREF
  char v61[8]; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE Buf2[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE Buf1[16]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Str2[40]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+130h] [rbp+30h] BYREF

  v10 = pszDest;
  v12 = a8;
  DeviceStatus = 0;
  v15 = a9;
  pcchLength = a3;
  v52 = 0;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *v12 = 0;
  v56 = v15 & 0xFFFF0000;
  if ( pszDest )
  {
    v16 = a7;
    v10 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)pszDest);
  }
  else
  {
    v16 = 0;
    a7 = 0;
  }
  v17 = *(_DWORD *)(a4 + 16);
  if ( v17 < 2 )
    return (unsigned int)-1073741264;
  if ( v17 == 10
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_NAME.fmtid.Data4 )
  {
    v18 = pcchLength;
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       (__int64)a2,
                       1u,
                       pcchLength,
                       0LL,
                       (__int64)&DEVPKEY_Device_FriendlyName,
                       (__int64)a5,
                       (__int64)v10,
                       v16,
                       (__int64)&v51,
                       v15 & 0xFFFF0000);
    DeviceStatus = ObjectProperty;
    if ( !ObjectProperty || ObjectProperty == -1073741789 )
    {
      *v12 = v51;
    }
    else if ( ObjectProperty == -1073741275 )
    {
      v20 = v18;
      v21 = a1;
      v22 = PnpGetObjectProperty(
              a1,
              (__int64)a2,
              1u,
              v20,
              0LL,
              (__int64)&DEVPKEY_Device_DeviceDesc,
              (__int64)a5,
              (__int64)v10,
              a7,
              (__int64)&v51,
              v56);
      DeviceStatus = v22;
      if ( !v22 || v22 == -1073741789 )
      {
        *v12 = v51;
      }
      else if ( v22 == -1073741275 )
      {
        return (unsigned int)DeviceStatus;
      }
      goto LABEL_19;
    }
    goto LABEL_21;
  }
  if ( v17 == 256
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4 )
  {
    DeviceStatus = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
    if ( DeviceStatus < 0 )
      goto LABEL_22;
    *v12 = 2 * pcchLength + 2;
    *a5 = 18;
    if ( v16 >= *v12 )
    {
      v25 = RtlStringCbCopyExW(v10, (unsigned int)*v12, v23, 0LL, 0LL, 0x900u);
      v23 = a2;
      DeviceStatus = v25;
      v21 = a1;
      if ( v25 < 0 )
      {
        *v12 = 0;
        *a5 = 0;
      }
      goto LABEL_23;
    }
    return (unsigned int)-1073741789;
  }
  if ( v17 == 2
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4
    || v17 == 3
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4
    || v17 == 12
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4 )
  {
    v49 = 0;
    v53 = 0;
    v52 = 0;
    DeviceStatus = CmGetDeviceStatus(a1, a2, pcchLength, &v49, &v53, &v52, v46);
    if ( DeviceStatus >= 0 )
    {
      v26 = *(_DWORD *)(a4 + 16);
      v27 = v49;
      if ( v26 == 2
        && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1
        && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4
        || v26 == 3
        && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1
        && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4 )
      {
        *v12 = 4;
        *a5 = 7;
      }
      else
      {
        if ( (v49 & 0x400) == 0 )
          return (unsigned int)-1073741275;
        *v12 = 4;
        *a5 = 24;
      }
      if ( a7 < *v12 )
        return (unsigned int)-1073741789;
      if ( *(_DWORD *)(a4 + 16) == 12
        && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1
        && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4 )
      {
        if ( (int)PnpGetObjectProperty(
                    a1,
                    (__int64)a2,
                    1u,
                    pcchLength,
                    0LL,
                    (__int64)&DEVPKEY_Device_ProblemStatusOverride,
                    (__int64)&v55,
                    (__int64)&v59,
                    4,
                    (__int64)&v51,
                    v56) >= 0
          && v55 == 24 )
        {
          v28 = v52;
          if ( v51 == 4 )
            v28 = v59;
          v52 = v28;
        }
        v27 = v49;
      }
      v29 = *(_DWORD *)(a4 + 16);
      if ( v29 == 2
        && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1
        && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4 )
      {
        *(_DWORD *)v10 = v27;
      }
      else
      {
        if ( v29 == 3
          && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1
          && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4 )
        {
          v30 = (v27 & 0x400) != 0 ? v53 : 0;
        }
        else
        {
          v30 = v52;
        }
        *(_DWORD *)v10 = v30;
      }
    }
    goto LABEL_21;
  }
  v31 = 4;
  if ( v17 == 4
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4 )
  {
    goto LABEL_94;
  }
  if ( v17 == 5
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4 )
  {
    v31 = 8;
LABEL_94:
    DeviceRelationsList = CmGetDeviceRelationsList(a1, (_DWORD)a2, v31, 0, 0, (__int64)&v50);
    DeviceStatus = DeviceRelationsList;
    if ( DeviceRelationsList != -1073741772 && DeviceRelationsList )
    {
      if ( DeviceRelationsList == -1073741789 )
      {
        *v12 = 2 * v50;
        v33 = a7;
        *a5 = 8210;
        if ( v33 >= *v12 )
        {
          v21 = a1;
          DeviceStatus = CmGetDeviceRelationsList(a1, (_DWORD)a2, v31, (_DWORD)v10, v33 >> 1, (__int64)&v50);
          if ( !DeviceStatus )
          {
            *v12 = 2 * PnpMultiSzGetLen(v10);
            return (unsigned int)DeviceStatus;
          }
          *v12 = 0;
          *a5 = 0;
          goto LABEL_19;
        }
        return (unsigned int)-1073741789;
      }
LABEL_21:
      v23 = a2;
LABEL_22:
      v21 = a1;
      goto LABEL_23;
    }
    return (unsigned int)-1073741275;
  }
  if ( v17 == 6
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4 )
  {
    v31 = 16;
    goto LABEL_94;
  }
  if ( v17 == 7
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4 )
  {
    v31 = 32;
    goto LABEL_94;
  }
  if ( v17 == 11
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4 )
  {
    v31 = 64;
    goto LABEL_94;
  }
  if ( v17 == 8
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4 )
  {
    v50 = v16 >> 1;
    DeviceParent = CmGetDeviceParent(a1, a2, v10, &v50);
    DeviceStatus = DeviceParent;
    if ( DeviceParent && DeviceParent != -1073741789 )
      goto LABEL_21;
    *v12 = 2 * v50;
    *a5 = 18;
    goto LABEL_108;
  }
  if ( v17 == 9
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4 )
  {
    v50 = v16 >> 1;
    DeviceChildren = CmGetDeviceChildren(a1, a2, v10, &v50);
    goto LABEL_114;
  }
  if ( v17 == 10
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4 )
  {
    v50 = v16 >> 1;
    DeviceChildren = CmGetDeviceSiblings(a1, a2, v10, &v50);
LABEL_114:
    DeviceStatus = DeviceChildren;
    if ( DeviceChildren && DeviceChildren != -1073741789 )
      goto LABEL_21;
    *v12 = 2 * v50;
    *a5 = 8210;
LABEL_108:
    if ( a7 < *v12 )
      return (unsigned int)-1073741789;
    goto LABEL_21;
  }
  if ( v17 == 2 )
  {
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1
      && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4 )
    {
      *v12 = 1;
      *a5 = 17;
      if ( v16 >= *v12 )
      {
        *(_BYTE *)v10 = -((unsigned __int8)CmIsDeviceSafeRemovalRequired(a1, a2, pcchLength) != 0);
        return (unsigned int)DeviceStatus;
      }
      return (unsigned int)-1073741789;
    }
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1
      && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4 )
    {
      v51 = 78;
      DeviceStatus = CmGetDeviceRegProp(
                       a1,
                       (__int64)a2,
                       pcchLength,
                       37,
                       (__int64)v61,
                       (__int64)Str2,
                       (__int64)&v51,
                       v15);
      if ( DeviceStatus < 0 )
        goto LABEL_21;
      if ( !wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
        return (unsigned int)-1073741275;
      *v12 = 16;
      *a5 = 13;
      if ( a7 < *v12 )
        return (unsigned int)-1073741789;
      v21 = a1;
      DeviceStatus = CmGetDeviceContainerIdFromBase(a1, a2, Str2, SourceString);
      if ( DeviceStatus >= 0 )
      {
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
        if ( DeviceStatus >= 0 )
          DeviceStatus = RtlGUIDFromString(&DestinationString, (GUID *)v10);
      }
      goto LABEL_19;
    }
  }
  if ( v17 == 5
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4 )
  {
    *v12 = 1;
    *a5 = 17;
    if ( v16 < *v12 )
      return (unsigned int)-1073741789;
    v21 = a1;
    DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( DeviceStatus < 0 )
      goto LABEL_19;
    *(_BYTE *)v10 = 0;
    v36 = NtPlugPlayGetDeviceStatus(a1, (__int64)&DestinationString, (__int64)&v49, (__int64)&v53, (__int64)&v52);
    DeviceStatus = v36;
    if ( v36 == -1073741810 )
      return 0;
    v23 = a2;
    if ( v36 < 0 )
      goto LABEL_23;
LABEL_142:
    *(_BYTE *)v10 = -1;
    goto LABEL_23;
  }
  if ( v17 == 6
    && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1
    && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4 )
  {
    *a5 = 17;
    *v12 = 1;
    if ( !v16 )
      return (unsigned int)-1073741789;
    v21 = a1;
    DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( DeviceStatus < 0 )
      goto LABEL_19;
    *(_BYTE *)v10 = 0;
    v37 = NtPlugPlayGetDeviceStatus(a1, (__int64)&DestinationString, (__int64)&v49, (__int64)&v53, (__int64)&v52);
    DeviceStatus = v37;
    if ( v37 == -1073741810 )
      return 0;
    if ( v37 < 0 )
      goto LABEL_19;
    if ( (v49 & 0x8000) == 0 )
    {
      if ( (v49 & 0x400) == 0 || v53 <= 0x1D && (v38 = 591396864, _bittest(&v38, v53)) )
      {
        if ( (v49 & 8) != 0 )
          goto LABEL_19;
        v39 = PnpGetObjectProperty(
                a1,
                (__int64)a2,
                1u,
                pcchLength,
                0LL,
                (__int64)&DEVPKEY_Device_Capabilities,
                (__int64)&v55,
                (__int64)v60,
                4,
                (__int64)&v51,
                v56);
        DeviceStatus = v39;
        if ( v39 == -1073741275 )
          return 0;
        if ( v39 < 0 )
          goto LABEL_19;
        v23 = a2;
        if ( (v60[0] & 0x40) == 0 )
          goto LABEL_23;
        goto LABEL_142;
      }
    }
LABEL_185:
    *(_BYTE *)v10 = -1;
    goto LABEL_19;
  }
  if ( v17 == 15 && *(_QWORD *)a4 == DEVPKEY_Device_IsConnected && *(_QWORD *)(a4 + 8) == 0x293B573F92A15394LL )
  {
    *a5 = 17;
    *v12 = 1;
    if ( !v16 )
      return (unsigned int)-1073741789;
    v21 = a1;
    DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( DeviceStatus < 0 )
      goto LABEL_19;
    *(_BYTE *)v10 = 0;
    v40 = NtPlugPlayGetDeviceStatus(a1, (__int64)&DestinationString, (__int64)&v49, (__int64)&v53, (__int64)&v52);
    DeviceStatus = v40;
    if ( v40 == -1073741810 )
      return 0;
    if ( v40 < 0 || (v49 & 0x2000000) != 0 )
      goto LABEL_19;
    v41 = PnpGetObjectProperty(
            a1,
            (__int64)a2,
            1u,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_PresenceNotForDevice,
            (__int64)&v55,
            (__int64)v54,
            1,
            (__int64)&v51,
            v56);
    DeviceStatus = v41;
    if ( v41 < 0 )
    {
      if ( v41 != -1073741275 && v41 != -1073741789 )
        goto LABEL_19;
      DeviceStatus = 0;
    }
    else if ( v55 == 17 && v54[0] == -1 )
    {
      goto LABEL_19;
    }
    *(_BYTE *)v10 = -1;
  }
  else
  {
    if ( v17 == 16
      && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1
      && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4 )
    {
      *a5 = 17;
      *v12 = 1;
      if ( !v16 )
        return (unsigned int)-1073741789;
      v21 = a1;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_19;
      *(_BYTE *)v10 = 0;
      v42 = NtPlugPlayGetDeviceStatus(a1, (__int64)&DestinationString, (__int64)&v49, (__int64)&v53, (__int64)&v52);
      DeviceStatus = v42;
      if ( v42 == -1073741810 )
        return 0;
      if ( v42 < 0 || (v49 & 0x100) == 0 && ((v49 & 0x400) == 0 || v53 != 14) )
        goto LABEL_19;
      goto LABEL_185;
    }
    if ( v17 == 8
      && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1
      && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4 )
    {
      *a5 = 7;
      *v12 = 4;
      v21 = a1;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_19;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         a1,
                         (unsigned int)&DestinationString,
                         13,
                         (_DWORD)v10,
                         v16,
                         (__int64)&a7);
    }
    else
    {
      if ( v17 == 4
        && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1
        && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4 )
      {
        v44 = pcchLength;
        *a5 = 17;
        *v12 = 1;
        v21 = a1;
        DeviceStatus = PnpGetObjectProperty(
                         a1,
                         (__int64)a2,
                         1u,
                         v44,
                         0LL,
                         (__int64)&DEVPKEY_Device_ContainerId,
                         (__int64)&v55,
                         (__int64)Buf2,
                         16,
                         (__int64)&v51,
                         v15 & 0xFFFF0000);
        if ( DeviceStatus >= 0 )
        {
          DeviceStatus = PnpGetObjectProperty(
                           a1,
                           (__int64)L"HTREE\\ROOT\\0",
                           1u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_Device_BaseContainerId,
                           (__int64)&v55,
                           (__int64)Buf1,
                           16,
                           (__int64)&v51,
                           v56);
          if ( DeviceStatus >= 0 )
          {
            if ( a7 < *v12 )
              return (unsigned int)-1073741789;
            *(_BYTE *)v10 = (memcmp(Buf1, Buf2, 0x10uLL) != 0) - 1;
          }
        }
        goto LABEL_19;
      }
      if ( v17 == 14
        && *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1
        && *(_QWORD *)(a4 + 8) == *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4 )
      {
        *a5 = 8210;
        v21 = a1;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_19;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           a1,
                           (unsigned int)&DestinationString,
                           14,
                           (_DWORD)v10,
                           v16,
                           (__int64)v12);
      }
      else
      {
        if ( v17 != 20
          || *(_QWORD *)a4 != *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1
          || *(_QWORD *)(a4 + 8) != *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4 )
        {
          if ( v17 != 21
            || *(_QWORD *)a4 != *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1
            || *(_QWORD *)(a4 + 8) != *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4 )
          {
            return (unsigned int)DeviceStatus;
          }
          *a5 = 8210;
          v21 = a1;
          DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
          if ( DeviceStatus >= 0 )
          {
            DeviceStatus = NtPlugPlayGetDeviceProperty(
                             a1,
                             (unsigned int)&DestinationString,
                             16,
                             (_DWORD)v10,
                             v16,
                             (__int64)v12);
            if ( DeviceStatus == -1073741772 )
              DeviceStatus = -1073741275;
          }
          goto LABEL_19;
        }
        *a5 = 8210;
        v21 = a1;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_19;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           a1,
                           (unsigned int)&DestinationString,
                           15,
                           (_DWORD)v10,
                           v16,
                           (__int64)v12);
      }
    }
    DeviceStatus = DeviceProperty;
    if ( DeviceProperty == -1073741772 )
      return (unsigned int)-1073741275;
  }
LABEL_19:
  v23 = a2;
LABEL_23:
  if ( DeviceStatus != -1073741810 )
    return (unsigned int)DeviceStatus;
  v24 = CmOpenDeviceRegKey(v21, (__int64)v23, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
  DeviceStatus = v24;
  if ( !v24 )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( v24 != -1073741810 && v24 != -1073741632 )
    return (unsigned int)-1073741823;
  return (unsigned int)DeviceStatus;
}
