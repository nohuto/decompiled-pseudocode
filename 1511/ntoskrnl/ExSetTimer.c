/*
 * XREFs of ExSetTimer @ 0x1400345B0
 * Callers:
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, signed __int64 a2, signed __int64 a3, ULONG_PTR a4)
{
  ULONG_PTR v5[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 > 0 && (*(_BYTE *)(BugCheckParameter1 + 129) & 4) != 0 )
  {
    BugCheckParameter3 = a2;
    KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&BugCheckParameter3, 0LL);
  }
  if ( a3 < 0 )
  {
    v5[0] = a3;
    KeBugCheckEx(0xC7u, 9uLL, 4uLL, (ULONG_PTR)v5, 0LL);
  }
  if ( a4 && (*(_DWORD *)a4 || *(__int64 *)(a4 + 8) < -1) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, a4, 0LL);
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}
