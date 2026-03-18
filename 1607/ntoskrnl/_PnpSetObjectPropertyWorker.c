/*
 * XREFs of _PnpSetObjectPropertyWorker @ 0x1404890F0
 * Callers:
 *     _PnpSetObjectProperty @ 0x140488D1C (_PnpSetObjectProperty.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140487998 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpSetGenericStoreProperty @ 0x140487A60 (_PnpSetGenericStoreProperty.c)
 *     _PnpValidatePropertyData @ 0x1404893D0 (_PnpValidatePropertyData.c)
 *     _PnpOpenObjectRegKey @ 0x1404FC340 (_PnpOpenObjectRegKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1405067F4 (_PnpObjectRaisePropertyChangeEvent.c)
 */

__int64 __fastcall PnpSetObjectPropertyWorker(
        __int64 a1,
        __int64 a2,
        signed int a3,
        __int64 a4,
        const wchar_t *a5,
        __int64 a6,
        int a7,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        unsigned int a10)
{
  PSECURITY_DESCRIPTOR v13; // rsi
  int v14; // ebx
  __int64 v15; // rdx
  int v16; // r9d
  HANDLE Handle[2]; // [rsp+50h] [rbp-38h] BYREF

  Handle[0] = 0LL;
  if ( (_WORD)a10 )
    return (unsigned int)-1073741811;
  v13 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    if ( !SecurityDescriptorLength )
      goto LABEL_17;
    return (unsigned int)-1073741811;
  }
  if ( !SecurityDescriptorLength )
LABEL_17:
    v13 = 0LL;
  v14 = PnpValidatePropertyData(v13, SecurityDescriptorLength);
  if ( v14 < 0 )
    goto LABEL_13;
  v14 = PnpSetMappedPropertyDispatch(a1, a2, a3, a4, (__int64)a5, a6, a7, (__int64)v13, SecurityDescriptorLength, a10);
  if ( v14 >= 0 && a3 >= 6 )
    PnpObjectRaisePropertyChangeEvent(a1, a2, a3, a4, (__int64)a5, a6);
  if ( v14 != -1073741802 )
    goto LABEL_13;
  if ( a4 )
  {
    v15 = a4;
    goto LABEL_9;
  }
  v14 = PnpOpenObjectRegKey(a1, a2, a3, 33554439, 0, (__int64)Handle, 0LL, 0);
  if ( v14 >= 0 )
  {
    v15 = (__int64)Handle[0];
LABEL_9:
    v14 = PnpSetGenericStoreProperty(a1, v15, a5, a6, a7, (__int64)v13, SecurityDescriptorLength);
    if ( v14 >= 0 )
    {
      v16 = (int)Handle[0];
      if ( a4 )
        v16 = a4;
      PnpObjectRaisePropertyChangeEvent(a1, a2, a3, v16, (__int64)a5, a6);
    }
  }
LABEL_13:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v14;
}
