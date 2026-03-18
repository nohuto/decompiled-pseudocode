/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DAD90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1400DAF78 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1400DB838 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     SmFpAllocate @ 0x14013FA1C (SmFpAllocate.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140140244 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1401402C0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

LONG __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v3; // rbp
  __int64 Context; // r15
  LONG result; // eax
  unsigned __int64 *v6; // rdi
  volatile signed __int32 *v7; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 *v9; // rdx
  __int64 *v10; // r14
  __int64 v11; // rbx
  unsigned int Issue; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v1 = *a1;
  v3 = *a1 + 4936;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 0xCu);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(v1);
  *((_DWORD *)a1 + 8) = Context == 0 ? 0xC000009A : 0;
  result = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( Context )
  {
    Object[0] = (PVOID)(v1 + 4968);
    Object[1] = (PVOID)(v1 + 4944);
    do
    {
      while ( 1 )
      {
        result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( result )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v6 = (unsigned __int64 *)(v1 + 4992);
        v7 = (volatile signed __int32 *)(v1 + 5008);
        while ( 1 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(v3 + 72);
          }
          else if ( _interlockedbittestandset64(v7, 0LL) )
          {
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v3 + 72));
          }
          v9 = *(__int64 **)(v3 + 64);
          if ( v9 == (__int64 *)v6 )
          {
            v10 = 0LL;
          }
          else
          {
            v10 = (__int64 *)*v6;
            *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v10 == v9 )
            {
              *v6 = 0LL;
              *(_QWORD *)(v3 + 64) = v3 + 56;
            }
            else
            {
              *v9 = *v9 & 7 | (8 * ((unsigned __int64)*v9 >> 3) - 8);
            }
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v3 + 72, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
          __writecr8(CurrentIrql);
          if ( !v10 )
            break;
          v11 = SmFpAllocate(&unk_140353020, 3LL, v1 + 4936);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(v1, v10, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(v1, v10, Issue);
          SmFpFree(&unk_140353020, 3LL, v1 + 4936, v11);
        }
      }
    }
    while ( result != 1 );
  }
  if ( Context )
    return ST_STORE<SM_TRAITS>::StReleaseReadContext(v1, Context);
  return result;
}
