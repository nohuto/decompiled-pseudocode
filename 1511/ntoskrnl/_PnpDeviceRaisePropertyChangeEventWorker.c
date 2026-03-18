/*
 * XREFs of _PnpDeviceRaisePropertyChangeEventWorker @ 0x14045A014
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140459F5C (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     _PnpHasDerivedKeys @ 0x14045A354 (_PnpHasDerivedKeys.c)
 *     _PnpNotifyDerivedKeys @ 0x14045A3E4 (_PnpNotifyDerivedKeys.c)
 *     _PnpStringFromGuid @ 0x14045C050 (_PnpStringFromGuid.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404DE928 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 */

__int64 __fastcall PnpDeviceRaisePropertyChangeEventWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void (__fastcall *a6)(__int64, __int64, __int64))
{
  int v10; // ecx
  char v11; // r14
  char HasDerivedKeys; // al
  char v13; // r15
  __int64 result; // rax
  int ObjectProperty; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[8]; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall *v20)(__int64, __int64, __int64); // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h]
  DEVPROPKEY ***v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  _BYTE v24[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Source2[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v26[80]; // [rsp+C0h] [rbp-40h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  *(_OWORD *)&v18[8] = 0LL;
  if ( a4 )
    goto LABEL_4;
  v10 = *(_DWORD *)(a5 + 16);
  if ( v10 == 6 )
  {
    v16 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1 )
      v16 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_Device_SessionId.fmtid.Data4;
    if ( !v16 )
      goto LABEL_30;
  }
  if ( v10 != 100 )
    goto LABEL_4;
  v17 = *(_QWORD *)a5 - DEVPKEY_Device_RestrictedSD;
  if ( *(_QWORD *)a5 == DEVPKEY_Device_RestrictedSD )
    v17 = *(_QWORD *)(a5 + 8) - 0x57C1C6A499921E96LL;
  if ( v17 )
  {
LABEL_4:
    v11 = 0;
  }
  else
  {
LABEL_30:
    *(_QWORD *)v18 = 0LL;
    v11 = 1;
    a6(a1, a2, 1LL);
  }
  *(_QWORD *)v18 = a3;
  *(_QWORD *)&v18[8] = a4;
  *(_QWORD *)&v18[16] = a5;
  a6(a1, a2, 1LL);
  PnpNotifyDerivedKeys(a1, a2, 1, a5, (__int64)&off_14023CA30, 9, (__int64)v18, (__int64)a6);
  HasDerivedKeys = PnpHasDerivedKeys(a5, &off_14023C9D0, 3LL);
  v13 = HasDerivedKeys;
  if ( v11 || HasDerivedKeys )
  {
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       1u,
                       a3,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)v24,
                       (__int64)Source2,
                       16,
                       (__int64)v19,
                       0);
    if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 )
    {
      if ( ObjectProperty < 0 )
        goto LABEL_31;
      if ( RtlCompareMemory(&unk_14023CC88, Source2, 0x10uLL) == 16 )
        goto LABEL_7;
      if ( (int)PnpStringFromGuid(Source2, v26) < 0 )
      {
LABEL_31:
        *(_QWORD *)v18 = 0LL;
        ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, _BYTE *))a6)(a1, 0LL, 5LL, 1LL, v18);
        goto LABEL_7;
      }
      if ( v11 )
      {
        *(_QWORD *)v18 = 0LL;
        ((void (__fastcall *)(__int64, _BYTE *, __int64, __int64, _BYTE *))a6)(a1, v26, 5LL, 5LL, v18);
      }
      if ( v13 )
      {
        *(_OWORD *)v18 = 0LL;
        PnpNotifyDerivedKeys(a1, (unsigned int)v26, 5, a5, (__int64)&off_14023C9D0, 3, (__int64)v18, (__int64)a6);
      }
    }
  }
LABEL_7:
  result = PnpHasDerivedKeys(a5, &off_14023CA18, 1LL);
  if ( v11 || (_BYTE)result )
  {
    v20 = a6;
    BYTE4(v23) = v11;
    if ( (_BYTE)result )
    {
      v21 = a5;
      v22 = &off_14023CA18;
      LODWORD(v23) = 1;
    }
    result = CmGetMatchingFilteredDeviceInterfaceList(
               a1,
               0,
               a2,
               0,
               (__int64)PnpUpdateInterfacesCallback,
               (__int64)&v20,
               0LL,
               0,
               (__int64)v19,
               0);
    if ( (int)result < 0 )
    {
      *(_QWORD *)v18 = 0LL;
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, _BYTE *))a6)(a1, 0LL, 3LL, 1LL, v18);
    }
  }
  return result;
}
