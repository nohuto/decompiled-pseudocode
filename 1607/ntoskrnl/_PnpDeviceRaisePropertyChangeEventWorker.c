/*
 * XREFs of _PnpDeviceRaisePropertyChangeEventWorker @ 0x1404E9318
 * Callers:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404E9784 (_PnpObjectRaisePropertyChangeEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404D946C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     _PnpHasDerivedKeys @ 0x1404E9628 (_PnpHasDerivedKeys.c)
 *     _PnpNotifyDerivedKeys @ 0x1404E96B8 (_PnpNotifyDerivedKeys.c)
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
  __int128 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h]
  _BYTE v20[8]; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall *v21)(__int64, __int64, __int64); // [rsp+80h] [rbp-80h] BYREF
  __int64 v22; // [rsp+88h] [rbp-78h]
  DEVPROPKEY ***v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  _BYTE v25[8]; // [rsp+A0h] [rbp-60h] BYREF
  int Source2[6]; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t v27[40]; // [rsp+C0h] [rbp-40h] BYREF

  v21 = 0LL;
  *((_QWORD *)&v18 + 1) = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( a4 )
    goto LABEL_4;
  v10 = *(_DWORD *)(a5 + 16);
  if ( v10 == 6 )
  {
    v16 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_Device_SessionId.fmtid.Data1 )
      v16 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_Device_SessionId.fmtid.Data4;
    if ( !v16 )
      goto LABEL_22;
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
LABEL_22:
    *(_QWORD *)&v18 = 0LL;
    v11 = 1;
    a6(a1, a2, 1LL);
  }
  *(_QWORD *)&v18 = a3;
  *((_QWORD *)&v18 + 1) = a4;
  v19 = a5;
  a6(a1, a2, 1LL);
  PnpNotifyDerivedKeys(a1, a2, 1, a5, (__int64)&off_1402582E0, 9, (__int64)&v18, (__int64)a6);
  HasDerivedKeys = PnpHasDerivedKeys(a5, &off_140258280, 3LL);
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
                       (__int64)v25,
                       (__int64)Source2,
                       16,
                       (__int64)v20,
                       0);
    if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 )
    {
      if ( ObjectProperty < 0 )
        goto LABEL_31;
      if ( RtlCompareMemory(&unk_14025E998, Source2, 0x10uLL) == 16 )
        goto LABEL_7;
      if ( PnpStringFromGuid(Source2, v27) < 0 )
      {
LABEL_31:
        *(_QWORD *)&v18 = 0LL;
        ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, __int128 *))a6)(a1, 0LL, 5LL, 1LL, &v18);
        goto LABEL_7;
      }
      if ( v11 )
      {
        *(_QWORD *)&v18 = 0LL;
        ((void (__fastcall *)(__int64, wchar_t *, __int64, __int64, __int128 *))a6)(a1, v27, 5LL, 5LL, &v18);
      }
      if ( v13 )
      {
        v18 = 0LL;
        PnpNotifyDerivedKeys(a1, (unsigned int)v27, 5, a5, (__int64)&off_140258280, 3, (__int64)&v18, (__int64)a6);
      }
    }
  }
LABEL_7:
  result = PnpHasDerivedKeys(a5, &off_1402582C8, 1LL);
  if ( v11 || (_BYTE)result )
  {
    v21 = a6;
    BYTE4(v24) = v11;
    if ( (_BYTE)result )
    {
      v22 = a5;
      v23 = &off_1402582C8;
      LODWORD(v24) = 1;
    }
    result = CmGetMatchingFilteredDeviceInterfaceList(
               a1,
               0LL,
               a2,
               0,
               (__int64)PnpUpdateInterfacesCallback,
               (__int64)&v21,
               0LL,
               0,
               (__int64)v20,
               0);
    if ( (int)result < 0 )
    {
      *(_QWORD *)&v18 = 0LL;
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int128 *))a6)(a1, 0LL, 3LL, 1LL, &v18);
    }
  }
  return result;
}
