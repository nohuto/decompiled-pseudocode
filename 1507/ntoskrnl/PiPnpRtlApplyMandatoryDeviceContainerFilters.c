/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x140557E44
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x14043EC3C (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140438E44 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
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
  unsigned int *v10; // rdi
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
    Object = PiDmGetObject(5LL, (__int64)a2, &P);
    v10 = (unsigned int *)P;
    v7 = Object;
    if ( Object >= 0 )
    {
      v12 = a1;
      v13 = a4;
      LOBYTE(v14) = 0;
      v7 = PiDmListEnumObjectsWithCallback(
             3,
             (__int64 *)P,
             (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback,
             (__int64)&v12);
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
