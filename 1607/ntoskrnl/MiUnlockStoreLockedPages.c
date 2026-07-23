/*
 * XREFs of MiUnlockStoreLockedPages @ 0x140122F8C
 * Callers:
 *     SmKmUnlockMdl @ 0x14011EF08 (SmKmUnlockMdl.c)
 *     MmStoreProbeAndLockPages @ 0x1401228E0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiWriteCompletePfn @ 0x14004E120 (MiWriteCompletePfn.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 */

void __fastcall MiUnlockStoreLockedPages(__int64 a1)
{
  _QWORD *v1; // rsi
  unsigned int v3; // ebx
  unsigned __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // r15
  unsigned __int64 v9; // r9
  struct _KEVENT *v10; // rcx

  v1 = (_QWORD *)(a1 + 48);
  v3 = 0;
  v4 = a1
     + 48
     + 8
     * ((*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12);
  do
  {
    if ( *v1 == -1LL )
      break;
    v5 = 48LL * *v1 - 0x58000000000LL;
    v8 = MiLockPageInline(v5);
    if ( (*(_BYTE *)(v5 + 34) & 0x10) != 0 )
      v3 |= 2u;
    else
      v3 &= ~2u;
    v9 = MiWriteCompletePfn(v5, v3, v6, v7);
    v10 = v9
        ? (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v5 + 40)) >> 8) & 0x3FF)
        : 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
    if ( v9 )
      MiReleasePageFileInfo(v10, v9, 0);
    ++v1;
  }
  while ( (unsigned __int64)v1 < v4 );
  *(_WORD *)(a1 + 10) &= ~2u;
}
