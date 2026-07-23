/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x1404DE698
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1404E3720 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1406DD574 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpParseIndirectResourceString @ 0x1404A3088 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1404AC370 (_PnpParseIndirectInfString.c)
 *     _PnpMultiSzGetLen @ 0x1404B8BCC (_PnpMultiSzGetLen.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        int *a8,
        int a9)
{
  int v9; // ebx
  wchar_t *v10; // r12
  NTSTATUS DeviceRegProp; // ebx
  unsigned int v12; // r13d
  DEVPROPKEY **v13; // rcx
  unsigned int i; // edx
  DEVPROPKEY *v15; // r8
  DEVPROPKEY **v16; // rsi
  int v17; // r15d
  int v18; // edx
  int v19; // ecx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  wchar_t *PoolWithTag; // r13
  int v24; // eax
  const wchar_t *v25; // rsi
  int v26; // r9d
  int v27; // r15d
  int v28; // esi
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 Len; // r9
  NTSTATUS v33; // eax
  int v34; // r9d
  int v36; // [rsp+40h] [rbp-B9h] BYREF
  int v37; // [rsp+44h] [rbp-B5h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B1h]
  int v39; // [rsp+50h] [rbp-A9h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A1h]
  int v41; // [rsp+60h] [rbp-99h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-91h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-81h] BYREF
  GUID Guid; // [rsp+88h] [rbp-71h] BYREF
  WCHAR SourceString[40]; // [rsp+A0h] [rbp-59h] BYREF

  v9 = a3;
  v10 = a6;
  *(_QWORD *)&DestinationString.Length = a3;
  v40 = a2;
  v38 = a1;
  v37 = 0;
  v41 = 0;
  v39 = 0;
  Handle[0] = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v12 = a7;
    v10 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v12 = 0;
  }
  v13 = &CmDeviceRegPropMap;
  for ( i = 0; i < 0x21; ++i )
  {
    v15 = *v13;
    v16 = v13;
    if ( *(_DWORD *)(a4 + 16) == (*v13)->pid
      && *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1
      && *(_QWORD *)(a4 + 8) == *(_QWORD *)v15->fmtid.Data4 )
    {
      break;
    }
    v13 += 3;
    v16 = 0LL;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v17 = *((_DWORD *)v16 + 3);
  switch ( v17 )
  {
    case 9:
      goto LABEL_53;
    case 25:
      return (unsigned int)-1073741637;
    case 27:
      v27 = v40;
      v36 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v38, v40, v9, 27, (__int64)&v37, (__int64)&v39, (__int64)&v36, a9);
      if ( DeviceRegProp >= 0 )
      {
        if ( v37 != *((_DWORD *)v16 + 4) )
          return (unsigned int)-1073741811;
        *a8 = 1;
        *a5 = *((_DWORD *)v16 + 2);
        if ( v12 < *a8 )
          return (unsigned int)-1073741789;
        *(_BYTE *)v10 = -(v39 != 0);
      }
LABEL_47:
      v28 = v38;
      goto LABEL_48;
    case 37:
LABEL_53:
      v34 = *((_DWORD *)v16 + 3);
      v27 = v40;
      v36 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v38, v40, v9, v34, (__int64)&v37, (__int64)SourceString, (__int64)&v36, a9);
      if ( DeviceRegProp >= 0 )
      {
        if ( v37 == *((_DWORD *)v16 + 4) )
        {
          *a8 = 16;
          *a5 = *((_DWORD *)v16 + 2);
          if ( v12 >= *a8 )
          {
            SourceString[38] = 0;
            DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
            if ( DeviceRegProp >= 0 )
            {
              DeviceRegProp = RtlGUIDFromString(&DestinationString, &Guid);
              if ( DeviceRegProp >= 0 )
                *(GUID *)v10 = Guid;
            }
            goto LABEL_47;
          }
          return (unsigned int)-1073741789;
        }
        return (unsigned int)-1073741811;
      }
      goto LABEL_47;
  }
  v18 = v40;
  v19 = v38;
  *a8 = v12;
  v20 = CmGetDeviceRegProp(v19, v18, v9, v17, (__int64)&v37, (__int64)v10, (__int64)a8, a9);
  PoolWithTag = 0LL;
  DeviceRegProp = v20;
  if ( v20 && v20 != -1073741789 )
    goto LABEL_34;
  v24 = *((_DWORD *)v16 + 2);
  *a5 = v24;
  if ( v24 != 18 )
    goto LABEL_34;
  if ( !DeviceRegProp )
  {
    v25 = v10;
    goto LABEL_28;
  }
  if ( DeviceRegProp != -1073741789 )
  {
LABEL_34:
    if ( !DeviceRegProp )
    {
      if ( *a5 == 8210 )
      {
        Len = (unsigned int)PnpMultiSzGetLen(v10);
        if ( 2 * Len > (unsigned __int64)(unsigned int)*a8 )
        {
          DeviceRegProp = -1073741595;
          *a8 = 0;
          return (unsigned int)DeviceRegProp;
        }
        *a8 = 2 * Len;
      }
      if ( *a5 == 18 && !*a8 )
      {
        *a8 = 0;
        *a5 = 0;
        return (unsigned int)-1073741275;
      }
      return (unsigned int)DeviceRegProp;
    }
    v27 = v40;
    goto LABEL_47;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)*a8, 0x52504E50u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  v26 = v17;
  v27 = v40;
  v28 = v38;
  v36 = *a8;
  v29 = CmGetDeviceRegProp(
          v38,
          v40,
          *(_DWORD *)&DestinationString.Length,
          v26,
          (__int64)&v41,
          (__int64)PoolWithTag,
          (__int64)&v36,
          a9);
  if ( v29 >= 0 )
  {
    v25 = PoolWithTag;
LABEL_28:
    if ( v25 && (PnpParseIndirectInfString(v25, v21, v22) || PnpParseIndirectResourceString(v25, v30, v31)) )
      *a5 = 25;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_34;
  }
  DeviceRegProp = v29;
  ExFreePoolWithTag(PoolWithTag, 0);
LABEL_48:
  if ( DeviceRegProp != -1073741810 )
    return (unsigned int)DeviceRegProp;
  v33 = CmOpenDeviceRegKey(v28, v27, 16, 0, 1, 0, (__int64)Handle, 0LL);
  DeviceRegProp = v33;
  if ( !v33 )
  {
    ZwClose(Handle[0]);
    return (unsigned int)-1073741275;
  }
  if ( v33 != -1073741810 && v33 != -1073741632 )
    return (unsigned int)-1073741823;
  return (unsigned int)DeviceRegProp;
}
