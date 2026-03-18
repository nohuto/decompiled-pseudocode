/*
 * XREFs of AcpiQueryPciDeviceChassisLabel @ 0x1C0088340
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0087EF0 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0003AA0 (ACPIInternalSetFlags.c)
 *     AMLIFreeDataBuffs @ 0x1C00080D4 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0082E98 (ACPIAmliEvaluateDsm.c)
 *     ACPIInternalPciDeviceLabel @ 0x1C009C618 (ACPIInternalPciDeviceLabel.c)
 */

__int64 __fastcall AcpiQueryPciDeviceChassisLabel(__int64 a1)
{
  _BYTE *v2; // rcx
  __int64 *v3; // rcx
  int v4; // eax
  PVOID v5; // rbx
  unsigned int v6; // edi
  __int64 v8; // rdx
  PVOID P[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v10; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v11[48]; // [rsp+50h] [rbp-48h] BYREF

  v2 = (_BYTE *)(a1 + 912);
  if ( (*v2 & 1) != 0 )
    return 0LL;
  ACPIInternalSetFlags(v2, 1uLL);
  P[0] = 0LL;
  memset(v11, 0, sizeof(v11));
  v3 = *(__int64 **)(a1 + 712);
  v10 = PCI_ROOT_BUS_DSM_UUID;
  v4 = ACPIAmliEvaluateDsm(v3, (__int64)&v10, 2u, 7u, (__int64)v11, P);
  v5 = P[0];
  if ( v4 >= 0 && *((_WORD *)P[0] + 1) == 4 )
  {
    v8 = *((_QWORD *)P[0] + 4);
    if ( *((_DWORD *)P[0] + 6) >= 0x58u && (unsigned int)(*(_DWORD *)v8 - 1) <= 1 && *(_WORD *)(v8 + 10) == 1 )
      v6 = ACPIInternalPciDeviceLabel(a1);
    else
      v6 = -1073741823;
  }
  else
  {
    v6 = 0;
  }
  if ( v5 )
  {
    AMLIFreeDataBuffs((__int64)v5);
    ExFreePoolWithTag(v5, 0x52706341u);
  }
  return v6;
}
