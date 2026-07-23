/*
 * XREFs of MiRemoveWsle @ 0x1400AFB10
 * Callers:
 *     MiTerminateWsle @ 0x1400AE090 (MiTerminateWsle.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x140123B68 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiLogRemoveWsleEvent @ 0x140213CAC (MiLogRemoveWsleEvent.c)
 */

__int64 __fastcall MiRemoveWsle(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v6; // rcx
  ULONG_PTR v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rcx

  v2 = *(_QWORD *)(a2 + 184);
  if ( BugCheckParameter3 > *(_QWORD *)(v2 + 32) )
    KeBugCheckEx(0x1Au, 0x41785uLL, v2, BugCheckParameter3, 0LL);
  BugCheckParameter4 = *(_QWORD *)(*(_QWORD *)(v2 + 496) + BugCheckParameter3 * *(unsigned int *)(v2 + 64));
  if ( (BugCheckParameter4 & 1) == 0 )
    KeBugCheckEx(0x1Au, 0x5010uLL, v2, BugCheckParameter3, BugCheckParameter4);
  if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
    v6 = BugCheckParameter4 | 0xFFFF000000000000uLL;
  else
    v6 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
  v7 = v6 & 0xFFFFFFFFFFFFF000uLL;
  if ( (signed __int32 *)a2 == dword_14034FF40 )
  {
    if ( PsNtosImageBase
      && (v7 >= (unsigned __int64)PsNtosImageBase && v7 < PsNtosImageEnd
       || v7 >= (unsigned __int64)PsHalImageBase && v7 < PsHalImageEnd) )
    {
      LODWORD(xmmword_14034EA58) = xmmword_14034EA58 - 1;
    }
    else if ( v7 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
    {
      --DWORD1(xmmword_14034EA58);
    }
  }
  if ( (BugCheckParameter4 & 0xC) == 4 )
    MiUpdateWsleHash(v7, BugCheckParameter3, a2, 1u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
  {
    if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
      v9 = BugCheckParameter4 | 0xFFFF000000000000uLL;
    else
      v9 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
    MiLogRemoveWsleEvent(v9, *(_BYTE *)(a2 + 216) & 7);
  }
  result = *(_QWORD *)(v2 + 496);
  *(_QWORD *)(BugCheckParameter3 * *(unsigned int *)(v2 + 64) + result) = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL;
  return result;
}
