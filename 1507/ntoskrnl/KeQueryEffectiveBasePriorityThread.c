/*
 * XREFs of KeQueryEffectiveBasePriorityThread @ 0x140011858
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1400117B0 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryEffectiveBasePriorityThread(__int64 a1)
{
  int v2; // r8d
  unsigned __int8 CurrentIrql; // r9
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return (unsigned int)*(char *)(a1 + 563);
  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    v6 = CurrentPrcb->ScbOffset + v5;
    if ( v6 )
      v2 = (*(unsigned __int8 *)(v6 + 112) >> 3) & 1;
  }
  if ( CurrentIrql < 2u )
    __writecr8(CurrentIrql);
  result = 1LL;
  if ( !v2 )
    return (unsigned int)*(char *)(a1 + 563);
  return result;
}
