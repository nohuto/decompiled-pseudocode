/*
 * XREFs of SmWdWritesApcRoutine @ 0x140258BC0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ?SmWdCompleteWorkItems@@YAXPEAU_PF_QUEUE@@PEAXJK@Z @ 0x1402570EC (-SmWdCompleteWorkItems@@YAXPEAU_PF_QUEUE@@PEAXJK@Z.c)
 *     ?SmWdRemoveWorkItems@@YAXPEAU_SMKM_STORE_QUEUE@@PEAU_PF_QUEUE@@K@Z @ 0x140257160 (-SmWdRemoveWorkItems@@YAXPEAU_SMKM_STORE_QUEUE@@PEAU_PF_QUEUE@@K@Z.c)
 */

void __fastcall SmWdWritesApcRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 **a4)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rtt
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v7[1] = v7;
  v7[0] = 0LL;
  v4 = *a4;
  v5 = **a4;
  SmWdRemoveWorkItems((struct _SMKM_STORE_QUEUE *)(v5 + 4504), (struct _PF_QUEUE *)v7, 0);
  SmWdCompleteWorkItems((__int64)v7, v5, 0xC0000120);
  _InterlockedExchange((volatile __int32 *)v4 + 40, 0);
  _m_prefetchw(v4 + 2);
  v6 = v4[2] & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 != _InterlockedCompareExchange64(v4 + 2, v6 - 2, v6) )
    ExfReleaseRundownProtection((PEX_RUNDOWN_REF)v4 + 2);
}
