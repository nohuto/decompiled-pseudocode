/*
 * XREFs of RaidUnitGetDeviceId @ 0x1C000A5B0
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C004D6C0 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     StorGetIdentityVendorId @ 0x1C000A470 (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C000A498 (StorGetIdentityProductId.c)
 *     RtlStringCchPrintfW @ 0x1C000A53C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     RaFixupIds @ 0x1C004D900 (RaFixupIds.c)
 *     PortGetDeviceType @ 0x1C004FABC (PortGetDeviceType.c)
 */

__int64 __fastcall RaidUnitGetDeviceId(__int64 a1, wchar_t **a2)
{
  unsigned int v4; // edi
  wchar_t *Pool; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *DeviceType; // rax
  _BYTE v10[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[24]; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x80uLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    StorGetIdentityVendorId((_QWORD *)(a1 + 96), (__int64)v10);
    StorGetIdentityProductId((_QWORD *)(a1 + 96), (__int64)v11);
    if ( (*(_DWORD *)(a1 + 1520) & 1) != 0 )
    {
      RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\VMLUN&Ven_%hs&Prod_%hs", v10, v11);
    }
    else
    {
      DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F, v6, v7);
      RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\%hs&Ven_%hs&Prod_%hs", *DeviceType, v10, v11);
    }
    RaFixupIds(Pool, 0LL);
  }
  else
  {
    v4 = -1073741801;
  }
  *a2 = Pool;
  return v4;
}
