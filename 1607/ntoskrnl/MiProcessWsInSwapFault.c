/*
 * XREFs of MiProcessWsInSwapFault @ 0x140094D30
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiReleaseWsSwapReservationPfn @ 0x140094E68 (MiReleaseWsSwapReservationPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiProcessWsInSwapFault(_QWORD *a1)
{
  __int64 v2; // rax
  int v3; // r9d
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int16 v9; // cx
  struct _KEVENT *v10; // rcx
  int v11; // [rsp+38h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  while ( 1 )
  {
    v2 = MI_READ_PTE_LOCK_FREE(*a1);
    v12 = v2;
    if ( (v2 & 1) == 0 || v3 != 3 && (v2 & 0x80u) != 0LL )
      break;
    a1 = (_QWORD *)(v4 + 8);
    if ( (unsigned int)(v3 + 1) >= 4 )
    {
      v5 = MI_READ_PTE_LOCK_FREE(&v12);
      if ( MiIsPfnInline((v5 >> 12) & 0xFFFFFFFFFLL) )
      {
        v7 = 48 * v6 - 0x58000000000LL;
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v11);
          while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0 );
        }
        v8 = MiReleaseWsSwapReservationPfn(v7);
        v9 = ((unsigned int)HIDWORD(*(_QWORD *)(v7 + 40)) >> 8) & 0x3FF;
        if ( v9 == 1023 )
          v10 = (struct _KEVENT *)MiSystemPartition;
        else
          v10 = *(struct _KEVENT **)(qword_140327038 + 8LL * v9);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v8 )
          MiReleasePageFileInfo(v10, v8, 1);
      }
      return;
    }
  }
}
