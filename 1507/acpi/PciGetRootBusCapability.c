/*
 * XREFs of PciGetRootBusCapability @ 0x1C006FCB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C006FB44 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 */

__int64 __fastcall PciGetRootBusCapability(__int64 a1, __int64 a2)
{
  int v4; // eax
  char v5; // si
  const char *v6; // rcx
  __int64 result; // rax
  const char *v8; // rcx
  const char *v9; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 24) = PciRootBusFeaturesSupported;
  *(_DWORD *)(a2 + 28) = PciRootBusFeaturesControlRequest;
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 296);
  v4 = AcpiEvaluateDsmMethodOnPciRootBus(a1, &v10);
  v5 = v10;
  *(_DWORD *)(a1 + 212) = 0;
  *(_BYTE *)(a1 + 208) = 0;
  v6 = *(const char **)(a1 + 552);
  if ( v4 < 0 )
    v5 = 0;
  if ( v6 && strstr(v6, "PNP0A08")
    || (v8 = *(const char **)(a1 + 184)) != 0LL && strstr(v8, "PNP0A08")
    || (v9 = *(const char **)(a1 + 192)) != 0LL && strstr(v9, "PNP0A08") )
  {
    if ( *(_BYTE *)(a1 + 216) )
    {
      if ( *(_BYTE *)(a1 + 223) < 8u )
      {
        *(_DWORD *)(a1 + 212) = *(_BYTE *)(a1 + 223) >= 2u;
        goto LABEL_8;
      }
      *(_DWORD *)(a1 + 212) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 212) = 3;
    }
    *(_BYTE *)(a1 + 208) = 1;
  }
LABEL_8:
  if ( !*(_BYTE *)(a1 + 208)
    && (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1195787085LL, 0LL, 0LL) )
  {
    *(_BYTE *)(a1 + 208) = 1;
  }
  result = *(unsigned int *)(a1 + 212);
  *(_DWORD *)a2 = result;
  if ( v5 )
  {
    *(_BYTE *)(a2 + 4) = 1;
    *(_DWORD *)(a2 + 8) = *(unsigned __int8 *)(a1 + 223);
    result = *(unsigned __int16 *)(a1 + 224);
    *(_DWORD *)(a2 + 12) = result;
    if ( (*(_BYTE *)(a1 + 222) & 4) != 0 )
      *(_BYTE *)(a2 + 16) = 1;
    if ( (*(_BYTE *)(a1 + 222) & 1) != 0 )
      *(_DWORD *)(a2 + 20) = 1;
  }
  return result;
}
