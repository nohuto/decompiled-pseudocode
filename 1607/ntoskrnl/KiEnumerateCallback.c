/*
 * XREFs of KiEnumerateCallback @ 0x1400B3964
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 */

__int64 __fastcall KiEnumerateCallback(int a1, struct _EX_RUNDOWN_REF **a2, unsigned __int8 *a3, unsigned __int64 *a4)
{
  struct _EX_RUNDOWN_REF *v6; // rdx
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v9; // rcx
  PVOID *Count; // rdx
  unsigned __int8 CurrentIrql; // al

  if ( a1 )
  {
    if ( a1 != 1 )
      return 0LL;
    v6 = *a2;
    if ( v6 )
    {
      ExDereferenceCallBackBlock(&KiBoundsCallback, v6);
      *a2 = 0LL;
      return 0LL;
    }
    v7 = ExReferenceCallBackBlock(&KiBoundsCallback);
    if ( !v7 )
      return 0LL;
    *a2 = v7;
    *a4 = v7[1].Count;
  }
  else
  {
    v9 = *a2;
    Count = &KiNmiCallbackListHead;
    if ( v9 == (struct _EX_RUNDOWN_REF *)&KiNmiCallbackListHead
      || !v9
      && (CurrentIrql = KeGetCurrentIrql(),
          __writecr8(2uLL),
          *a3 = CurrentIrql,
          (v9 = (struct _EX_RUNDOWN_REF *)KiNmiCallbackListHead) == 0LL) )
    {
      __writecr8(*a3);
      return 0LL;
    }
    *a4 = v9[1].Count;
    if ( v9->Count )
      Count = (PVOID *)v9->Count;
    *a2 = (struct _EX_RUNDOWN_REF *)Count;
  }
  return 1LL;
}
