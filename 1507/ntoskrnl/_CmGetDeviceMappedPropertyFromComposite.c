/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x1404DC05C
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x14043B6C0 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x140717EF0 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlUnalignedStringCchLengthW @ 0x14001988C (RtlUnalignedStringCchLengthW.c)
 *     RtlStringCbCopyExW @ 0x1400CF88C (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     wcscmp @ 0x140173BB8 (wcscmp.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404DA6E0 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceStatus @ 0x1404DCCB8 (_CmGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1404DCDE0 (_NtPlugPlayGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1404DE8D8 (_NtPlugPlayGetDeviceProperty.c)
 *     _CmGetDeviceParent @ 0x1404DEA74 (_CmGetDeviceParent.c)
 *     _PnpMultiSzGetLen @ 0x1405323B4 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140537BF4 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceRelationsList @ 0x14071648C (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceChildren @ 0x1407179D8 (_CmGetDeviceChildren.c)
 *     _CmGetDeviceSiblings @ 0x1407182CC (_CmGetDeviceSiblings.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromComposite(
        __int64 a1,
        const wchar_t *a2,
        size_t a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        int *a8)
{
  int *v9; // rsi
  wchar_t *v10; // r15
  int DeviceStatus; // ebx
  unsigned int v13; // r14d
  unsigned int v14; // eax
  int v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // rdi
  int DeviceProperty; // eax
  const wchar_t *v19; // r11
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edx
  int v26; // ecx
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rcx
  int DeviceParent; // eax
  __int64 v32; // rcx
  NTSTATUS v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  int ObjectProperty; // eax
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  int v55; // edx
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rcx
  int DeviceRelationsList; // eax
  unsigned int v62; // eax
  __int64 v63; // rcx
  int DeviceChildren; // eax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rax
  int v71; // [rsp+70h] [rbp-90h] BYREF
  int v72; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v73; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v74; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v75; // [rsp+80h] [rbp-80h] BYREF
  char v76[4]; // [rsp+84h] [rbp-7Ch] BYREF
  int v77; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  size_t pcchLength; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v80; // [rsp+A8h] [rbp-58h] BYREF
  char v81[4]; // [rsp+ACh] [rbp-54h] BYREF
  char v82[8]; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE Buf1[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE Buf2[16]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Str2[40]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+130h] [rbp+30h] BYREF

  v9 = a8;
  v10 = a6;
  pcchLength = a3;
  *a5 = 0;
  DeviceStatus = 0;
  *v9 = 0;
  v74 = 0;
  if ( a6 )
  {
    v13 = a7;
    v10 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v13 = 0;
    a7 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  if ( v14 < 2 )
    return (unsigned int)-1073741264;
  if ( v14 == 10 )
  {
    v41 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
      v41 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
    if ( !v41 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         (__int64)a2,
                         1u,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_Device_FriendlyName,
                         (__int64)a5,
                         (__int64)v10,
                         v13,
                         (__int64)&v72,
                         0);
      DeviceStatus = ObjectProperty;
      if ( ObjectProperty && ObjectProperty != -1073741789 )
      {
        v17 = a1;
        if ( ObjectProperty == -1073741275 )
        {
          v43 = PnpGetObjectProperty(
                  a1,
                  (__int64)a2,
                  1u,
                  pcchLength,
                  0LL,
                  (__int64)&DEVPKEY_Device_DeviceDesc,
                  (__int64)a5,
                  (__int64)v10,
                  a7,
                  (__int64)&v72,
                  0);
          DeviceStatus = v43;
          if ( !v43 || v43 == -1073741789 )
          {
            *v9 = v72;
          }
          else if ( v43 == -1073741275 )
          {
            return (unsigned int)DeviceStatus;
          }
        }
        goto LABEL_29;
      }
      *v9 = v72;
      goto LABEL_60;
    }
  }
  if ( v14 == 256 )
  {
    v32 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
      v32 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
    if ( !v32 )
    {
      DeviceStatus = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( DeviceStatus < 0 )
        goto LABEL_61;
      *v9 = 2 * pcchLength + 2;
      *a5 = 18;
      if ( v13 >= *v9 )
      {
        v33 = RtlStringCbCopyExW(v10, (unsigned int)*v9, v19, 0LL, 0LL, 0x900u);
        v19 = a2;
        DeviceStatus = v33;
        v17 = a1;
        if ( v33 < 0 )
        {
          *v9 = 0;
          *a5 = 0;
        }
        goto LABEL_30;
      }
      return (unsigned int)-1073741789;
    }
  }
  if ( v14 == 2 )
  {
    v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
      v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
    if ( !v24 )
      goto LABEL_47;
  }
  if ( v14 == 3 )
  {
    v46 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
      v46 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
    if ( !v46 )
      goto LABEL_47;
  }
  if ( v14 == 12 )
  {
    v56 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
      v56 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
    if ( !v56 )
    {
LABEL_47:
      v71 = 0;
      v75 = 0;
      v74 = 0;
      DeviceStatus = CmGetDeviceStatus(a1, (_DWORD)a2, a3, (unsigned int)&v71, (__int64)&v75, (__int64)&v74);
      if ( DeviceStatus >= 0 )
      {
        v25 = *(_DWORD *)(a4 + 16);
        v26 = v71;
        if ( v25 == 2 )
        {
          v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
            v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
          if ( !v27 )
            goto LABEL_52;
        }
        if ( v25 != 3 )
          goto LABEL_185;
        v47 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
          v47 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
        if ( !v47 )
        {
LABEL_52:
          *v9 = 4;
          *a5 = 7;
        }
        else
        {
LABEL_185:
          if ( (v71 & 0x400) == 0 )
            return (unsigned int)-1073741275;
          *v9 = 4;
          *a5 = 24;
        }
        if ( a7 < *v9 )
          return (unsigned int)-1073741789;
        if ( *(_DWORD *)(a4 + 16) == 12 )
        {
          v57 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
            v57 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
          if ( !v57 )
          {
            if ( (int)PnpGetObjectProperty(
                        a1,
                        (__int64)a2,
                        1u,
                        pcchLength,
                        0LL,
                        (__int64)&DEVPKEY_Device_ProblemStatusOverride,
                        (__int64)&v77,
                        (__int64)&v80,
                        4,
                        (__int64)&v72,
                        0) >= 0
              && v77 == 24 )
            {
              v58 = v74;
              if ( v72 == 4 )
                v58 = v80;
              v74 = v58;
            }
            v26 = v71;
          }
        }
        v28 = *(_DWORD *)(a4 + 16);
        if ( v28 != 2 )
          goto LABEL_138;
        v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( v29 )
        {
LABEL_138:
          if ( v28 != 3 )
            goto LABEL_196;
          v48 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
            v48 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
          if ( v48 )
LABEL_196:
            v49 = v74;
          else
            v49 = (v26 & 0x400) != 0 ? v75 : 0;
          *(_DWORD *)v10 = v49;
        }
        else
        {
          *(_DWORD *)v10 = v26;
        }
      }
LABEL_60:
      v19 = a2;
LABEL_61:
      v17 = a1;
      goto LABEL_30;
    }
  }
  v15 = 4;
  if ( v14 == 4 )
  {
    v35 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
      v35 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
    if ( !v35 )
    {
LABEL_205:
      DeviceRelationsList = CmGetDeviceRelationsList(a1, (_DWORD)a2, v15, 0, 0, (__int64)&v73);
      DeviceStatus = DeviceRelationsList;
      if ( DeviceRelationsList != -1073741772 && DeviceRelationsList )
      {
        if ( DeviceRelationsList != -1073741789 )
          goto LABEL_60;
        *v9 = 2 * v73;
        v62 = a7;
        *a5 = 8210;
        if ( v62 < *v9 )
          return (unsigned int)-1073741789;
        v17 = a1;
        DeviceStatus = CmGetDeviceRelationsList(a1, (_DWORD)a2, v15, (_DWORD)v10, v62 >> 1, (__int64)&v73);
        if ( !DeviceStatus )
        {
          *v9 = 2 * PnpMultiSzGetLen(v10);
          return (unsigned int)DeviceStatus;
        }
        *v9 = 0;
        *a5 = 0;
        goto LABEL_29;
      }
      return (unsigned int)-1073741275;
    }
  }
  if ( v14 == 5 )
  {
    v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
      v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
    if ( !v23 )
    {
      v15 = 8;
      goto LABEL_205;
    }
  }
  if ( v14 == 6 )
  {
    v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
      v37 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
    if ( !v37 )
    {
      v15 = 16;
      goto LABEL_205;
    }
  }
  if ( v14 == 7 )
  {
    v59 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
      v59 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
    if ( !v59 )
    {
      v15 = 32;
      goto LABEL_205;
    }
  }
  if ( v14 == 11 )
  {
    v60 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
      v60 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
    if ( !v60 )
    {
      v15 = 64;
      goto LABEL_205;
    }
  }
  if ( v14 == 8 )
  {
    v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
      v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
    if ( !v30 )
    {
      v73 = v13 >> 1;
      DeviceParent = CmGetDeviceParent(a1, a2, v10, &v73);
      DeviceStatus = DeviceParent;
      if ( DeviceParent && DeviceParent != -1073741789 )
        goto LABEL_60;
      *v9 = 2 * v73;
      *a5 = 18;
LABEL_67:
      if ( a7 < *v9 )
        return (unsigned int)-1073741789;
      goto LABEL_60;
    }
  }
  if ( v14 == 9 )
  {
    v63 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
      v63 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
    if ( !v63 )
    {
      v73 = v13 >> 1;
      DeviceChildren = CmGetDeviceChildren(a1, a2, v10, &v73);
      goto LABEL_217;
    }
  }
  if ( v14 == 10 )
  {
    v65 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
      v65 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
    if ( !v65 )
    {
      v73 = v13 >> 1;
      DeviceChildren = CmGetDeviceSiblings(a1, a2, v10, &v73);
LABEL_217:
      DeviceStatus = DeviceChildren;
      if ( DeviceChildren != -1073741789 && DeviceChildren )
        goto LABEL_60;
      *v9 = 2 * v73;
      *a5 = 8210;
      goto LABEL_67;
    }
  }
  if ( v14 == 2 )
  {
    v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
      v34 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
    if ( !v34 )
    {
      *v9 = 1;
      *a5 = 17;
      if ( v13 >= *v9 )
      {
        *(_BYTE *)v10 = -CmIsDeviceSafeRemovalRequired(a1, (__int64)a2, a3);
        return (unsigned int)DeviceStatus;
      }
      return (unsigned int)-1073741789;
    }
    v53 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
      v53 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
    if ( !v53 )
    {
      v72 = 78;
      DeviceStatus = CmGetDeviceRegProp(a1, (__int64)a2, a3, 37, (__int64)v82, (__int64)Str2, (__int64)&v72);
      if ( DeviceStatus < 0 )
        goto LABEL_60;
      if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
      {
        *v9 = 16;
        *a5 = 13;
        if ( a7 < *v9 )
          return (unsigned int)-1073741789;
        v17 = a1;
        DeviceStatus = CmGetDeviceContainerIdFromBase(a1, a2, Str2, SourceString);
        if ( DeviceStatus >= 0 )
        {
          DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
          if ( DeviceStatus >= 0 )
            DeviceStatus = RtlGUIDFromString(&DestinationString, (GUID *)v10);
        }
        goto LABEL_29;
      }
      return (unsigned int)-1073741275;
    }
  }
  if ( v14 == 5 )
  {
    v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
      v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
    if ( !v21 )
    {
      *v9 = 1;
      *a5 = 17;
      if ( v13 < *v9 )
        return (unsigned int)-1073741789;
      v17 = a1;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_29;
      *(_BYTE *)v10 = 0;
      v22 = NtPlugPlayGetDeviceStatus(
              a1,
              (unsigned int)&DestinationString,
              (unsigned int)&v71,
              (unsigned int)&v75,
              (__int64)&v74);
      DeviceStatus = v22;
      if ( v22 != -1073741810 )
      {
        v19 = a2;
        if ( v22 < 0 )
          goto LABEL_30;
        goto LABEL_39;
      }
      return 0;
    }
  }
  if ( v14 == 6 )
  {
    v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
      v38 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
    if ( !v38 )
    {
      *a5 = 17;
      *v9 = 1;
      if ( !v13 )
        return (unsigned int)-1073741789;
      v17 = a1;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_29;
      *(_BYTE *)v10 = 0;
      v39 = NtPlugPlayGetDeviceStatus(
              a1,
              (unsigned int)&DestinationString,
              (unsigned int)&v71,
              (unsigned int)&v75,
              (__int64)&v74);
      DeviceStatus = v39;
      if ( v39 == -1073741810 )
        return 0;
      if ( v39 < 0 )
        goto LABEL_29;
      if ( (v71 & 0x8000) == 0 )
      {
        if ( (v71 & 0x400) == 0 || v75 <= 0x1D && (v55 = 591396864, _bittest(&v55, v75)) )
        {
          if ( (v71 & 8) != 0 )
            goto LABEL_29;
          v40 = PnpGetObjectProperty(
                  a1,
                  (__int64)a2,
                  1u,
                  pcchLength,
                  0LL,
                  (__int64)&DEVPKEY_Device_Capabilities,
                  (__int64)&v77,
                  (__int64)v81,
                  4,
                  (__int64)&v72,
                  0);
          DeviceStatus = v40;
          if ( v40 != -1073741275 )
          {
            if ( v40 < 0 )
              goto LABEL_29;
            v19 = a2;
            if ( (v81[0] & 0x40) == 0 )
              goto LABEL_30;
LABEL_39:
            *(_BYTE *)v10 = -1;
            goto LABEL_30;
          }
          return 0;
        }
      }
LABEL_168:
      *(_BYTE *)v10 = -1;
      goto LABEL_29;
    }
  }
  if ( v14 != 15 )
    goto LABEL_121;
  v50 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
    v50 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
  if ( v50 )
  {
LABEL_121:
    if ( v14 != 16 )
      goto LABEL_25;
    v44 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
      v44 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
    if ( v44 )
    {
LABEL_25:
      if ( v14 != 8 )
        goto LABEL_88;
      v16 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
        v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
      if ( v16 )
      {
LABEL_88:
        if ( v14 == 4 )
        {
          v36 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
            v36 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
          if ( !v36 )
          {
            *a5 = 17;
            *v9 = 1;
            v17 = a1;
            DeviceStatus = PnpGetObjectProperty(
                             a1,
                             (__int64)a2,
                             1u,
                             a3,
                             0LL,
                             (__int64)&DEVPKEY_Device_ContainerId,
                             (__int64)&v77,
                             (__int64)Buf2,
                             16,
                             (__int64)&v72,
                             0);
            if ( DeviceStatus >= 0 )
            {
              DeviceStatus = PnpGetObjectProperty(
                               a1,
                               (__int64)L"HTREE\\ROOT\\0",
                               1u,
                               0LL,
                               0LL,
                               (__int64)&DEVPKEY_Device_BaseContainerId,
                               (__int64)&v77,
                               (__int64)Buf1,
                               16,
                               (__int64)&v72,
                               0);
              if ( DeviceStatus >= 0 )
              {
                if ( a7 < *v9 )
                  return (unsigned int)-1073741789;
                *(_BYTE *)v10 = (memcmp(Buf1, Buf2, 0x10uLL) != 0) - 1;
              }
            }
            goto LABEL_29;
          }
        }
        if ( v14 != 14 )
          goto LABEL_238;
        v66 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
          v66 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
        if ( v66 )
        {
LABEL_238:
          if ( v14 != 20 )
            goto LABEL_244;
          v67 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
            v67 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
          if ( v67 )
          {
LABEL_244:
            if ( v14 != 21 )
              return (unsigned int)DeviceStatus;
            v68 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
              v68 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
            if ( v68 )
              return (unsigned int)DeviceStatus;
            *a5 = 8210;
            v17 = a1;
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
            if ( DeviceStatus >= 0 )
            {
              DeviceStatus = NtPlugPlayGetDeviceProperty(
                               a1,
                               (unsigned int)&DestinationString,
                               16,
                               (_DWORD)v10,
                               v13,
                               (__int64)v9);
              if ( DeviceStatus == -1073741772 )
                DeviceStatus = -1073741275;
            }
            goto LABEL_29;
          }
          *a5 = 8210;
          v17 = a1;
          DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
          if ( DeviceStatus < 0 )
            goto LABEL_29;
          DeviceProperty = NtPlugPlayGetDeviceProperty(
                             a1,
                             (unsigned int)&DestinationString,
                             15,
                             (_DWORD)v10,
                             v13,
                             (__int64)v9);
        }
        else
        {
          *a5 = 8210;
          v17 = a1;
          DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
          if ( DeviceStatus < 0 )
            goto LABEL_29;
          DeviceProperty = NtPlugPlayGetDeviceProperty(
                             a1,
                             (unsigned int)&DestinationString,
                             14,
                             (_DWORD)v10,
                             v13,
                             (__int64)v9);
        }
      }
      else
      {
        *a5 = 7;
        *v9 = 4;
        v17 = a1;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_29;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           a1,
                           (unsigned int)&DestinationString,
                           13,
                           (_DWORD)v10,
                           v13,
                           (__int64)&a7);
      }
      DeviceStatus = DeviceProperty;
      if ( DeviceProperty != -1073741772 )
        goto LABEL_29;
      return (unsigned int)-1073741275;
    }
    *a5 = 17;
    *v9 = 1;
    if ( !v13 )
      return (unsigned int)-1073741789;
    v17 = a1;
    DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( DeviceStatus < 0 )
      goto LABEL_29;
    *(_BYTE *)v10 = 0;
    v45 = NtPlugPlayGetDeviceStatus(
            a1,
            (unsigned int)&DestinationString,
            (unsigned int)&v71,
            (unsigned int)&v75,
            (__int64)&v74);
    DeviceStatus = v45;
    if ( v45 == -1073741810 )
      return 0;
    if ( v45 < 0 || (v71 & 0x100) == 0 && ((v71 & 0x400) == 0 || v75 != 14) )
      goto LABEL_29;
    goto LABEL_168;
  }
  *a5 = 17;
  *v9 = 1;
  if ( !v13 )
    return (unsigned int)-1073741789;
  v17 = a1;
  DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( DeviceStatus < 0 )
    goto LABEL_29;
  *(_BYTE *)v10 = 0;
  v51 = NtPlugPlayGetDeviceStatus(
          a1,
          (unsigned int)&DestinationString,
          (unsigned int)&v71,
          (unsigned int)&v75,
          (__int64)&v74);
  DeviceStatus = v51;
  if ( v51 == -1073741810 )
    return 0;
  if ( v51 < 0 || (v71 & 0x2000000) != 0 )
    goto LABEL_29;
  v52 = PnpGetObjectProperty(
          a1,
          (__int64)a2,
          1u,
          0LL,
          0LL,
          (__int64)&DEVPKEY_Device_PresenceNotForDevice,
          (__int64)&v77,
          (__int64)v76,
          1,
          (__int64)&v72,
          0);
  DeviceStatus = v52;
  if ( v52 >= 0 )
  {
    if ( v77 == 17 && v76[0] == -1 )
      goto LABEL_29;
  }
  else
  {
    if ( v52 != -1073741275 && v52 != -1073741789 )
      goto LABEL_29;
    DeviceStatus = 0;
  }
  *(_BYTE *)v10 = -1;
LABEL_29:
  v19 = a2;
LABEL_30:
  if ( DeviceStatus != -1073741810 )
    return (unsigned int)DeviceStatus;
  v54 = CmOpenDeviceRegKey(v17, (__int64)v19, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
  DeviceStatus = v54;
  if ( !v54 )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( v54 != -1073741810 && v54 != -1073741632 )
    return (unsigned int)-1073741823;
  return (unsigned int)DeviceStatus;
}
