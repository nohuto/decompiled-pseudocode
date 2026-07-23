/*
 * XREFs of MiCapturePfnVm @ 0x1401F7B64
 * Callers:
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     MiGetTopLevelPfn @ 0x1401086F0 (MiGetTopLevelPfn.c)
 *     MiAttachToOwningSession @ 0x14010A1DC (MiAttachToOwningSession.c)
 *     MiIsStoreProcess @ 0x14010AC04 (MiIsStoreProcess.c)
 *     MiCombineCandidate @ 0x1401F7CA4 (MiCombineCandidate.c)
 */

char *__fastcall MiCapturePfnVm(__int64 a1, __int64 a2, __int64 *a3, unsigned __int64 *a4, int *a5)
{
  char *v6; // rdi
  unsigned __int8 v10; // r12
  int v11; // ecx
  __int64 TopLevelPfn; // r14
  __int64 v13; // rbp
  char *AnyMultiplexedVm; // rbx
  _QWORD *v15; // rax

  v6 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  *a5 = 24;
  v10 = MiLockPageInline(a2);
  v11 = MiCombineCandidate(a1, a2);
  if ( v11 )
  {
    *a4 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    *a5 = (*(_DWORD *)(a2 + 16) >> 5) & 0x1F;
    if ( v11 == 1 )
    {
      TopLevelPfn = MiGetTopLevelPfn(a2, 0LL);
      v13 = *(_QWORD *)TopLevelPfn;
      AnyMultiplexedVm = (char *)(*(_QWORD *)TopLevelPfn + 1280LL);
      if ( MiIsStoreProcess(*(_QWORD *)TopLevelPfn) )
        AnyMultiplexedVm = 0LL;
      if ( ObReferenceObjectSafeWithTag(v13) )
        *a3 = v13;
      else
        AnyMultiplexedVm = 0LL;
      if ( TopLevelPfn != a2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( v11 == 2 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    }
    else
    {
      v15 = MiAttachToOwningSession(a2, 0x11u);
      if ( v15 )
      {
        AnyMultiplexedVm = (char *)(v15[128] + 3008LL);
        *a3 = (__int64)v15;
      }
      else
      {
        AnyMultiplexedVm = 0LL;
      }
    }
    v6 = AnyMultiplexedVm;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v10);
  return v6;
}
