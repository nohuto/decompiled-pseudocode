/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x14045DC2C
 * Callers:
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObDereferenceObjectEx @ 0x140074EFC (ObDereferenceObjectEx.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     ExMapHandleToPointer @ 0x1404F0EA4 (ExMapHandleToPointer.c)
 */

__int64 __fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  _QWORD *v5; // rax
  int v6; // edi
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v5 = (_QWORD *)ExMapHandleToPointer(PspCidTable, a2);
  v6 = (unsigned __int16)(*v5 >> 1);
  *v5 &= 0xFFFFFFFFFFFE0001uLL;
  ExUnlockHandleTableEntry(PspCidTable, v5);
  result = KiLeaveGuardedRegionUnsafe(a1);
  if ( v6 )
    return ObDereferenceObjectEx(a3, v6);
  return result;
}
