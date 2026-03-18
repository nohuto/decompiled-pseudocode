/*
 * XREFs of MiCapturePfnVm @ 0x14012896C
 * Callers:
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     MiAttachToOwningSession @ 0x1400D55A4 (MiAttachToOwningSession.c)
 *     MiGetTopLevelPfn @ 0x1400D56E0 (MiGetTopLevelPfn.c)
 *     MiCombineCandidate @ 0x14012A1D0 (MiCombineCandidate.c)
 */

LONG *__fastcall MiCapturePfnVm(__int64 *a1, __int64 a2, PEPROCESS *a3, unsigned __int64 *a4, int *a5)
{
  __int64 v5; // r12
  LONG *v7; // rdi
  unsigned __int8 v11; // r13
  int v12; // ecx
  __int64 *TopLevelPfn; // rax
  __int64 *v14; // r14
  PEPROCESS v15; // rbp
  LONG *v16; // rbx
  struct _KPROCESS *v18; // rax

  v5 = *a1;
  v7 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  *a5 = 24;
  v11 = MiLockPageInline(a2);
  v12 = MiCombineCandidate(a1, a2);
  if ( v12 )
  {
    *a4 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *a5 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    if ( v12 == 1 )
    {
      TopLevelPfn = (__int64 *)MiGetTopLevelPfn(a2, 0LL);
      v14 = TopLevelPfn;
      v15 = (PEPROCESS)*TopLevelPfn;
      v16 = (LONG *)(*TopLevelPfn + 1280);
      if ( (PEPROCESS)*TopLevelPfn == PsInitialSystemProcess && *(_DWORD *)(v5 + 1080) )
        v16 = 0LL;
      if ( ObReferenceObjectSafeWithTag(*TopLevelPfn) )
        *a3 = v15;
      else
        v16 = 0LL;
      if ( v14 != (__int64 *)a2 )
        _InterlockedAnd64(v14 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( v12 == 2 )
    {
      v16 = &dword_1402FF980;
    }
    else
    {
      v18 = (struct _KPROCESS *)MiAttachToOwningSession(a2, 0x11u);
      if ( v18 )
      {
        v16 = (LONG *)(v18[1].ActiveProcessors.Bitmap[2] + 2968);
        *a3 = v18;
      }
      else
      {
        v16 = 0LL;
      }
    }
    v7 = v16;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v11);
  return v7;
}
