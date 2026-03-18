/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x140532058
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x14043B6C0 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x140717EF0 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     _PnpParseIndirectResourceString @ 0x140522934 (_PnpParseIndirectResourceString.c)
 *     _PnpMultiSzGetLen @ 0x1405323B4 (_PnpMultiSzGetLen.c)
 *     _PnpParseIndirectInfString @ 0x14053B874 (_PnpParseIndirectInfString.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        int *a8)
{
  wchar_t *v9; // r12
  unsigned int v11; // r13d
  int v12; // r11d
  DEVPROPKEY **v13; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v15; // r9
  DEVPROPKEY **v16; // rsi
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  PVOID PoolWithTag; // r13
  int DeviceRegProp; // ebx
  int v24; // eax
  __int64 Len; // r9
  const wchar_t *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r15
  __int64 v31; // rsi
  int v32; // r9d
  int v33; // eax
  int v34; // r9d
  int v35; // eax
  int v36; // [rsp+40h] [rbp-A9h] BYREF
  int v37; // [rsp+44h] [rbp-A5h] BYREF
  __int64 v38; // [rsp+48h] [rbp-A1h]
  __int64 v39; // [rsp+50h] [rbp-99h]
  int v40; // [rsp+58h] [rbp-91h] BYREF
  int v41; // [rsp+5Ch] [rbp-8Dh] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-89h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-79h] BYREF
  GUID Guid; // [rsp+80h] [rbp-69h] BYREF
  WCHAR SourceString[40]; // [rsp+90h] [rbp-59h] BYREF

  v9 = a6;
  *(_QWORD *)&DestinationString.Length = a3;
  *a5 = 0;
  *a8 = 0;
  v39 = a2;
  v38 = a1;
  v36 = 0;
  v41 = 0;
  v40 = 0;
  Handle[0] = 0LL;
  if ( a6 )
  {
    v11 = a7;
    v9 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_DWORD *)(a4 + 16);
  v13 = &CmDeviceRegPropMap;
  for ( i = 0; i < 0x21; ++i )
  {
    v15 = *v13;
    v16 = v13;
    if ( v12 == (*v13)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v13 += 3;
    v16 = 0LL;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v18 = *((_DWORD *)v16 + 3);
  switch ( v18 )
  {
    case 9:
      goto LABEL_46;
    case 25:
      return (unsigned int)-1073741637;
    case 27:
      v30 = v39;
      v37 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v38, v39, a3, 27, (__int64)&v36, (__int64)&v40, (__int64)&v37);
      if ( DeviceRegProp < 0 )
        goto LABEL_32;
      if ( v36 == *((_DWORD *)v16 + 4) )
      {
        *a8 = 1;
        *a5 = *((_DWORD *)v16 + 2);
        if ( v11 >= *a8 )
        {
          *(_BYTE *)v9 = -(v40 != 0);
          goto LABEL_32;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741811;
    case 37:
LABEL_46:
      v34 = *((_DWORD *)v16 + 3);
      v30 = v39;
      v37 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v38, v39, a3, v34, (__int64)&v36, (__int64)SourceString, (__int64)&v37);
      if ( DeviceRegProp < 0 )
        goto LABEL_32;
      if ( v36 == *((_DWORD *)v16 + 4) )
      {
        *a8 = 16;
        *a5 = *((_DWORD *)v16 + 2);
        if ( v11 >= *a8 )
        {
          SourceString[38] = 0;
          DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
          if ( DeviceRegProp >= 0 )
          {
            DeviceRegProp = RtlGUIDFromString(&DestinationString, &Guid);
            if ( DeviceRegProp >= 0 )
              *(GUID *)v9 = Guid;
          }
          goto LABEL_32;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741811;
  }
  v19 = v39;
  v20 = v38;
  *a8 = v11;
  v21 = CmGetDeviceRegProp(v20, v19, a3, v18, (__int64)&v36, (__int64)v9, (__int64)a8);
  PoolWithTag = 0LL;
  DeviceRegProp = v21;
  if ( !v21 || v21 == -1073741789 )
  {
    v24 = *((_DWORD *)v16 + 2);
    *a5 = v24;
    if ( v24 == 18 )
    {
      if ( DeviceRegProp )
      {
        if ( DeviceRegProp != -1073741789 )
          goto LABEL_17;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)*a8, 0x52504E50u);
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        v32 = v18;
        v30 = v39;
        v31 = v38;
        v37 = *a8;
        v33 = CmGetDeviceRegProp(
                v38,
                v39,
                *(__int64 *)&DestinationString.Length,
                v32,
                (__int64)&v41,
                (__int64)PoolWithTag,
                (__int64)&v37);
        if ( v33 < 0 )
        {
          DeviceRegProp = v33;
          ExFreePoolWithTag(PoolWithTag, 0);
LABEL_33:
          if ( DeviceRegProp == -1073741810 )
          {
            v35 = CmOpenDeviceRegKey(v31, v30, 0x10u, 0, 1, 0, (__int64)Handle, 0LL);
            DeviceRegProp = v35;
            if ( !v35 )
            {
              ZwClose(Handle[0]);
              return (unsigned int)-1073741275;
            }
            if ( v35 != -1073741810 && v35 != -1073741632 )
              return (unsigned int)-1073741823;
          }
          return (unsigned int)DeviceRegProp;
        }
        v27 = (const wchar_t *)PoolWithTag;
      }
      else
      {
        v27 = v9;
      }
      if ( v27 && ((unsigned __int8)PnpParseIndirectInfString(v27) || PnpParseIndirectResourceString(v27, v28, v29)) )
        *a5 = 25;
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
LABEL_17:
  if ( DeviceRegProp )
  {
    v30 = v39;
LABEL_32:
    v31 = v38;
    goto LABEL_33;
  }
  if ( *a5 == 8210 )
  {
    Len = (unsigned int)PnpMultiSzGetLen(v9);
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
