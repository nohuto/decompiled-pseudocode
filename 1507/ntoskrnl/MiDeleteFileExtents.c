/*
 * XREFs of MiDeleteFileExtents @ 0x140230578
 * Callers:
 *     MiDeleteEmptySubsections @ 0x140081CCC (MiDeleteEmptySubsections.c)
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MiDeleteSubsection @ 0x14012DB70 (MiDeleteSubsection.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiInitializeFileExtents @ 0x140230AFC (MiInitializeFileExtents.c)
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiReturnFsDirectPages @ 0x1406AA504 (MiReturnFsDirectPages.c)
 */

void __fastcall MiDeleteFileExtents(char *P, int a2, unsigned int a3, char a4)
{
  __int64 v4; // rdi
  __int64 v5; // r15
  PVOID v6; // r13
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned int v12; // ebp
  __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned __int8 v14; // [rsp+28h] [rbp-30h]

  v4 = 0LL;
  v5 = -1LL;
  v6 = P;
  v8 = (__int64 *)&P[8 * a2 + 8];
  if ( !a3 )
    goto LABEL_24;
  v13 = a3;
  do
  {
    v9 = *v8;
    if ( *v8 != -1 )
    {
      if ( (a4 & 1) != 0 )
      {
        if ( v9 < 0 )
          v9 &= ~0x8000000000000000uLL;
        else
          v9 = -1LL;
      }
      if ( v9 != -1 )
      {
        v10 = 48 * v9 - 0x58000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        v14 = CurrentIrql;
        __writecr8(2uLL);
        v12 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v12);
          }
          while ( (*(_QWORD *)(v10 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
          CurrentIrql = v14;
        }
        *v8 = -1LL;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( !v4 )
        {
          v5 = v9;
LABEL_28:
          ++v4;
          goto LABEL_21;
        }
        if ( v5 + v4 == v9 )
          goto LABEL_28;
      }
    }
    if ( v4 )
    {
      MiReturnFsDirectPages(v5, v4);
      v4 = 0LL;
      v5 = -1LL;
    }
LABEL_21:
    ++v8;
    --v13;
  }
  while ( v13 );
  v6 = P;
  if ( v4 )
    MiReturnFsDirectPages(v5, v4);
LABEL_24:
  if ( (a4 & 2) != 0 )
    ExFreePoolWithTag(v6, 0);
}
