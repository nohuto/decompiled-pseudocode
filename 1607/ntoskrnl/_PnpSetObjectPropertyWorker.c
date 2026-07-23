/*
 * XREFs of _PnpSetObjectPropertyWorker @ 0x140511864
 * Callers:
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404E9784 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpValidatePropertyData @ 0x140511B44 (_PnpValidatePropertyData.c)
 *     _PnpSetGenericStoreProperty @ 0x140512430 (_PnpSetGenericStoreProperty.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140512470 (_PnpSetMappedPropertyDispatch.c)
 */

__int64 __fastcall PnpSetObjectPropertyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        int a10)
{
  PSECURITY_DESCRIPTOR v13; // rsi
  int v14; // ebx
  int v15; // edx
  __int64 v16; // r9
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
  v14 = PnpSetMappedPropertyDispatch(a1, a2, a3, a4, a5, a6, a7, (__int64)v13, SecurityDescriptorLength, a10);
  if ( v14 >= 0 && (int)a3 >= 6 )
    PnpObjectRaisePropertyChangeEvent(a1, a2, a3, a4, a5, a6);
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
    v15 = (int)Handle[0];
LABEL_9:
    v14 = PnpSetGenericStoreProperty(a1, v15, a5, a6, a7, (__int64)v13, SecurityDescriptorLength);
    if ( v14 >= 0 )
    {
      v16 = (__int64)Handle[0];
      if ( a4 )
        v16 = a4;
      PnpObjectRaisePropertyChangeEvent(a1, a2, a3, v16, a5, a6);
    }
  }
LABEL_13:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v14;
}
