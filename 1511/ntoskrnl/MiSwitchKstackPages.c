/*
 * XREFs of MiSwitchKstackPages @ 0x1400D85D0
 * Callers:
 *     MiJumpStackTarget @ 0x1400D82EC (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 * Callees:
 *     MiCopyPfnEntry @ 0x140071D80 (MiCopyPfnEntry.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiSwitchKstackPages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  MiLockNestedPageAtDpcInline(a1, a2, a3);
  MiCopyPfnEntry(a1, a2);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
