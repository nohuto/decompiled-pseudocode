/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x14043E350 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x140697E34 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14008FA28 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x140099968 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     wcscmp @ 0x140145B88 (wcscmp.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140441D70 (_NtPlugPlayGetDeviceStatus.c)
 *     _CmGetDeviceStatus @ 0x14045BF1C (_CmGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14045C16C (_NtPlugPlayGetDeviceProperty.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14045C2F8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _PnpMultiSzGetLen @ 0x1404B1A20 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1404EEB20 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceParent @ 0x1404F1E6C (_CmGetDeviceParent.c)
 *     _CmGetDeviceChildren @ 0x1404F9AB8 (_CmGetDeviceChildren.c)
 *     _CmGetDeviceRelationsList @ 0x1406968FC (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceSiblings @ 0x140698210 (_CmGetDeviceSiblings.c)
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
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // eax
  const wchar_t *v20; // r11
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edx
  int v25; // ecx
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int DeviceParent; // eax
  __int64 v32; // rcx
  int ObjectProperty; // eax
  int v34; // eax
  __int64 v35; // rcx
  NTSTATUS v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int DeviceProperty; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // edx
  __int64 v56; // rcx
  int DeviceChildren; // eax
  bool v58; // zf
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rcx
  int DeviceRelationsList; // eax
  unsigned int v65; // eax
  __int64 v66; // rcx
  int DeviceSiblings; // eax
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v73; // [rsp+70h] [rbp-90h] BYREF
  int v74; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v75; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v76; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v77; // [rsp+80h] [rbp-80h] BYREF
  char v78[4]; // [rsp+84h] [rbp-7Ch] BYREF
  int v79; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  size_t pcchLength; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v82; // [rsp+A8h] [rbp-58h] BYREF
  char v83[4]; // [rsp+ACh] [rbp-54h] BYREF
  char v84[8]; // [rsp+B0h] [rbp-50h] BYREF
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
  v76 = 0;
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
    v32 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
      v32 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
    if ( !v32 )
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
                         (__int64)&v74,
                         0);
      DeviceStatus = ObjectProperty;
      if ( ObjectProperty && ObjectProperty != -1073741789 )
      {
        v18 = a1;
        if ( ObjectProperty == -1073741275 )
        {
          v34 = PnpGetObjectProperty(
                  a1,
                  (__int64)a2,
                  1u,
                  pcchLength,
                  0LL,
                  (__int64)&DEVPKEY_Device_DeviceDesc,
                  (__int64)a5,
                  (__int64)v10,
                  a7,
                  (__int64)&v74,
                  0);
          DeviceStatus = v34;
          if ( !v34 || v34 == -1073741789 )
          {
            *v9 = v74;
          }
          else if ( v34 == -1073741275 )
          {
            return (unsigned int)DeviceStatus;
          }
        }
        goto LABEL_44;
      }
      *v9 = v74;
      goto LABEL_61;
    }
  }
  if ( v14 == 256 )
  {
    v35 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
      v35 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
    if ( !v35 )
    {
      DeviceStatus = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( DeviceStatus < 0 )
        goto LABEL_62;
      *v9 = 2 * pcchLength + 2;
      *a5 = 18;
      if ( v13 >= *v9 )
      {
        v36 = RtlStringCbCopyExW(v10, (unsigned int)*v9, v20, 0LL, 0LL, 0x900u);
        v20 = a2;
        DeviceStatus = v36;
        v18 = a1;
        if ( v36 < 0 )
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
    v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
      v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
    if ( !v23 )
      goto LABEL_48;
  }
  if ( v14 == 3 )
  {
    v46 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
      v46 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
    if ( !v46 )
      goto LABEL_48;
  }
  if ( v14 == 12 )
  {
    v59 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
      v59 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
    if ( !v59 )
    {
LABEL_48:
      v73 = 0;
      v77 = 0;
      v76 = 0;
      DeviceStatus = CmGetDeviceStatus(a1, (_DWORD)a2, a3, (unsigned int)&v73, (__int64)&v77, (__int64)&v76);
      if ( DeviceStatus >= 0 )
      {
        v24 = *(_DWORD *)(a4 + 16);
        v25 = v73;
        if ( v24 == 2 )
        {
          v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
            v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
          if ( !v26 )
            goto LABEL_53;
        }
        if ( v24 != 3 )
          goto LABEL_191;
        v48 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
          v48 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
        if ( !v48 )
        {
LABEL_53:
          *v9 = 4;
          *a5 = 7;
        }
        else
        {
LABEL_191:
          if ( (v73 & 0x400) == 0 )
            return (unsigned int)-1073741275;
          *v9 = 4;
          *a5 = 24;
        }
        if ( a7 < *v9 )
          return (unsigned int)-1073741789;
        if ( *(_DWORD *)(a4 + 16) == 12 )
        {
          v60 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
            v60 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
          if ( !v60 )
          {
            if ( (int)PnpGetObjectProperty(
                        a1,
                        (__int64)a2,
                        1u,
                        pcchLength,
                        0LL,
                        (__int64)&DEVPKEY_Device_ProblemStatusOverride,
                        (__int64)&v79,
                        (__int64)&v82,
                        4,
                        (__int64)&v74,
                        0) >= 0
              && v79 == 24 )
            {
              v61 = v76;
              if ( v74 == 4 )
                v61 = v82;
              v76 = v61;
            }
            v25 = v73;
          }
        }
        v27 = *(_DWORD *)(a4 + 16);
        if ( v27 != 2 )
          goto LABEL_147;
        v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( v28 )
        {
LABEL_147:
          if ( v27 != 3 )
            goto LABEL_202;
          v49 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
            v49 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
          if ( v49 )
LABEL_202:
            v50 = v76;
          else
            v50 = (v25 & 0x400) != 0 ? v77 : 0;
          *(_DWORD *)v10 = v50;
        }
        else
        {
          *(_DWORD *)v10 = v25;
        }
      }
LABEL_61:
      v20 = a2;
LABEL_62:
      v18 = a1;
      goto LABEL_30;
    }
  }
  v15 = 4;
  if ( v14 == 4 )
  {
    v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
      v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
    if ( !v29 )
    {
LABEL_212:
      DeviceRelationsList = CmGetDeviceRelationsList(a1, (_DWORD)a2, v15, 0, 0, (__int64)&v75);
      DeviceStatus = DeviceRelationsList;
      if ( DeviceRelationsList != -1073741772 && DeviceRelationsList )
      {
        if ( DeviceRelationsList != -1073741789 )
          goto LABEL_61;
        *v9 = 2 * v75;
        v65 = a7;
        *a5 = 8210;
        if ( v65 < *v9 )
          return (unsigned int)-1073741789;
        v18 = a1;
        DeviceStatus = CmGetDeviceRelationsList(a1, (_DWORD)a2, v15, (_DWORD)v10, v65 >> 1, (__int64)&v75);
        if ( !DeviceStatus )
        {
          *v9 = 2 * PnpMultiSzGetLen(v10);
          return (unsigned int)DeviceStatus;
        }
        *v9 = 0;
        *a5 = 0;
        goto LABEL_44;
      }
      return (unsigned int)-1073741275;
    }
  }
  if ( v14 == 5 )
  {
    v16 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
      v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
    if ( !v16 )
    {
      v15 = 8;
      goto LABEL_212;
    }
  }
  if ( v14 == 6 )
  {
    v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
      v38 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
    if ( !v38 )
    {
      v15 = 16;
      goto LABEL_212;
    }
  }
  if ( v14 == 7 )
  {
    v62 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
      v62 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
    if ( !v62 )
    {
      v15 = 32;
      goto LABEL_212;
    }
  }
  if ( v14 == 11 )
  {
    v63 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
      v63 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
    if ( !v63 )
    {
      v15 = 64;
      goto LABEL_212;
    }
  }
  if ( v14 == 8 )
  {
    v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
      v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
    if ( !v30 )
    {
      v75 = v13 >> 1;
      DeviceParent = CmGetDeviceParent(a1, a2, v10, &v75);
      DeviceStatus = DeviceParent;
      if ( DeviceParent && DeviceParent != -1073741789 )
        goto LABEL_61;
      *v9 = 2 * v75;
      *a5 = 18;
      goto LABEL_72;
    }
  }
  if ( v14 == 9 )
  {
    v56 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
      v56 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
    if ( !v56 )
    {
      v75 = v13 >> 1;
      DeviceChildren = CmGetDeviceChildren(a1, a2, v10, &v75);
      DeviceStatus = DeviceChildren;
      if ( DeviceChildren )
      {
        v58 = DeviceChildren == -1073741789;
        goto LABEL_175;
      }
      goto LABEL_176;
    }
  }
  if ( v14 == 10 )
  {
    v66 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
      v66 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
    if ( !v66 )
    {
      v75 = v13 >> 1;
      DeviceSiblings = CmGetDeviceSiblings(a1, a2, v10, &v75);
      DeviceStatus = DeviceSiblings;
      if ( DeviceSiblings != -1073741789 )
      {
        v58 = DeviceSiblings == 0;
LABEL_175:
        if ( !v58 )
          goto LABEL_61;
      }
LABEL_176:
      *v9 = 2 * v75;
      *a5 = 8210;
LABEL_72:
      if ( a7 < *v9 )
        return (unsigned int)-1073741789;
      goto LABEL_61;
    }
  }
  if ( v14 == 2 )
  {
    v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
      v37 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
    if ( !v37 )
    {
      *v9 = 1;
      *a5 = 17;
      if ( v13 >= *v9 )
      {
        *(_BYTE *)v10 = -((unsigned __int8)CmIsDeviceSafeRemovalRequired(a1, a2) != 0);
        return (unsigned int)DeviceStatus;
      }
      return (unsigned int)-1073741789;
    }
    v47 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
      v47 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
    if ( !v47 )
    {
      v74 = 78;
      DeviceStatus = CmGetDeviceRegProp(a1, (__int64)a2, a3, 37, (__int64)v84, (__int64)Str2, (__int64)&v74);
      if ( DeviceStatus < 0 )
        goto LABEL_61;
      if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
      {
        *v9 = 16;
        *a5 = 13;
        if ( a7 < *v9 )
          return (unsigned int)-1073741789;
        v18 = a1;
        DeviceStatus = CmGetDeviceContainerIdFromBase(a1, a2, Str2, SourceString);
        if ( DeviceStatus >= 0 )
        {
          DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
          if ( DeviceStatus >= 0 )
            DeviceStatus = RtlGUIDFromString(&DestinationString, (GUID *)v10);
        }
        goto LABEL_44;
      }
      return (unsigned int)-1073741275;
    }
  }
  if ( v14 != 5 )
    goto LABEL_100;
  v17 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
    v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
  if ( v17 )
  {
LABEL_100:
    if ( v14 != 6 )
      goto LABEL_152;
    v39 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
      v39 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
    if ( v39 )
    {
LABEL_152:
      if ( v14 != 15 )
        goto LABEL_114;
      v51 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
        v51 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v51 )
      {
LABEL_114:
        if ( v14 != 16 )
          goto LABEL_121;
        v42 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
          v42 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
        if ( v42 )
        {
LABEL_121:
          if ( v14 != 8 )
            goto LABEL_39;
          v44 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
            v44 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
          if ( v44 )
          {
LABEL_39:
            if ( v14 == 4 )
            {
              v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
              if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
                v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
              if ( !v22 )
              {
                *a5 = 17;
                *v9 = 1;
                v18 = a1;
                DeviceStatus = PnpGetObjectProperty(
                                 a1,
                                 (__int64)a2,
                                 1u,
                                 a3,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_ContainerId,
                                 (__int64)&v79,
                                 (__int64)Buf2,
                                 16,
                                 (__int64)&v74,
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
                                   (__int64)&v79,
                                   (__int64)Buf1,
                                   16,
                                   (__int64)&v74,
                                   0);
                  if ( DeviceStatus >= 0 )
                  {
                    if ( a7 < *v9 )
                      return (unsigned int)-1073741789;
                    *(_BYTE *)v10 = (memcmp(Buf1, Buf2, 0x10uLL) != 0) - 1;
                  }
                }
                goto LABEL_44;
              }
            }
            if ( v14 != 14 )
              goto LABEL_241;
            v68 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
              v68 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
            if ( v68 )
            {
LABEL_241:
              if ( v14 != 20 )
                goto LABEL_247;
              v69 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
              if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
                v69 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
              if ( v69 )
              {
LABEL_247:
                if ( v14 != 21 )
                  return (unsigned int)DeviceStatus;
                v70 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
                  v70 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
                if ( v70 )
                  return (unsigned int)DeviceStatus;
                *a5 = 8210;
                v18 = a1;
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
                goto LABEL_44;
              }
              *a5 = 8210;
              v18 = a1;
              DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
              if ( DeviceStatus < 0 )
                goto LABEL_44;
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
              v18 = a1;
              DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
              if ( DeviceStatus < 0 )
                goto LABEL_44;
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
            v18 = a1;
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
            if ( DeviceStatus < 0 )
              goto LABEL_44;
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
            goto LABEL_44;
          return (unsigned int)-1073741275;
        }
        *a5 = 17;
        *v9 = 1;
        if ( !v13 )
          return (unsigned int)-1073741789;
        v18 = a1;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_44;
        *(_BYTE *)v10 = 0;
        v43 = NtPlugPlayGetDeviceStatus(a1, (__int64)&DestinationString, (__int64)&v73, (__int64)&v77, (__int64)&v76, 0);
        DeviceStatus = v43;
        if ( v43 != -1073741810 )
        {
          if ( v43 < 0 || (v73 & 0x100) == 0 && ((v73 & 0x400) == 0 || v77 != 14) )
            goto LABEL_44;
          goto LABEL_168;
        }
      }
      else
      {
        *a5 = 17;
        *v9 = 1;
        if ( !v13 )
          return (unsigned int)-1073741789;
        v18 = a1;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_44;
        *(_BYTE *)v10 = 0;
        v52 = NtPlugPlayGetDeviceStatus(a1, (__int64)&DestinationString, (__int64)&v73, (__int64)&v77, (__int64)&v76, 0);
        DeviceStatus = v52;
        if ( v52 != -1073741810 )
        {
          if ( v52 < 0 || (v73 & 0x2000000) != 0 )
            goto LABEL_44;
          v53 = PnpGetObjectProperty(
                  a1,
                  (__int64)a2,
                  1u,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                  (__int64)&v79,
                  (__int64)v78,
                  1,
                  (__int64)&v74,
                  0);
          DeviceStatus = v53;
          if ( v53 >= 0 )
          {
            if ( v79 == 17 && v78[0] == -1 )
              goto LABEL_44;
          }
          else
          {
            if ( v53 != -1073741275 && v53 != -1073741789 )
              goto LABEL_44;
            DeviceStatus = 0;
          }
          *(_BYTE *)v10 = -1;
LABEL_44:
          v20 = a2;
          goto LABEL_30;
        }
      }
    }
    else
    {
      *a5 = 17;
      *v9 = 1;
      if ( !v13 )
        return (unsigned int)-1073741789;
      v18 = a1;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_44;
      *(_BYTE *)v10 = 0;
      v40 = NtPlugPlayGetDeviceStatus(a1, (__int64)&DestinationString, (__int64)&v73, (__int64)&v77, (__int64)&v76, 0);
      DeviceStatus = v40;
      if ( v40 == -1073741810 )
        return 0;
      if ( v40 < 0 )
        goto LABEL_44;
      if ( (v73 & 0x8000) != 0 || (v73 & 0x400) != 0 && (v77 > 0x1D || (v55 = 591396864, !_bittest(&v55, v77))) )
      {
LABEL_168:
        *(_BYTE *)v10 = -1;
        goto LABEL_44;
      }
      if ( (v73 & 8) != 0 )
        goto LABEL_44;
      v41 = PnpGetObjectProperty(
              a1,
              (__int64)a2,
              1u,
              pcchLength,
              0LL,
              (__int64)&DEVPKEY_Device_Capabilities,
              (__int64)&v79,
              (__int64)v83,
              4,
              (__int64)&v74,
              0);
      DeviceStatus = v41;
      if ( v41 != -1073741275 )
      {
        if ( v41 < 0 )
          goto LABEL_44;
        v20 = a2;
        if ( (v83[0] & 0x40) == 0 )
          goto LABEL_30;
        goto LABEL_29;
      }
    }
    return 0;
  }
  *v9 = 1;
  *a5 = 17;
  if ( v13 < *v9 )
    return (unsigned int)-1073741789;
  v18 = a1;
  DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( DeviceStatus < 0 )
    goto LABEL_44;
  *(_BYTE *)v10 = 0;
  v19 = NtPlugPlayGetDeviceStatus(a1, (__int64)&DestinationString, (__int64)&v73, (__int64)&v77, (__int64)&v76, 0);
  DeviceStatus = v19;
  if ( v19 == -1073741810 )
    return 0;
  v20 = a2;
  if ( v19 >= 0 )
LABEL_29:
    *(_BYTE *)v10 = -1;
LABEL_30:
  if ( DeviceStatus != -1073741810 )
    return (unsigned int)DeviceStatus;
  v54 = CmOpenDeviceRegKey(v18, (__int64)v20, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
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
