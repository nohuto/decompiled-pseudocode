/*
 * XREFs of HvpReleaseCellPaged @ 0x14043EC00
 * Callers:
 *     <none>
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall HvpReleaseCellPaged(ULONG_PTR BugCheckParameter2, unsigned int *a2)
{
  ULONG_PTR v2; // r9
  __int64 v4; // rax
  int v5; // r8d
  __int64 v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdx

  v2 = *a2;
  v4 = *a2 >> 31;
  v5 = (_DWORD)v4 << 31;
  v6 = 632 * v4;
  if ( (unsigned int)(v2 + v5) >= *(_DWORD *)(v6 + BugCheckParameter2 + 1400)
    || (v7 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(*(_QWORD *)(v6 + BugCheckParameter2 + 1408)
                                                  + 8LL * (((unsigned int)v2 >> 21) & 0x3FF))
                                      + 40LL * (((unsigned int)v2 >> 12) & 0x1FF))) == 0LL )
  {
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v2, 0x285uLL);
  }
  HvpMapEntryReleaseBinAddress(5LL * (((unsigned int)v2 >> 12) & 0x1FF), v7, (_WORD *)a2 + 2);
  return HvpGetCellContextReinitialize((__int64)a2);
}
