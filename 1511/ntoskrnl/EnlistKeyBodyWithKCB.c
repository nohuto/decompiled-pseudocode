/*
 * XREFs of EnlistKeyBodyWithKCB @ 0x1403E0248
 * Callers:
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x140745C60 (CmpCreateRegistryRoot.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1403F9950 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1403FE4F0 (CmpUnlockKcb.c)
 */

__int64 __fastcall EnlistKeyBodyWithKCB(signed __int64 a1, char a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 **v7; // rcx

  v2 = (__int64 *)(a1 + 32);
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  v5 = 0LL;
  while ( 1 )
  {
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * v5 + 136), a1, 0LL);
    if ( !result )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 4 )
    {
      if ( (a2 & 1) != 0 )
        CmpUnlockKcb(*(PVOID *)(a1 + 8));
      if ( (a2 & 2) == 0 )
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
      result = *(_QWORD *)(a1 + 8) + 120LL;
      v7 = *(__int64 ***)(*(_QWORD *)(a1 + 8) + 128LL);
      *v2 = result;
      v2[1] = (__int64)v7;
      if ( *v7 != (__int64 *)result )
        __fastfail(3u);
      *v7 = v2;
      *(_QWORD *)(result + 8) = v2;
      if ( (a2 & 3) == 0 )
        return CmpUnlockKcb(*(PVOID *)(a1 + 8));
      return result;
    }
  }
  return result;
}
