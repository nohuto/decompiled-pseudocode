/*
 * XREFs of MiCompleteSecureProcessFault @ 0x140223B8C
 * Callers:
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x140224154 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall MiCompleteSecureProcessFault(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v3; // edi
  __int16 *v4; // rax
  unsigned __int64 v5; // r9

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 0x200000000000000LL) == 0 && ((v1 >> 54) & 7) != 3 )
  {
    v3 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v3);
      }
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
    MiMarkPfnVerified(a1, 4);
    MiCaptureDirtyBitToPfn(a1);
    v4 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v5 )
      MiReleasePageFileInfo((struct _KEVENT *)v4, v5, 1);
  }
}
