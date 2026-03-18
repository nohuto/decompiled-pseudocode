/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x140145DC8
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x140145CAC (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

void __fastcall MiStoreMarkLockedPagesModified(unsigned __int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v2; // rbp
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v5; // esi
  unsigned __int64 *v6; // r8
  __int64 v7; // rdx
  char v8; // al
  __int16 *v9; // rax
  unsigned __int64 v10; // r9

  v1 = (_QWORD *)(a1 + 48);
  v2 = a1
     + 48
     + 8
     * ((*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12);
  while ( (unsigned __int64)v1 < v2 )
  {
    v3 = 48LL * *v1 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
        a1 = 0x8000000000000000uLL;
      }
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    v6 = (unsigned __int64 *)(v3 + 16);
    v7 = *(_QWORD *)(v3 + 16);
    if ( (v7 & 4) != 0 )
    {
      if ( (unsigned __int64)(v3 + 0x90482413010LL) <= 0x7F8 )
        MiPteHasShadow(a1, v7);
      *v6 = v7 & 0xFFFFFFFFFFFFFFFBuLL;
    }
    v8 = *(_BYTE *)(v3 + 34);
    if ( (v8 & 0x10) == 0 )
      *(_BYTE *)(v3 + 34) = v8 | 0x10;
    v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v3 + 40)) >> 8) & 0x3FF);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    a1 = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v10 )
      MiReleasePageFileInfo((struct _KEVENT *)v9, v10, 0);
    ++v1;
  }
}
