/*
 * XREFs of PsQueryThreadStartAddress @ 0x14024381C
 * Callers:
 *     sub_1407B5998 @ 0x1407B5998 (sub_1407B5998.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryThreadStartAddress(__int64 a1, int a2)
{
  __int64 v2; // rdx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 || !a2 )
    return *(_QWORD *)(a1 + 1664);
  if ( (*(_BYTE *)(a1 + 1732) & 8) != 0 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 1536);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  if ( (*(_BYTE *)(a1 + 1732) & 8) != 0 )
    return 0LL;
  return v2;
}
