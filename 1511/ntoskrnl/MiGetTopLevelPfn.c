/*
 * XREFs of MiGetTopLevelPfn @ 0x1400D56E0
 * Callers:
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiAttachToOwningSession @ 0x1400D55A4 (MiAttachToOwningSession.c)
 *     MiStoreCheckCandidatePage @ 0x14010AD28 (MiStoreCheckCandidatePage.c)
 *     MiRecheckCombineVm @ 0x1401282E0 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x14012896C (MiCapturePfnVm.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetTopLevelPfn(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v5; // ebp
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v13; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v4 = a1;
  v5 = 0;
  memset(v14, 0, sizeof(v14));
  v7 = v2 & 0xFFFFFFFFFLL;
  v8 = (a1 + 0x58000000000LL) / 48;
  if ( v7 != v8 )
  {
    do
    {
      if ( v7 == 0xFFFFFFFFFLL )
        break;
      ++v5;
      v13 = 0;
      v9 = v7;
      v4 = 48 * v7 - 0x58000000000LL;
      v14[v5 - 1] = v4;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v13, v8, v7);
        while ( (*(_QWORD *)(v4 + 24) & 0x8000000000000000uLL) != 0 );
      }
      v7 = *(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL;
    }
    while ( v7 != v9 );
  }
  if ( a2 )
    *a2 = v5;
  v10 = v14;
  do
  {
    v11 = *v10;
    if ( !*v10 )
      break;
    if ( v11 != v4 )
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v3;
    ++v10;
  }
  while ( v3 < 4 );
  return v4;
}
