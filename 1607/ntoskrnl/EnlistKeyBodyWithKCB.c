/*
 * XREFs of EnlistKeyBodyWithKCB @ 0x140491474
 * Callers:
 *     CmpCreateKeyBody @ 0x1404912B8 (CmpCreateKeyBody.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x1407AE4D4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 */

void __fastcall EnlistKeyBodyWithKCB(signed __int64 a1, char a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 **v7; // rcx

  v2 = (__int64 *)(a1 + 32);
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  v5 = 0LL;
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * v5 + 128), a1, 0LL) )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 4 )
    {
      if ( (a2 & 1) != 0 )
        CmpUnlockKcb(*(char **)(a1 + 8));
      if ( (a2 & 2) == 0 )
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
      v6 = *(_QWORD *)(a1 + 8) + 112LL;
      v7 = *(__int64 ***)(*(_QWORD *)(a1 + 8) + 120LL);
      if ( *v7 != (__int64 *)v6 )
        __fastfail(3u);
      *v2 = v6;
      v2[1] = (__int64)v7;
      *v7 = v2;
      *(_QWORD *)(v6 + 8) = v2;
      if ( (a2 & 3) == 0 )
        CmpUnlockKcb(*(char **)(a1 + 8));
      return;
    }
  }
}
