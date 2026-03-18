/*
 * XREFs of MiGetTopLevelPfn @ 0x1400FD760
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiAttachToOwningSession @ 0x1400FD2E0 (MiAttachToOwningSession.c)
 *     MiStoreCheckCandidatePage @ 0x14013FCD8 (MiStoreCheckCandidatePage.c)
 *     MiCapturePfnVm @ 0x140227228 (MiCapturePfnVm.c)
 *     MiRecheckCombineVm @ 0x14022AF38 (MiRecheckCombineVm.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiGetTopLevelPfn(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // ebp
  __int64 v5; // r8
  __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 *v9; // rcx
  __int64 v10; // rax
  _QWORD v12[4]; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0;
  v3 = a1;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  memset(v12, 0, sizeof(v12));
  if ( v5 != (a1 + 0x58000000000LL) / 48 )
  {
    do
    {
      if ( v5 == 0xFFFFFFFFFLL )
        break;
      ++v4;
      v7 = v5;
      v3 = 48 * v5 - 0x58000000000LL;
      v8 = 0;
      v12[v4 - 1] = v3;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
        while ( (*(_QWORD *)(v3 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
      }
      v5 = *(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL;
    }
    while ( v5 != v7 );
  }
  if ( a2 )
    *a2 = v4;
  v9 = v12;
  do
  {
    v10 = *v9;
    if ( !*v9 )
      break;
    if ( v10 != v3 )
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v2;
    ++v9;
  }
  while ( v2 < 4 );
  return v3;
}
