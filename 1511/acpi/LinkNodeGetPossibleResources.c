/*
 * XREFs of LinkNodeGetPossibleResources @ 0x1C00801D8
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0069680 (IrqArbAddAllocation.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C0080A68 (IrqArbpAssignIrqFromLinkNode.c)
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     PnpBiosResourcesToNtResources @ 0x1C006FE94 (PnpBiosResourcesToNtResources.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C007056C (PnpIoResourceListToCmResourceList.c)
 */

__int64 __fastcall LinkNodeGetPossibleResources(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  char *v3; // rbx
  __int64 v5; // rcx
  int v8; // edi
  SIZE_T v9; // r12
  PVOID PoolWithTag; // rax
  _QWORD *v11; // rcx
  char v12; // dl
  char v13; // al
  char *v15; // [rsp+80h] [rbp+30h] BYREF
  PVOID P; // [rsp+88h] [rbp+38h] BYREF

  *a2 = 0LL;
  v3 = 0LL;
  *a3 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v15 = 0LL;
  v8 = -1073741823;
  if ( v5
    && !InitSafeBootMode
    && (v9 = (unsigned int)(32 * (*(_DWORD *)(v5 + 36) - 1) + 72),
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x41706341u),
        v15 = (char *)PoolWithTag,
        (v3 = (char *)PoolWithTag) != 0LL) )
  {
    memmove(PoolWithTag, *(const void **)(a1 + 48), (unsigned int)v9);
  }
  else
  {
    v11 = *(_QWORD **)(a1 + 552);
    P = 0LL;
    ACPIGet(v11, 1397903455, 335609864, 0LL, 0, 0LL, 0LL, (__int64)&P, 0LL);
    if ( !P )
      goto LABEL_9;
    v8 = PnpBiosResourcesToNtResources(0LL, (ULONG_PTR)P, 0, &v15);
    ExFreePoolWithTag(P, 0);
    v3 = v15;
    if ( v8 < 0 )
      goto LABEL_9;
  }
  v12 = v3[56];
  v13 = v3[44];
  v15 = 0LL;
  *a3 = ((v13 & 1) == 0) | v12;
  v8 = PnpIoResourceListToCmResourceList(v3, &v15);
  if ( v8 >= 0 )
  {
    v8 = 0;
    *a2 = v15;
  }
LABEL_9:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v8;
}
