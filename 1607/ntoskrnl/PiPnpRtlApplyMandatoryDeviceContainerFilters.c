/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1404CF3D4
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x1404DCF14 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1404E3A48 (PiDmListEnumObjectsWithCallback.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceContainerFilters(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  int v7; // ebx
  int Object; // eax
  PVOID v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v7 = 0;
  v14 = 0LL;
  P = 0LL;
  v12 = 0LL;
  if ( wcsicmp(a2, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}") )
  {
    Object = PiDmGetObject(5LL, a2, &P);
    v10 = P;
    v7 = Object;
    if ( Object >= 0 )
    {
      v12 = a1;
      v13 = a4;
      LOBYTE(v14) = 0;
      v7 = PiDmListEnumObjectsWithCallback(3LL, P, PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback, &v12);
      if ( v7 >= 0 )
        *a5 = v14;
    }
    if ( v10 )
      PiDmObjectRelease(v10);
  }
  else
  {
    *a5 = 1;
  }
  return (unsigned int)v7;
}
