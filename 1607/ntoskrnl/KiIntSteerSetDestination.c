/*
 * XREFs of KiIntSteerSetDestination @ 0x1400A4728
 * Callers:
 *     KiIntSteerDistributeInterrupts @ 0x1400D4EB0 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerConnect @ 0x14012D8EC (KiIntSteerConnect.c)
 * Callees:
 *     KiIntSteerVerifyDestination @ 0x1400A47A0 (KiIntSteerVerifyDestination.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall KiIntSteerSetDestination(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR BugCheckParameter4; // rdx
  int v3; // ecx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( (int)KiIntSteerVerifyDestination() < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x101uLL, BugCheckParameter3, BugCheckParameter4);
  v3 = *(_DWORD *)(BugCheckParameter3 + 128);
  if ( ((v3 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( v3 == 2 )
    {
      v4 = *(_QWORD *)(BugCheckParameter3 + 200);
      *(_WORD *)(v4 + 8) = *(_WORD *)(BugCheckParameter4 + 8);
      *(_QWORD *)v4 = *(_QWORD *)BugCheckParameter4;
      return 0LL;
    }
    LODWORD(result) = -1073741637;
LABEL_10:
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x102uLL, BugCheckParameter3, (int)result);
  }
  result = off_1402F2578();
  if ( (int)result < 0 )
    goto LABEL_10;
  return result;
}
