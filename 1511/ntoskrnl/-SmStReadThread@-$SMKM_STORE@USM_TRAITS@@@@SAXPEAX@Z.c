/*
 * XREFs of ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7294
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1400F6FBC (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1400F744C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     SmFpFree @ 0x14010D4C0 (SmFpFree.c)
 *     SmFpAllocate @ 0x14010E714 (SmFpAllocate.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1401104A0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x1401105D4 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStReadThread(__int64 a1, __int64 a2, __int64 a3)
{
  _SLIST_HEADER *v3; // r15
  __int64 v5; // rbp
  __int64 Context; // r14
  NTSTATUS v7; // eax
  _SLIST_HEADER *v8; // rdi
  KIRQL v9; // al
  __int64 *v10; // rdx
  __int64 *Alignment; // rsi
  __int64 v12; // rbx
  unsigned int Issue; // eax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_SLIST_HEADER **)a1;
  v5 = *(_QWORD *)a1 + 4936LL;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12LL, a3);
  Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(v3);
  *(_DWORD *)(a1 + 32) = Context == 0 ? 0xC000009A : 0;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( Context )
  {
    Object[0] = (char *)&v3[310].HeaderX64 + 8;
    Object[1] = &v3[309];
    do
    {
      while ( 1 )
      {
        v7 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
        if ( v7 )
          break;
        KeResetEvent((PRKEVENT)Object[0]);
        v8 = v3 + 312;
        while ( 1 )
        {
          v9 = KeAcquireSpinLockRaiseToDpc(&v3[313].Alignment);
          v10 = *(__int64 **)(v5 + 64);
          if ( v10 == (__int64 *)v8 )
          {
            Alignment = 0LL;
          }
          else
          {
            Alignment = (__int64 *)v8->Alignment;
            v8->Alignment = *(_QWORD *)v8->Alignment & 0xFFFFFFFFFFFFFFF8uLL;
            if ( Alignment == v10 )
            {
              v8->Alignment = 0LL;
              *(_QWORD *)(v5 + 64) = v5 + 56;
            }
            else
            {
              *v10 = *v10 & 7 | (8 * ((unsigned __int64)*v10 >> 3) - 8);
            }
          }
          KeReleaseSpinLock(&v3[313].Alignment, v9);
          if ( !Alignment )
            break;
          v12 = SmFpAllocate(&dword_1403052B8, 1);
          Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(v3, Alignment, Context);
          SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(v3, Alignment, Issue);
          SmFpFree(&dword_1403052B8, 3LL, (char *)&v3[308].HeaderX64 + 8, v12);
        }
      }
    }
    while ( v7 != 1 );
  }
  if ( Context )
    ST_STORE<SM_TRAITS>::StReleaseReadContext(v3, Context);
}
