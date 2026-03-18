/*
 * XREFs of CmpValueToData @ 0x140523DB4
 * Callers:
 *     CmpFindControlSet @ 0x140523A10 (CmpFindControlSet.c)
 *     CmpSortDriverList @ 0x140753EA8 (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14075424C (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x140754654 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x1407547E0 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140754E2C (CmpIsLoadType.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpGetValueData @ 0x140422DD0 (CmpGetValueData.c)
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
