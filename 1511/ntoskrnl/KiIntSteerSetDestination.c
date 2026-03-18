/*
 * XREFs of KiIntSteerSetDestination @ 0x1400E8374
 * Callers:
 *     KiIntSteerDistributeInterrupts @ 0x140076D30 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerConnect @ 0x140122B3C (KiIntSteerConnect.c)
 * Callees:
 *     KiIntSteerVerifyDestination @ 0x1400E83DC (KiIntSteerVerifyDestination.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall KiIntSteerSetDestination(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  ULONG_PTR BugCheckParameter4; // rdx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 result; // rax

  if ( (int)KiIntSteerVerifyDestination(BugCheckParameter3, a2, a3, a2) < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x101uLL, BugCheckParameter3, BugCheckParameter4);
  v5 = *(_DWORD *)(BugCheckParameter3 + 128);
  if ( ((v5 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( v5 == 2 )
    {
      v6 = *(_QWORD *)(BugCheckParameter3 + 200);
      *(_WORD *)(v6 + 8) = *(_WORD *)(BugCheckParameter4 + 8);
      *(_QWORD *)v6 = *(_QWORD *)BugCheckParameter4;
      return 0LL;
    }
    LODWORD(result) = -1073741637;
LABEL_10:
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x102uLL, BugCheckParameter3, (int)result);
  }
  result = off_1402D28D8();
  if ( (int)result < 0 )
    goto LABEL_10;
  return result;
}
