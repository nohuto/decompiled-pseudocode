/*
 * XREFs of RmpResourceSetTableFindById @ 0x18002E6E0
 * Callers:
 *     ?SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REVOKE_MESSAGE@@@Z @ 0x180029578 (-SendData@ResourceSetCallback@@AEAAJPEAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@PEAU_RM_REV.c)
 * Callees:
 *     RmpObjectTableFindObjectByHandle @ 0x180017FB4 (RmpObjectTableFindObjectByHandle.c)
 */

__int64 __fastcall RmpResourceSetTableFindById(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v5 = a2;
  result = RmpObjectTableFindObjectByHandle(a1, (unsigned __int8 *)&v5, &v6);
  if ( (int)result >= 0 )
  {
    *a3 = v6;
    return 0LL;
  }
  return result;
}
