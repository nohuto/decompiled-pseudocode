/*
 * XREFs of PsPicoSystemCallDispatch @ 0x14068146C
 * Callers:
 *     KiSystemCall64 @ 0x14016F500 (KiSystemCall64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsPicoSystemCallDispatch(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  qword_1403013A8(&v3);
  return *(_QWORD *)(a1 + 48);
}
