/*
 * XREFs of HvpGetCellPaged @ 0x14043EB30
 * Callers:
 *     <none>
 * Callees:
 *     HvpFaultCellWithClustering @ 0x14002CEC0 (HvpFaultCellWithClustering.c)
 *     HvpMapEntryGetBlockAddress @ 0x14002CF00 (HvpMapEntryGetBlockAddress.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall HvpGetCellPaged(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  if ( a2 == -1 )
    KeBugCheckEx(0x51u, 0x32uLL, 1uLL, BugCheckParameter3, 0xFFFFFFFFuLL);
  if ( HvShutdownComplete == 1 )
    return 0LL;
  HvpMapEntryGetBlockAddress(
    5 * (((unsigned __int64)a2 >> 12) & 0x1FF),
    (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(*(_QWORD *)(632 * ((unsigned __int64)a2 >> 31) + BugCheckParameter3 + 1408)
                                         + 8 * (((unsigned __int64)a2 >> 21) & 0x3FF))
                             + 40 * (((unsigned __int64)a2 >> 12) & 0x1FF)),
    (_WORD *)(a3 + 4));
  HvpFaultCellWithClustering();
  result = v6 + 4;
  *(_DWORD *)a3 = a2;
  return result;
}
