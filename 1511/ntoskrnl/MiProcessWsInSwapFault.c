/*
 * XREFs of MiProcessWsInSwapFault @ 0x140001300
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400DEB64 (MiReleaseWsSwapReservationPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiProcessWsInSwapFault(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned __int16 v7; // cx
  int *v8; // rcx
  int v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  while ( 1 )
  {
    result = MI_READ_PTE_LOCK_FREE(*a1);
    v10 = result;
    if ( (result & 1) == 0 || v2 == 2 && (result & 0x80u) != 0LL )
      break;
    ++v2;
    ++a1;
    if ( v2 >= 4 )
    {
      v4 = MI_READ_PTE_LOCK_FREE(&v10);
      result = MI_IS_PFN((v4 >> 12) & 0xFFFFFFFFFLL);
      if ( (_DWORD)result )
      {
        v9 = 0;
        v6 = 48 * v5 - 0x58000000000LL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v9);
          while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
        }
        result = MiReleaseWsSwapReservationPfn(v6);
        v7 = ((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF;
        if ( v7 == 1023 )
          v8 = &MiSystemPartition;
        else
          v8 = *(int **)(qword_1402FEC28 + 8LL * v7);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( result )
          return MiReleasePageFileInfo(v8, result, 1LL);
      }
      return result;
    }
  }
  return result;
}
