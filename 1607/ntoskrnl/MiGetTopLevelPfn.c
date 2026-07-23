/*
 * XREFs of MiGetTopLevelPfn @ 0x1401086F0
 * Callers:
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiAttachToOwningSession @ 0x14010A1DC (MiAttachToOwningSession.c)
 *     MiStoreCheckCandidatePage @ 0x140119734 (MiStoreCheckCandidatePage.c)
 *     MiCapturePfnVm @ 0x1401F7B64 (MiCapturePfnVm.c)
 *     MiRecheckCombineVm @ 0x1401FA06C (MiRecheckCombineVm.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetTopLevelPfn(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v5; // ebp
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v13[4]; // [rsp+28h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v4 = a1;
  v5 = 0;
  memset(v13, 0, sizeof(v13));
  v7 = v2 & 0xFFFFFFFFFLL;
  if ( v7 != (a1 + 0x58000000000LL) / 48 )
  {
    do
    {
      if ( v7 == 0xFFFFFFFFFLL )
        break;
      ++v5;
      v8 = v7;
      v4 = 48 * v7 - 0x58000000000LL;
      v12 = 0;
      v13[v5 - 1] = v4;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v12);
        while ( (*(_QWORD *)(v4 + 24) & 0x8000000000000000uLL) != 0 );
      }
      v7 = *(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL;
    }
    while ( v7 != v8 );
  }
  if ( a2 )
    *a2 = v5;
  v9 = v13;
  do
  {
    v10 = *v9;
    if ( !*v9 )
      break;
    if ( v10 != v4 )
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v3;
    ++v9;
  }
  while ( v3 < 4 );
  return v4;
}
