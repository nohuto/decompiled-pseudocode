/*
 * XREFs of MiCanStealKernelStack @ 0x1400D8D28
 * Callers:
 *     MiJumpStackTarget @ 0x1400D82EC (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 */

__int64 __fastcall MiCanStealKernelStack(__int64 a1)
{
  BOOL v1; // eax
  __int64 v2; // r9
  unsigned __int16 v3; // r10
  unsigned int v4; // ecx

  v1 = MI_IS_PFN((a1 + 0x58000000000LL) / 48);
  v4 = 0;
  if ( !v1
    || ((*(_QWORD *)(v2 + 40) >> 54) & 7) != 2
    || (MiFlags & 0x800) != 0 && (*(_QWORD *)v2 == -5LL || (*(_QWORD *)v2 & 1) == 0)
    || (*(_BYTE *)(v2 + 34) & 7) != 6 )
  {
    return 0LL;
  }
  LOBYTE(v4) = *(_WORD *)(v2 + 32) == v3;
  return v4;
}
