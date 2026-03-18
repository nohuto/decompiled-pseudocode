/*
 * XREFs of KiIsThreadRankNonZero @ 0x140014D90
 * Callers:
 *     KeQueryEffectiveBasePriorityThread @ 0x140014CB8 (KeQueryEffectiveBasePriorityThread.c)
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiSearchForNewThread @ 0x140082AC0 (KiSearchForNewThread.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsThreadRankNonZero(__int64 a1, struct _KPRCB *a2)
{
  int v3; // r8d
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return 0;
  v3 = 0;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    v7 = CurrentPrcb->ScbOffset + v6;
    if ( v7 )
    {
      if ( a2 )
      {
        if ( *(char *)(a1 + 195) < 16 && (*(_DWORD *)(a1 + 120) & 0x100) == 0 )
        {
          v8 = v7;
          do
          {
            if ( (*(_BYTE *)(v8 + 112) & 2) != 0 )
            {
              v3 = -1;
              goto LABEL_15;
            }
            v8 = *(_QWORD *)(v8 + 392);
          }
          while ( v8 );
          do
          {
            v3 = *(_DWORD *)(v7 + 116);
            if ( v3 )
              break;
            v7 = *(_QWORD *)(v7 + 392);
          }
          while ( v7 );
        }
      }
      else
      {
        v3 = (*(unsigned __int8 *)(v7 + 112) >> 3) & 1;
      }
    }
  }
LABEL_15:
  if ( CurrentIrql < 2u )
    __writecr8(CurrentIrql);
  return v3 != 0;
}
