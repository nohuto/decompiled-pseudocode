/*
 * XREFs of HvpGetCellFlat @ 0x140606950
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall HvpGetCellFlat(ULONG_PTR BugCheckParameter3, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rax

  if ( a2 == -1 )
    KeBugCheckEx(0x51u, 0x32uLL, 1uLL, BugCheckParameter3, 0xFFFFFFFFuLL);
  v3 = *(_QWORD *)(BugCheckParameter3 + 64);
  *a3 = a2;
  return a2 + 4100LL + v3;
}
