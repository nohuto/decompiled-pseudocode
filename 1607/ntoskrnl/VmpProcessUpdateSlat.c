/*
 * XREFs of VmpProcessUpdateSlat @ 0x140224370
 * Callers:
 *     VmAccessFault @ 0x140223B40 (VmAccessFault.c)
 * Callees:
 *     HvlMapGpaPages @ 0x14023CE54 (HvlMapGpaPages.c)
 */

__int64 __fastcall VmpProcessUpdateSlat(__int64 a1, int a2, __int64 a3, char a4)
{
  int v4; // r8d
  char v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  if ( (a4 & 2) != 0 )
    v4 = 15;
  else
    v4 = (a4 & 5) != 0 ? 13 : 1024;
  HvlMapGpaPages(*(_QWORD *)(a1 + 72), a2, v4, 1, (__int64)&v7, (__int64)&v6);
  return 0LL;
}
