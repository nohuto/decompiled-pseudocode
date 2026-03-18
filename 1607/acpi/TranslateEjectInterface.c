/*
 * XREFs of TranslateEjectInterface @ 0x1C0084078
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C000B550 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 *     BuildTranslatorRanges @ 0x1C00A1028 (BuildTranslatorRanges.c)
 */

__int64 __fastcall TranslateEjectInterface(ULONG_PTR a1, __int64 a2)
{
  unsigned __int8 *v2; // rdi
  _QWORD *PoolWithTag; // rsi
  __int64 *DeviceExtension; // r15
  __int64 v7; // r14
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  char *v12; // rdx
  char v14; // [rsp+98h] [rbp+10h] BYREF
  PVOID v15; // [rsp+A0h] [rbp+18h]
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0LL;
  PoolWithTag = 0LL;
  P = 0LL;
  v15 = 0LL;
  DeviceExtension = (__int64 *)ACPIInternalGetDeviceExtension(a1);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( (int)ACPIGet(DeviceExtension, 1397900127, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v14) < 0 )
    goto LABEL_9;
  v8 = PnpBiosResourcesToNtResources(a1);
  v2 = (unsigned __int8 *)v15;
  v9 = v8;
  if ( v8 < 0 )
    goto LABEL_13;
  if ( !v15 || (v10 = *((_DWORD *)v15 + 9), v11 = 0, !v10) )
  {
LABEL_9:
    v9 = *(_DWORD *)(a2 + 48);
    goto LABEL_10;
  }
  v12 = (char *)v15 + 44;
  while ( 1 )
  {
    if ( *(v12 - 3) == -127 && (*(_WORD *)v12 & 0x6000) != 0 )
    {
      v15 = (PVOID)*((_QWORD *)v12 + 1);
      if ( *((_DWORD *)v12 + 1) != v2[32 * v11 + 9] || v15 != *(PVOID *)(v12 - 20) )
        break;
    }
    ++v11;
    v12 += 32;
    if ( v11 >= v10 )
      goto LABEL_9;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x58706341u);
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_13;
  }
  *PoolWithTag = DeviceExtension[89];
  PoolWithTag[3] = v2;
  v9 = BuildTranslatorRanges(PoolWithTag, PoolWithTag + 1, PoolWithTag + 2);
  if ( v9 >= 0 )
  {
    *(_DWORD *)v7 = 65584;
    *(_QWORD *)(v7 + 16) = PciConfigPinToLine;
    v9 = 0;
    *(_QWORD *)(v7 + 24) = PciConfigPinToLine;
    *(_QWORD *)(v7 + 32) = &TranslateBridgeResources;
    *(_QWORD *)(v7 + 40) = &TranslateBridgeRequirements;
    *(_QWORD *)(v7 + 8) = PoolWithTag;
LABEL_10:
    if ( v9 >= 0 )
      goto LABEL_13;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_13:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v9;
}
