/*
 * XREFs of MiRemoveWsle @ 0x1400B79C0
 * Callers:
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x14001C40C (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiTerminateWsle @ 0x1400B7650 (MiTerminateWsle.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 * Callees:
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiLogRemoveWsleEvent @ 0x1401D297C (MiLogRemoveWsleEvent.c)
 */

__int64 __fastcall MiRemoveWsle(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v7; // rcx
  ULONG_PTR v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rcx

  v3 = *(_QWORD *)(a2 + 184);
  if ( BugCheckParameter3 > *(_QWORD *)(v3 + 32) )
    KeBugCheckEx(0x1Au, 0x41785uLL, v3, BugCheckParameter3, 0LL);
  BugCheckParameter4 = *(_QWORD *)(*(_QWORD *)(v3 + 496) + BugCheckParameter3 * *(unsigned int *)(v3 + 64));
  if ( (BugCheckParameter4 & 1) == 0 )
    KeBugCheckEx(0x1Au, 0x5010uLL, v3, BugCheckParameter3, BugCheckParameter4);
  if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
    v7 = BugCheckParameter4 | 0xFFFF000000000000uLL;
  else
    v7 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
  v8 = v7 & 0xFFFFFFFFFFFFF000uLL;
  if ( (LONG *)a2 == &dword_1402FFA80 )
  {
    if ( PsNtosImageBase
      && (v8 >= (unsigned __int64)PsNtosImageBase && v8 < PsNtosImageEnd
       || v8 >= (unsigned __int64)PsHalImageBase && v8 < PsHalImageEnd) )
    {
      LODWORD(xmmword_1402FE598) = xmmword_1402FE598 - 1;
    }
    else if ( v8 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
    {
      --DWORD1(xmmword_1402FE598);
    }
  }
  if ( (BugCheckParameter4 & 0xC) == 4 )
    MiUpdateWsleHash(v8, BugCheckParameter3, a2, 1u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
  {
    if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
      v10 = BugCheckParameter4 | 0xFFFF000000000000uLL;
    else
      v10 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
    MiLogRemoveWsleEvent(v10, *(_BYTE *)(a2 + 216) & 7, a3);
  }
  result = *(_QWORD *)(v3 + 496);
  *(_QWORD *)(BugCheckParameter3 * *(unsigned int *)(v3 + 64) + result) = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL;
  return result;
}
