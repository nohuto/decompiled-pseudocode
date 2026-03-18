/*
 * XREFs of _CmSetInstallerClassRegPropWorker @ 0x140694860
 * Callers:
 *     _CmSetInstallerClassRegProp @ 0x140694708 (_CmSetInstallerClassRegProp.c)
 * Callees:
 *     _MapCmClassPropertyToRegValue @ 0x1400FF010 (_MapCmClassPropertyToRegValue.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1403E083C (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14042E630 (RtlLengthSecurityDescriptor.c)
 *     _PnpOpenPropertiesKey @ 0x14043F144 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegSetValue @ 0x14045D128 (_PnpCtxRegSetValue.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404DE0A0 (_CmOpenInstallerClassRegKey.c)
 *     _PnpCtxRegDeleteValue @ 0x1404EBE98 (_PnpCtxRegDeleteValue.c)
 *     _CmRaisePropertyChangeEvent @ 0x14053AD60 (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall CmSetInstallerClassRegPropWorker(
        __int64 *a1,
        __int64 a2,
        void *a3,
        int a4,
        unsigned int a5,
        void *a6,
        ULONG SecurityDescriptorLength,
        __int16 a8)
{
  int v8; // ebx
  void *v13; // rbp
  int v14; // eax
  HANDLE v15; // rdx
  HANDLE v16; // rcx
  const wchar_t *v17; // rax
  void *v18; // rcx
  int v19; // eax
  int v20; // eax
  HANDLE v21; // r9
  __int64 v23; // [rsp+28h] [rbp-40h]
  HANDLE v24; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-20h] BYREF

  v8 = 0;
  v24 = 0LL;
  Handle = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( SecurityDescriptorLength )
  {
    v13 = a6;
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (unsigned int)(a4 - 1) > 0x24 || !ClassPropertyRead[a4] )
    goto LABEL_51;
  if ( !ClassPropertyWrite[a4] )
    return (unsigned int)-1073741790;
  if ( a4 == 8 || a4 == 13 )
  {
    v14 = 1;
  }
  else
  {
    if ( a4 <= 17 )
      return (unsigned int)-1073741264;
    if ( a4 <= 19 )
    {
      v14 = 7;
    }
    else
    {
      if ( a4 != 24 )
      {
        if ( (unsigned int)(a4 - 26) <= 2 )
        {
          v14 = 4;
          goto LABEL_21;
        }
        return (unsigned int)-1073741264;
      }
      v14 = 3;
    }
  }
LABEL_21:
  if ( a5 != v14 )
    return (unsigned int)-1073741811;
  if ( a4 == 8 )
  {
    if ( SecurityDescriptorLength <= 0x40 )
      goto LABEL_29;
    return (unsigned int)-1073741811;
  }
  if ( a4 != 24
    || !SecurityDescriptorLength
    || RtlValidRelativeSecurityDescriptor(v13, SecurityDescriptorLength, 0)
    && RtlLengthSecurityDescriptor(v13) == SecurityDescriptorLength )
  {
LABEL_29:
    if ( !a3 )
    {
      v8 = CmOpenInstallerClassRegKey((int)a1, a2, 32LL, 0LL, 33554438, 0, (__int64)&v24, 0LL);
      if ( v8 < 0 )
        goto LABEL_52;
    }
    if ( a4 < 20 )
    {
      v16 = a3;
      if ( !a3 )
        v16 = v24;
    }
    else
    {
      v15 = v24;
      if ( a3 )
        v15 = a3;
      v8 = PnpOpenPropertiesKey(a1, (__int64)v15, 0LL, 2u, 1, v23, &Handle);
      if ( v8 < 0 )
        goto LABEL_52;
      v16 = Handle;
    }
    v17 = MapCmClassPropertyToRegValue((__int64)v16, a4);
    if ( v17 )
    {
      if ( SecurityDescriptorLength )
      {
        v20 = PnpCtxRegSetValue((__int64)v18, v18, (__int64)v17, a5, (__int64)v13, SecurityDescriptorLength);
        if ( v20 == -1073741444 )
        {
          v8 = -1073741772;
          goto LABEL_52;
        }
        if ( v20 < 0 )
          v8 = v20;
      }
      else
      {
        v19 = PnpCtxRegDeleteValue((__int64)v18, v18, v17);
        v8 = v19;
        if ( v19 == -1073741772 || v19 == -1073741444 )
          v8 = -1073741275;
      }
      if ( v8 >= 0 )
      {
        v21 = v24;
        if ( a3 )
          v21 = a3;
        CmRaisePropertyChangeEvent((__int64)a1, a2, 2u, (__int64)v21, a4);
      }
      goto LABEL_52;
    }
LABEL_51:
    v8 = -1073741264;
    goto LABEL_52;
  }
  v8 = -1073741811;
LABEL_52:
  if ( Handle )
    ZwClose(Handle);
  if ( v24 )
    ZwClose(v24);
  return (unsigned int)v8;
}
