/*
 * XREFs of _CmSetDeviceRegPropWorker @ 0x14053AB90
 * Callers:
 *     _CmSetDeviceRegProp @ 0x1404EE690 (_CmSetDeviceRegProp.c)
 * Callees:
 *     _MapCmDevicePropertyToRegValue @ 0x14008FCC0 (_MapCmDevicePropertyToRegValue.c)
 *     _MapCmDevicePropertyToRegType @ 0x1400F1C58 (_MapCmDevicePropertyToRegType.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1403E083C (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14042E630 (RtlLengthSecurityDescriptor.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegSetValue @ 0x14045D128 (_PnpCtxRegSetValue.c)
 *     _CmIsRootDevice @ 0x1404B1458 (_CmIsRootDevice.c)
 *     _PnpCtxRegDeleteValue @ 0x1404EBE98 (_PnpCtxRegDeleteValue.c)
 *     _CmRaisePropertyChangeEvent @ 0x14053AD60 (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall CmSetDeviceRegPropWorker(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        int a4,
        unsigned int a5,
        _DWORD *SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  int v8; // ebx
  _DWORD *v13; // rbp
  int v14; // eax
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  __int64 v17; // rcx
  HANDLE v18; // rdx
  int v19; // eax
  int v20; // r9d
  int v22; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0;
  Handle[0] = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( SecurityDescriptorLength )
  {
    v13 = SecurityDescriptorInput;
    if ( !SecurityDescriptorInput )
      return (unsigned int)-1073741811;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (unsigned int)(a4 - 1) > 0x24 || !DevicePropertyRead[a4] )
    goto LABEL_53;
  if ( !DevicePropertyWrite[a4] )
    return (unsigned int)-1073741790;
  v14 = MapCmDevicePropertyToRegType(a4);
  if ( !v14 )
    return (unsigned int)-1073741264;
  if ( a5 != v14 )
    return (unsigned int)-1073741811;
  if ( a4 == 11 )
  {
    if ( !SecurityDescriptorLength )
      goto LABEL_12;
    if ( v13 && SecurityDescriptorLength == 4 )
    {
      if ( *v13 && CmIsRootDevice(a2) )
        return (unsigned int)-1073741808;
      goto LABEL_12;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_12;
    return (unsigned int)-1073741811;
  }
  if ( a4 == 24
    && SecurityDescriptorLength
    && (!RtlValidRelativeSecurityDescriptor(v13, SecurityDescriptorLength, 0)
     || RtlLengthSecurityDescriptor(v13) != SecurityDescriptorLength) )
  {
    v8 = -1073741811;
    goto LABEL_25;
  }
LABEL_12:
  if ( !a3 )
  {
    v8 = CmOpenDeviceRegKey(a1, (__int64)a2, 0x10u, 0, 33554434, 0, (__int64)Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_25;
  }
  if ( a4 == 8 )
  {
LABEL_21:
    if ( v8 >= 0 )
    {
      v20 = (int)Handle[0];
      if ( a3 )
        v20 = (int)a3;
      CmRaisePropertyChangeEvent(a1, (_DWORD)a2, 1, v20, a4);
    }
    goto LABEL_25;
  }
  v16 = MapCmDevicePropertyToRegValue(v15, a4);
  if ( !v16 )
  {
LABEL_53:
    v8 = -1073741264;
    goto LABEL_25;
  }
  v18 = Handle[0];
  if ( !SecurityDescriptorLength )
  {
    if ( a3 )
      v18 = a3;
    v22 = PnpCtxRegDeleteValue(v17, v18, v16);
    v8 = v22;
    if ( v22 == -1073741772 || v22 == -1073741444 )
      v8 = -1073741275;
    goto LABEL_21;
  }
  if ( a3 )
    v18 = a3;
  v19 = PnpCtxRegSetValue(v17, v18, (__int64)v16, a5, (__int64)v13, SecurityDescriptorLength);
  if ( v19 != -1073741444 )
  {
    if ( v19 < 0 )
      v8 = v19;
    goto LABEL_21;
  }
  v8 = -1073741810;
LABEL_25:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v8;
}
