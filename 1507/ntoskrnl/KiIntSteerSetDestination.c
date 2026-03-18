/*
 * XREFs of KiIntSteerSetDestination @ 0x1400EB378
 * Callers:
 *     KiIntSteerDistributeInterrupts @ 0x1400EA110 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerConnect @ 0x1401558E8 (KiIntSteerConnect.c)
 * Callees:
 *     KiIntSteerVerifyDestination @ 0x1400EB3E0 (KiIntSteerVerifyDestination.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall KiIntSteerSetDestination(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  ULONG_PTR BugCheckParameter4; // rdx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 result; // rax

  if ( (int)KiIntSteerVerifyDestination(BugCheckParameter3, a2, a3, a2) < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x101uLL, BugCheckParameter3, BugCheckParameter4);
  v5 = *(_DWORD *)(BugCheckParameter3 + 120);
  if ( ((v5 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( v5 == 2 )
    {
      v6 = *(_QWORD *)(BugCheckParameter3 + 192);
      *(_WORD *)(v6 + 8) = *(_WORD *)(BugCheckParameter4 + 8);
      *(_QWORD *)v6 = *(_QWORD *)BugCheckParameter4;
      return 0LL;
    }
    LODWORD(result) = -1073741637;
LABEL_10:
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x102uLL, BugCheckParameter3, (int)result);
  }
  result = off_140321A28();
  if ( (int)result < 0 )
    goto LABEL_10;
  return result;
}
