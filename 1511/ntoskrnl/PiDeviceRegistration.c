/*
 * XREFs of PiDeviceRegistration @ 0x1403B9274
 * Callers:
 *     PpDeviceRegistration @ 0x1403B91E8 (PpDeviceRegistration.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PpForEachDeviceInstanceDriver @ 0x1403B940C (PpForEachDeviceInstanceDriver.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     PnpConcatenateUnicodeStrings @ 0x140508254 (PnpConcatenateUnicodeStrings.c)
 */

__int64 __fastcall PiDeviceRegistration(unsigned __int16 *a1, char a2, UNICODE_STRING *a3)
{
  WCHAR *PoolWithTag; // r14
  unsigned __int16 v7; // dx
  int DeviceRegProp; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+90h] [rbp+40h] BYREF
  int v14; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v15; // [rsp+A8h] [rbp+58h] BYREF

  v14 = 0;
  PoolWithTag = 0LL;
  if ( a3 )
  {
    *(_DWORD *)&a3->Length = 0;
    a3->Buffer = 0LL;
  }
  v7 = *a1;
  if ( *a1 <= 2u )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_23;
  }
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v7 >> 1) - 2) == 92 )
    *a1 = v7 - 2;
  DeviceRegProp = PnpUnicodeStringToWstr(&v13, 0LL, a1);
  if ( DeviceRegProp < 0 )
    goto LABEL_23;
  v15 = 512;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x20207050u);
  if ( !PoolWithTag )
  {
    DeviceRegProp = -1073741670;
    goto LABEL_23;
  }
  DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, v13, 0, 5, (__int64)&v14, (__int64)PoolWithTag, (__int64)&v15);
  PnpUnicodeStringToWstrFree(v13, a1);
  if ( DeviceRegProp < 0 )
  {
    if ( DeviceRegProp == -1073741275 )
      DeviceRegProp = 0;
LABEL_13:
    if ( DeviceRegProp < 0 )
      goto LABEL_23;
    goto LABEL_14;
  }
  DeviceRegProp = -1073741772;
  if ( v14 != 1 || v15 <= 2 )
    goto LABEL_23;
  RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( a3 )
  {
    DeviceRegProp = PnpConcatenateUnicodeStrings(a3, &DestinationString);
    goto LABEL_13;
  }
LABEL_14:
  LOBYTE(v13) = a2;
  DeviceRegProp = PpForEachDeviceInstanceDriver(a1, v9, &v13);
  if ( DeviceRegProp >= 0 )
    goto LABEL_15;
  if ( a2 )
  {
    LOBYTE(v13) = 0;
    PpForEachDeviceInstanceDriver(a1, v10, &v13);
  }
LABEL_23:
  if ( a3 && a3->Length )
  {
    ExFreePoolWithTag(a3->Buffer, 0);
    a3->Buffer = 0LL;
    *(_DWORD *)&a3->Length = 0;
  }
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegProp;
}
