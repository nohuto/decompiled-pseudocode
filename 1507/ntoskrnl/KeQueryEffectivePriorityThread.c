/*
 * XREFs of KeQueryEffectivePriorityThread @ 0x140134C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryEffectivePriorityThread(__int64 a1)
{
  int v1; // edx
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r9

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return (unsigned int)*(char *)(a1 + 195);
  v1 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 1;
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    v6 = CurrentPrcb->ScbOffset + v5;
    if ( v6 )
      v1 = (*(unsigned __int8 *)(v6 + 112) >> 3) & 1;
  }
  if ( CurrentIrql < 2u )
    __writecr8(CurrentIrql);
  if ( !v1 )
    return (unsigned int)*(char *)(a1 + 195);
  return v4;
}
