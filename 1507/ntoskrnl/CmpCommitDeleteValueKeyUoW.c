/*
 * XREFs of CmpCommitDeleteValueKeyUoW @ 0x1404F0898
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpFindNameInList @ 0x140429D40 (CmpFindNameInList.c)
 *     CmpMarkValueDataDirty @ 0x14042B6CC (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpFreeValue @ 0x1404A08F4 (CmpFreeValue.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     CmpRemoveValueFromList @ 0x1404F0AAC (CmpRemoveValueFromList.c)
 *     CmpInitializeValueNameString @ 0x1404F1CC4 (CmpInitializeValueNameString.c)
 */

__int64 __fastcall CmpCommitDeleteValueKeyUoW(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r13
  ULONG_PTR v6; // r15
  PVOID P; // [rsp+38h] [rbp-18h]
  int v9; // [rsp+A0h] [rbp+50h] BYREF
  int v10; // [rsp+A8h] [rbp+58h] BYREF

  v10 = -1;
  v9 = -1;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v2 + 32);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v3 + 8))(v3, *(unsigned int *)(v2 + 40), &v10);
  if ( !v4 )
    return 3221225626LL;
  v5 = v4 + 36;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v3 + 8))(v3, *(unsigned int *)(a1 + 80), &v9);
  if ( v6 )
  {
    P = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    if ( P )
    {
      CmpInitializeValueNameString(v6);
      CmpFindNameInList(v3, v5);
      ExFreePoolWithTag(P, 0);
    }
    (*(void (__fastcall **)(__int64, int *))(v3 + 16))(v3, &v9);
  }
  (*(void (__fastcall **)(__int64, int *))(v3 + 16))(v3, &v10);
  return 3221225626LL;
}
