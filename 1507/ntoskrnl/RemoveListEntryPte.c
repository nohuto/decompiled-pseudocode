/*
 * XREFs of RemoveListEntryPte @ 0x14006BBFC
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 *     MiRemoveSpecialPoolRange @ 0x14021F4BC (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x140225B3C (MiGetPteLink.c)
 */

__int64 __fastcall RemoveListEntryPte(unsigned __int64 a1, _QWORD *a2)
{
  __int64 PteLink; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax

  PteLink = MiGetPteLink(a2[1]);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = (_QWORD *)a1;
  if ( PteLink != (__int64)(((a1 >> 9) & 0x7FFFFFFFF8LL) - v5 - 0x98000000000LL) >> 3 )
    v6 = (_QWORD *)(v5 + 8 * PteLink);
  v7 = *a2;
  *v6 = *a2;
  if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v6, v7);
  v8 = MiGetPteLink(*a2);
  v9 = *(_QWORD *)(a1 + 16);
  if ( v8 != (__int64)(((a1 >> 9) & 0x7FFFFFFFF8LL) - v9 - 0x98000000000LL) >> 3 )
    a1 = v9 + 8 * v8;
  v10 = a2[1];
  result = a1 + 0x90482413008LL;
  *(_QWORD *)(a1 + 8) = v10;
  if ( a1 + 0x90482413008LL <= 0x7F8 )
    return MiWritePteShadow(a1 + 8, v10);
  return result;
}
