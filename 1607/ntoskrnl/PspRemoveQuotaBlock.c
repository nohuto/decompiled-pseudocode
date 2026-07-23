/*
 * XREFs of PspRemoveQuotaBlock @ 0x14067D044
 * Callers:
 *     ObpFreeObject @ 0x14041A6C0 (ObpFreeObject.c)
 *     PspDereferenceQuotaBlock @ 0x14051E418 (PspDereferenceQuotaBlock.c)
 * Callees:
 *     PspLockQuotaListExclusive @ 0x14014CD74 (PspLockQuotaListExclusive.c)
 *     PspHashKeyValue @ 0x1404BB140 (PspHashKeyValue.c)
 */

__int64 __fastcall PspRemoveQuotaBlock(__int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // esi
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v6; // r14
  __int64 v7; // rcx
  _QWORD *v8; // rax

  v1 = (_QWORD *)(a1 + 520);
  v2 = 1;
  if ( *(_QWORD *)(a1 + 520) == 1LL )
  {
    v4 = 0LL;
  }
  else
  {
    v2 = 0;
    v4 = a1 + 576;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = (volatile signed __int64 *)(PspQuotaBlockTable + 24LL * (unsigned int)PspHashKeyValue(v4, 0LL));
  PspLockQuotaListExclusive((__int64)CurrentThread, (ULONG_PTR)v6);
  if ( v2 )
  {
    if ( a1 == PspDefaultQuotaBlock )
      PspDefaultQuotaBlock = 0LL;
  }
  else if ( *v1 )
  {
    v7 = *v1;
    v8 = (_QWORD *)v1[1];
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v8 != v1 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
  }
  return PspUnlockQuotaListExclusive((__int64)CurrentThread, v6);
}
