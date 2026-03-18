/*
 * XREFs of MiCapturePfnVm @ 0x140227228
 * Callers:
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14004FCE0 (ObReferenceObjectSafeWithTag.c)
 *     MiAttachToOwningSession @ 0x1400FD2E0 (MiAttachToOwningSession.c)
 *     MiGetTopLevelPfn @ 0x1400FD760 (MiGetTopLevelPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiCombineCandidate @ 0x140227894 (MiCombineCandidate.c)
 */

signed __int32 *__fastcall MiCapturePfnVm(__int64 *a1, __int64 a2, _QWORD *a3, unsigned __int64 *a4, int *a5)
{
  __int64 v5; // r12
  signed __int32 *v6; // rdi
  unsigned __int8 CurrentIrql; // r13
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // ecx
  __int64 *TopLevelPfn; // rax
  __int64 *v16; // r14
  PEPROCESS v17; // rbp
  signed __int32 *v18; // rbx
  ULONG_PTR v19; // rax

  v5 = *a1;
  v6 = 0LL;
  *a3 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v12 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
    while ( (*(_QWORD *)(a2 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) );
  }
  v13 = MiCombineCandidate(a1, a2);
  if ( v13 )
  {
    v14 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    *a4 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *a5 = v14;
    if ( v13 == 1 )
    {
      TopLevelPfn = (__int64 *)MiGetTopLevelPfn(a2, 0LL);
      v16 = TopLevelPfn;
      v17 = (PEPROCESS)*TopLevelPfn;
      v18 = (signed __int32 *)(*TopLevelPfn + 1272);
      if ( (PEPROCESS)*TopLevelPfn == PsInitialSystemProcess && *(_DWORD *)(v5 + 1048) )
        v18 = 0LL;
      if ( ObReferenceObjectSafeWithTag(*TopLevelPfn) )
        *a3 = v17;
      else
        v18 = 0LL;
      if ( v16 != (__int64 *)a2 )
        _InterlockedAnd64(v16 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( v13 == 2 )
    {
      v18 = dword_14034FE40;
    }
    else
    {
      v19 = MiAttachToOwningSession(a2, 0x11u);
      if ( v19 )
      {
        v18 = (signed __int32 *)(*(_QWORD *)(v19 + 1024) + 2968LL);
        *a3 = v19;
      }
      else
      {
        v18 = 0LL;
      }
    }
    v6 = v18;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v6;
}
