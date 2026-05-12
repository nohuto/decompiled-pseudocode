/*
 * XREFs of RaidZeroUnit @ 0x1C000F344
 * Callers:
 *     RaidCreateUnit @ 0x1C000DEF0 (RaidCreateUnit.c)
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 *     RaCreateTagList @ 0x1C004C784 (RaCreateTagList.c)
 */

__int64 __fastcall RaidZeroUnit(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  memset(a1, 0, 0x940uLL);
  *a1 = 1;
  RaCreateTagList(a1 + 64);
  *((_QWORD *)a1 + 23) = 0LL;
  *((_BYTE *)a1 + 196) = 0;
  a1[46] = v2;
  a1[22] = RaidNullAddress;
  result = 134684677LL;
  a1[252] = 134684677;
  a1[272] = 134684677;
  a1[292] = 134684677;
  a1[312] = 134684677;
  a1[332] = 134684677;
  *(_QWORD *)(a1 + 47) = v2;
  a1[244] = 10;
  return result;
}
