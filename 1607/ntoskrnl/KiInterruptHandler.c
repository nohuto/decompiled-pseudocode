/*
 * XREFs of KiInterruptHandler @ 0x1401D3E80
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiInterruptHandler(ULONG_PTR BugCheckParameter1, __int64 a2, ULONG_PTR a3)
{
  ULONG v4; // ecx

  v4 = 61;
  if ( (*(_BYTE *)(BugCheckParameter1 + 4) & 0x66) != 0 )
    v4 = 60;
  KeBugCheckEx(v4, BugCheckParameter1, a3, 0LL, 0LL);
}
