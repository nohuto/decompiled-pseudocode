/*
 * XREFs of ?RmpPolicyGetActiveSessionCount@@YAKPEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x180033D4C
 * Callers:
 *     ?RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_POLICY@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_REVOKE_POLICY@@PEAU_RM_POLICY_RECLAIM_CONTEXT@@@Z @ 0x180033DE4 (-RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_POLICY@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_REVOK.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall RmpPolicyGetActiveSessionCount(struct _RTL_BITMAP *a1)
{
  struct _RTL_BITMAP *v1; // rsi
  ULONG i; // ebx
  __int64 v4; // rcx

  v1 = a1 + 1;
  RtlClearAllBits(a1 + 1);
  for ( i = 0; i < *(&a1[2].SizeOfBitMap + 1); ++i )
  {
    v4 = *(_QWORD *)(((unsigned __int64)i << 6) + *(_QWORD *)&a1->SizeOfBitMap + 48);
    if ( !*(_DWORD *)(v4 + 48) && *(char *)(v4 + 666) < 0 )
      RtlSetBit(v1, *(_DWORD *)(v4 + 588));
  }
  return RtlNumberOfSetBits(v1);
}
