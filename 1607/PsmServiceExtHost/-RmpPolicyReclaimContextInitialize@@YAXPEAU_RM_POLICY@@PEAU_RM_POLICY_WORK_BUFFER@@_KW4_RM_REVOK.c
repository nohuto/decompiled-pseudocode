/*
 * XREFs of ?RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_POLICY@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_REVOKE_POLICY@@PEAU_RM_POLICY_RECLAIM_CONTEXT@@@Z @ 0x180033DE4
 * Callers:
 *     RmpPolicyGenerateReclaimListForCommit @ 0x180034060 (RmpPolicyGenerateReclaimListForCommit.c)
 * Callees:
 *     RmpEmPriorityCompare @ 0x180014E6C (RmpEmPriorityCompare.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     ?RmpPolicyGetActiveSessionCount@@YAKPEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x180033D4C (-RmpPolicyGetActiveSessionCount@@YAKPEAU_RM_POLICY_WORK_BUFFER@@@Z.c)
 */

__int64 __fastcall RmpPolicyReclaimContextInitialize(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, __int64 a5)
{
  int v9; // ebx
  unsigned int v10; // r8d
  __int64 result; // rax
  ULONG ActiveSessionCount; // eax
  int v13; // r10d
  unsigned __int64 v14; // rbp
  int *v15; // r9
  __int64 v16; // r9
  __int64 v17; // r11

  memset_0(*(void **)(a2 + 8), 0, 24LL * *(unsigned int *)(a2 + 32));
  v9 = 1;
  if ( a4 == 1 )
  {
    v10 = 0;
  }
  else
  {
    ActiveSessionCount = RmpPolicyGetActiveSessionCount((struct _RTL_BITMAP *)a2);
    v10 = -1;
    if ( 5 * (unsigned __int64)ActiveSessionCount <= 0xFFFFFFFF )
      v10 = 5 * ActiveSessionCount;
    v13 = 0;
    v14 = 0LL;
    if ( *(_DWORD *)(a2 + 36) )
    {
      v15 = (int *)(*(_QWORD *)a2 + 56LL);
      do
      {
        v14 += *((_QWORD *)v15 - 2);
        if ( (int)RmpEmPriorityCompare(*v15, *(_DWORD *)(a1 + 1424)) < 0 && *(char *)(*(_QWORD *)(v16 - 8) + 666LL) < 0 )
          ++v13;
        v15 = (int *)(v16 + 64);
      }
      while ( v17 != 1 );
    }
    if ( v10 < *(_DWORD *)(a1 + 1408) && v13 )
    {
      v9 = 0;
      goto LABEL_4;
    }
    if ( v14 >= a3 )
    {
      a4 = 0;
      goto LABEL_4;
    }
  }
  v9 = 2;
LABEL_4:
  result = a5;
  *(_QWORD *)(a5 + 8) = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_DWORD *)(a5 + 8) = a4;
  *(_DWORD *)(a5 + 12) = v9;
  *(_QWORD *)a5 = a2;
  *(_DWORD *)(a5 + 16) = v10;
  return result;
}
