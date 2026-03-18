/*
 * XREFs of MiRemoveWsle @ 0x140046F10
 * Callers:
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsle @ 0x1400E22C0 (MiTerminateWsle.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x1400FDEF0 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140047070 (MiGetSharedWorkingSetList.c)
 *     MiUpdateWsleHash @ 0x140048D80 (MiUpdateWsleHash.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MiLogRemoveWsleEvent @ 0x1401E29D4 (MiLogRemoveWsleEvent.c)
 */

__int64 __fastcall MiRemoveWsle(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR SharedWorkingSetList; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // rsi
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rcx

  SharedWorkingSetList = MiGetSharedWorkingSetList(a2);
  v6 = SharedWorkingSetList;
  if ( BugCheckParameter3 > *(_QWORD *)(SharedWorkingSetList + 24) )
    KeBugCheckEx(0x1Au, 0x41785uLL, SharedWorkingSetList, BugCheckParameter3, 0LL);
  BugCheckParameter4 = *(_QWORD *)(*(_QWORD *)(SharedWorkingSetList + 80)
                                 + BugCheckParameter3 * *(unsigned int *)(SharedWorkingSetList + 32));
  if ( (BugCheckParameter4 & 1) == 0 )
    KeBugCheckEx(0x1Au, 0x5010uLL, SharedWorkingSetList, BugCheckParameter3, BugCheckParameter4);
  if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
    v8 = BugCheckParameter4 | 0xFFFF000000000000uLL;
  else
    v8 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
  v9 = v8 & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_BYTE *)(v5 + 184) & 7) == 4 )
  {
    if ( PsNtosImageBase && (v9 < PsNtosImageEnd && v9 >= PsNtosImageBase || v9 < PsHalImageEnd && v9 >= PsHalImageBase) )
    {
      LODWORD(xmmword_140326868) = xmmword_140326868 - 1;
    }
    else if ( v9 >= qword_140327FF0 && v9 < qword_140327FF0 + 0x8000000000LL )
    {
      --DWORD1(xmmword_140326868);
    }
  }
  if ( (BugCheckParameter4 & 0xC) == 4 )
    MiUpdateWsleHash(v9, BugCheckParameter3, a2, 1LL);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
  {
    if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
      v11 = BugCheckParameter4 | 0xFFFF000000000000uLL;
    else
      v11 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
    MiLogRemoveWsleEvent(v11, *(_BYTE *)(a2 + 184) & 7);
  }
  result = *(_QWORD *)(v6 + 80);
  *(_QWORD *)(BugCheckParameter3 * *(unsigned int *)(v6 + 32) + result) = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL;
  return result;
}
