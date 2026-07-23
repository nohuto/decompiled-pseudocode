/*
 * XREFs of MiRemoveWsle @ 0x140046A90
 * Callers:
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsle @ 0x1400E0160 (MiTerminateWsle.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x1400FBC70 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiLogRemoveWsleEvent @ 0x1401E2800 (MiLogRemoveWsleEvent.c)
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
    if ( PsNtosImageBase
      && (v9 < PsNtosImageEnd && v9 >= (unsigned __int64)PsNtosImageBase
       || v9 < PsHalImageEnd && v9 >= (unsigned __int64)PsHalImageBase) )
    {
      LODWORD(xmmword_1403268A8) = xmmword_1403268A8 - 1;
    }
    else if ( v9 >= qword_140328030 && v9 < qword_140328030 + 0x8000000000LL )
    {
      --DWORD1(xmmword_1403268A8);
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
