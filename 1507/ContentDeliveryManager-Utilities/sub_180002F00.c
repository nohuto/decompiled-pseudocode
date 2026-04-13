/*
 * XREFs of sub_180002F00 @ 0x180002F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020F04 @ 0x180020F04 (sub_180020F04.c)
 */

__int64 __fastcall sub_180002F00(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v5; // zf
  __int64 (__fastcall ***v6)(); // rax

  v5 = sub_180020F04(a3) == 0;
  *(_DWORD *)a2 = a3;
  v6 = (__int64 (__fastcall ***)())&off_18003A108;
  if ( v5 )
    v6 = off_18003A0F0;
  *(_QWORD *)(a2 + 8) = v6;
  return a2;
}
