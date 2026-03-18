/*
 * XREFs of ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400DA028
 * Callers:
 *     <none>
 * Callees:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1400DA52C (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140251980 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreMgrCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD); // r9
  __int64 result; // rax

  switch ( a3 )
  {
    case 1u:
      SMKM_STORE<SM_TRAITS>::SmStCleanup(a2);
      ExFreePoolWithTag((PVOID)a2, 0);
      break;
    case 7u:
      *(_BYTE *)(a2 + 4485) |= 2u;
      break;
    case 2u:
      SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(a1, *(_DWORD *)(a2 + 4480) & 0x1F);
      break;
    case 4u:
      SMKM_STORE_MGR<SM_TRAITS>::SmFeEmpty();
      break;
  }
  v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 10104);
  result = 0LL;
  if ( v6 )
    return v6(a1, a2, a3);
  return result;
}
