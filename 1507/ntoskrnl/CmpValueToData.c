/*
 * XREFs of CmpValueToData @ 0x14059110C
 * Callers:
 *     CmpFindControlSet @ 0x140590E08 (CmpFindControlSet.c)
 *     CmpSortDriverList @ 0x1407BA9C0 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x1407BAD70 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x1407BAEFC (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1407BB548 (CmpIsLoadType.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407BB6E8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407F8760 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 */

PVOID __fastcall CmpValueToData(__int64 BugCheckParameter3, __int64 a2, ULONG_PTR a3, unsigned int *a4, __int64 a5)
{
  _BYTE v8[8]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  if ( !CmpGetValueData(BugCheckParameter3, a2, a3, a4, (__int64 *)P, v8, a5) )
    return 0LL;
  if ( v8[0] == 1 )
  {
    ExFreePoolWithTag(P[0], 0);
    KeBugCheckEx(0x51u, 8uLL, 0LL, BugCheckParameter3, a3);
  }
  return P[0];
}
