/*
 * XREFs of SmWdWritesApcRoutine @ 0x140209994
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ?SmWdCompleteWorkItems@@YAXPEAU_PF_QUEUE@@PEAXJK@Z @ 0x140207E90 (-SmWdCompleteWorkItems@@YAXPEAU_PF_QUEUE@@PEAXJK@Z.c)
 *     ?SmWdRemoveWorkItems@@YAXPEAU_SMKM_STORE_QUEUE@@PEAU_PF_QUEUE@@K@Z @ 0x140207F04 (-SmWdRemoveWorkItems@@YAXPEAU_SMKM_STORE_QUEUE@@PEAU_PF_QUEUE@@K@Z.c)
 */

void __fastcall SmWdWritesApcRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 **a4)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v6[1] = v6;
  v6[0] = 0LL;
  v4 = *a4;
  v5 = **a4;
  SmWdRemoveWorkItems((KSPIN_LOCK *)(v5 + 4504), (struct _PF_QUEUE *)v6, 0);
  SmWdCompleteWorkItems((__int64)v6, v5, 0xC0000120);
  _InterlockedExchange((volatile __int32 *)v4 + 40, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v4 + 2);
}
