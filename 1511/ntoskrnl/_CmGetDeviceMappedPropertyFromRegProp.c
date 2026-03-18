/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x140440104
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x14043E350 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x140697E34 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     _PnpParseIndirectResourceString @ 0x140492DD4 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1404A695C (_PnpParseIndirectInfString.c)
 *     _PnpMultiSzGetLen @ 0x1404B1A20 (_PnpMultiSzGetLen.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        GUID *a6,
        unsigned int a7,
        int *a8)
{
  GUID *v9; // r12
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
  GUID *PoolWithTag; // r13
  int DeviceRegProp; // ebx
  int v24; // eax
  GUID *v25; // rsi
  __int64 v27; // r15
  __int64 v28; // rsi
  int v29; // r9d
  int v30; // eax
  __int64 Len; // r9
  int v32; // r9d
  int v33; // eax
  int v34; // [rsp+40h] [rbp-A9h] BYREF
  int v35; // [rsp+44h] [rbp-A5h] BYREF
  __int64 v36; // [rsp+48h] [rbp-A1h]
  __int64 v37; // [rsp+50h] [rbp-99h]
  int v38; // [rsp+58h] [rbp-91h] BYREF
  int v39; // [rsp+5Ch] [rbp-8Dh] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-89h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-79h] BYREF
  GUID Guid; // [rsp+80h] [rbp-69h] BYREF
  WCHAR SourceString[40]; // [rsp+90h] [rbp-59h] BYREF

  v9 = a6;
  *(_QWORD *)&DestinationString.Length = a3;
  *a5 = 0;
  *a8 = 0;
  v37 = a2;
  v36 = a1;
  v34 = 0;
  v39 = 0;
  v38 = 0;
  Handle[0] = 0LL;
  if ( a6 )
  {
    v11 = a7;
    v9 = (GUID *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
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
      goto LABEL_45;
    case 25:
      return (unsigned int)-1073741637;
    case 27:
      v27 = v37;
      v35 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v36, v37, a3, 27, (__int64)&v34, (__int64)&v38, (__int64)&v35);
      if ( DeviceRegProp < 0 )
        goto LABEL_29;
      if ( v34 == *((_DWORD *)v16 + 4) )
      {
        *a8 = 1;
        *a5 = *((_DWORD *)v16 + 2);
        if ( v11 >= *a8 )
        {
          LOBYTE(v9->Data1) = -(v38 != 0);
          goto LABEL_29;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741811;
    case 37:
LABEL_45:
      v32 = *((_DWORD *)v16 + 3);
      v27 = v37;
      v35 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v36, v37, a3, v32, (__int64)&v34, (__int64)SourceString, (__int64)&v35);
      if ( DeviceRegProp < 0 )
        goto LABEL_29;
      if ( v34 == *((_DWORD *)v16 + 4) )
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
              *v9 = Guid;
          }
          goto LABEL_29;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741811;
  }
  v19 = v37;
  v20 = v36;
  *a8 = v11;
  v21 = CmGetDeviceRegProp(v20, v19, a3, v18, (__int64)&v34, (__int64)v9, (__int64)a8);
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
          goto LABEL_24;
        PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, (unsigned int)*a8, 0x52504E50u);
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        v29 = v18;
        v27 = v37;
        v28 = v36;
        v35 = *a8;
        v30 = CmGetDeviceRegProp(
                v36,
                v37,
                *(__int64 *)&DestinationString.Length,
                v29,
                (__int64)&v39,
                (__int64)PoolWithTag,
                (__int64)&v35);
        if ( v30 < 0 )
        {
          DeviceRegProp = v30;
          ExFreePoolWithTag(PoolWithTag, 0);
LABEL_30:
          if ( DeviceRegProp == -1073741810 )
          {
            v33 = CmOpenDeviceRegKey(v28, v27, 0x10u, 0, 1, 0, (__int64)Handle, 0LL);
            DeviceRegProp = v33;
            if ( !v33 )
            {
              ZwClose(Handle[0]);
              return (unsigned int)-1073741275;
            }
            if ( v33 != -1073741810 && v33 != -1073741632 )
              return (unsigned int)-1073741823;
          }
          return (unsigned int)DeviceRegProp;
        }
        v25 = PoolWithTag;
      }
      else
      {
        v25 = v9;
      }
      if ( v25
        && ((unsigned __int8)PnpParseIndirectInfString(v25) || (unsigned __int8)PnpParseIndirectResourceString(v25)) )
      {
        *a5 = 25;
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
LABEL_24:
  if ( DeviceRegProp )
  {
    v27 = v37;
LABEL_29:
    v28 = v36;
    goto LABEL_30;
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
