/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1404E64C8
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x1404E6370 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1406DD288 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1404DB9D4 (_CmGetDeviceInterfaceClassGuid.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140529454 (_CmGetDeviceInterfaceReferenceString.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromComposite(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r15
  _DWORD *v9; // rsi
  __int64 v11; // rbp
  int ObjectProperty; // ebx
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rax
  PVOID PoolWithTag; // rax
  void *v20; // r14
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int DeviceInterfaceReferenceString; // eax
  unsigned __int64 v25; // rax

  v8 = a5;
  v9 = a8;
  v11 = a6;
  ObjectProperty = 0;
  *a5 = 0;
  *v9 = 0;
  if ( v11 )
  {
    v14 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v14 = 0;
  }
  v15 = *(unsigned int *)(a4 + 16);
  if ( (unsigned int)v15 < 2 )
  {
    return (unsigned int)-1073741264;
  }
  else
  {
    if ( (_DWORD)v15 != 10 )
      goto LABEL_8;
    v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
      v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
    if ( v21 )
    {
LABEL_8:
      if ( (_DWORD)v15 != 4 )
        goto LABEL_35;
      v16 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
        v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
      if ( v16 )
      {
LABEL_35:
        if ( (_DWORD)v15 != 5 )
          goto LABEL_13;
        v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data1 )
          v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data4;
        if ( v23 )
        {
LABEL_13:
          if ( (_DWORD)v15 == 2 )
          {
            v18 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
              v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
            if ( !v18 )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
              v20 = PoolWithTag;
              if ( PoolWithTag )
              {
                ObjectProperty = PnpGetObjectProperty(
                                   a1,
                                   a2,
                                   3u,
                                   a3,
                                   0LL,
                                   (__int64)&DEVPKEY_Device_InstanceId,
                                   (__int64)&a6,
                                   (__int64)PoolWithTag,
                                   400,
                                   (__int64)&a5,
                                   0);
                if ( ObjectProperty >= 0 )
                {
                  if ( (_DWORD)a6 != 18
                    || (ObjectProperty = PnpGetObjectProperty(
                                           a1,
                                           (__int64)v20,
                                           1u,
                                           0LL,
                                           0LL,
                                           (__int64)&DEVPKEY_Device_ContainerId,
                                           (__int64)v8,
                                           v11,
                                           v14,
                                           (__int64)&a5,
                                           0),
                        ObjectProperty == -1073741772) )
                  {
                    ObjectProperty = -1073741275;
                  }
                }
                ExFreePoolWithTag(v20, 0);
                if ( !ObjectProperty || ObjectProperty == -1073741789 )
                  *v9 = (_DWORD)a5;
              }
              else
              {
                return (unsigned int)-1073741801;
              }
            }
          }
        }
        else
        {
          DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(v15, a2, v11, v14 >> 1, &a8);
          ObjectProperty = DeviceInterfaceReferenceString;
          if ( DeviceInterfaceReferenceString == -1073741772 )
          {
            return (unsigned int)-1073741275;
          }
          else if ( !DeviceInterfaceReferenceString || DeviceInterfaceReferenceString == -1073741789 )
          {
            v25 = 2LL * (unsigned int)a8;
            if ( v25 <= 0xFFFFFFFF )
            {
              *v9 = v25;
              *v8 = 18;
            }
            else
            {
              return (unsigned int)-1073741595;
            }
          }
        }
      }
      else
      {
        *v9 = 16;
        *v8 = 13;
        if ( v14 < 0x10 )
          return (unsigned int)-1073741789;
        else
          return (unsigned int)CmGetDeviceInterfaceClassGuid(v15, a2, (GUID *)v11);
      }
    }
    else
    {
      v22 = PnpGetObjectProperty(
              a1,
              a2,
              3u,
              a3,
              0LL,
              (__int64)&DEVPKEY_DeviceInterface_FriendlyName,
              (__int64)v8,
              v11,
              v14,
              (__int64)&a5,
              0);
      ObjectProperty = v22;
      if ( !v22 || v22 == -1073741789 )
        *v9 = (_DWORD)a5;
    }
  }
  return (unsigned int)ObjectProperty;
}
