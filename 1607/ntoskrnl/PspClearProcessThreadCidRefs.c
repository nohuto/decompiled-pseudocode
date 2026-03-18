/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x14045ED5C
 * Callers:
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     ObDereferenceObjectEx @ 0x140074E7C (ObDereferenceObjectEx.c)
 *     ExUnlockHandleTableEntry @ 0x14045EDD4 (ExUnlockHandleTableEntry.c)
 *     ExMapHandleToPointer @ 0x14050DF14 (ExMapHandleToPointer.c)
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
