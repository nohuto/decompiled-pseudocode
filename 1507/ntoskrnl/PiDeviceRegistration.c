/*
 * XREFs of PiDeviceRegistration @ 0x1404E6474
 * Callers:
 *     PpDeviceRegistration @ 0x1404E660C (PpDeviceRegistration.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404E4560 (PpForEachDeviceInstanceDriver.c)
 *     PnpConcatenateUnicodeStrings @ 0x140571E00 (PnpConcatenateUnicodeStrings.c)
 */

__int64 __fastcall PiDeviceRegistration(__int64 a1, char a2, UNICODE_STRING *a3)
{
  WCHAR *PoolWithTag; // r14
  unsigned __int16 v7; // dx
  int DeviceRegProp; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  void *v13; // [rsp+90h] [rbp+40h] BYREF
  int v14; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v15; // [rsp+A8h] [rbp+58h] BYREF

  v14 = 0;
  PoolWithTag = 0LL;
  if ( a3 )
  {
    *(_DWORD *)&a3->Length = 0;
    a3->Buffer = 0LL;
  }
  v7 = *(_WORD *)a1;
  if ( *(_WORD *)a1 <= 2u )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_22;
  }
  if ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * ((unsigned __int64)v7 >> 1) - 2) == 92 )
    *(_WORD *)a1 = v7 - 2;
  DeviceRegProp = PnpUnicodeStringToWstr(&v13, 0LL, (unsigned __int16 *)a1);
  if ( DeviceRegProp < 0 )
    goto LABEL_22;
  v15 = 512;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x20207050u);
  if ( !PoolWithTag )
  {
    DeviceRegProp = -1073741670;
    goto LABEL_22;
  }
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v13,
                    0LL,
                    5,
                    (__int64)&v14,
                    (__int64)PoolWithTag,
                    (__int64)&v15);
  PnpUnicodeStringToWstrFree(v13, a1);
  if ( DeviceRegProp < 0 )
  {
    if ( DeviceRegProp == -1073741275 )
      DeviceRegProp = 0;
LABEL_11:
    if ( DeviceRegProp < 0 )
      goto LABEL_22;
    goto LABEL_12;
  }
  DeviceRegProp = -1073741772;
  if ( v14 != 1 || v15 <= 2 )
    goto LABEL_22;
  RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( a3 )
  {
    DeviceRegProp = PnpConcatenateUnicodeStrings(a3, &DestinationString);
    goto LABEL_11;
  }
LABEL_12:
  LOBYTE(v13) = a2;
  DeviceRegProp = PpForEachDeviceInstanceDriver((unsigned __int16 *)a1, v9, (__int64)&v13);
  if ( DeviceRegProp >= 0 )
    goto LABEL_13;
  if ( a2 )
  {
    LOBYTE(v13) = 0;
    PpForEachDeviceInstanceDriver((unsigned __int16 *)a1, v10, (__int64)&v13);
  }
LABEL_22:
  if ( a3 && a3->Length )
  {
    ExFreePoolWithTag(a3->Buffer, 0);
    a3->Buffer = 0LL;
    *(_DWORD *)&a3->Length = 0;
  }
LABEL_13:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegProp;
}
