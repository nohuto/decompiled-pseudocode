/*
 * XREFs of MiUnlockStoreLockedPages @ 0x14014744C
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x140145CAC (MmStoreProbeAndLockPages.c)
 *     SmKmUnlockMdl @ 0x140147C0C (SmKmUnlockMdl.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiWriteCompletePfn @ 0x1400B51B0 (MiWriteCompletePfn.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall MiUnlockStoreLockedPages(__int64 a1)
{
  _QWORD *v1; // r14
  unsigned int v3; // ebx
  unsigned __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v7; // ebp
  unsigned __int64 v8; // r9
  struct _KEVENT *v9; // rcx

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
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v5 + 34) & 0x10) != 0 )
      v3 |= 2u;
    else
      v3 &= ~2u;
    v8 = MiWriteCompletePfn(v5, v3);
    v9 = v8 ? (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v5 + 40)) >> 8) & 0x3FF) : 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    if ( v8 )
      MiReleasePageFileInfo(v9, v8, 0);
    ++v1;
  }
  while ( (unsigned __int64)v1 < v4 );
  *(_WORD *)(a1 + 10) &= ~2u;
}
