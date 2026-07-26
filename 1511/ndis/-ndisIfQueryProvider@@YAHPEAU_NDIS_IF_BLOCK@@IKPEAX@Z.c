/*
 * XREFs of ?ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00BEE9C
 * Callers:
 *     ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00956F0 (-ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

__int64 __fastcall ndisIfQueryProvider(struct _NDIS_IF_BLOCK *a1, __int64 a2, unsigned int a3, char *a4)
{
  _NDIS_IF_PROVIDER_BLOCK *ProviderHandle; // rax
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  unsigned int v9; // esi
  size_t v10; // r8
  char *v11; // rcx
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  ProviderHandle = a1->ProviderHandle;
  ProviderIfContext = a1->ProviderIfContext;
  QueryObjectHandler = ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
  v13 = a3;
  v9 = ((__int64 (__fastcall *)(void *, __int64, unsigned int *))QueryObjectHandler)(ProviderIfContext, a2, &v13);
  if ( v9 )
  {
    v10 = a3;
    v11 = a4;
LABEL_5:
    memset(v11, 0, v10);
    return v9;
  }
  if ( v13 < a3 )
  {
    v11 = &a4[v13];
    v10 = a3 - v13;
    goto LABEL_5;
  }
  return v9;
}
