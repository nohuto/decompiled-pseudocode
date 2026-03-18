/*
 * XREFs of MiCrcStillIntact @ 0x140229DF8
 * Callers:
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiClearPteAccessed @ 0x1400ADE80 (MiClearPteAccessed.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiCombineCandidate @ 0x140227894 (MiCombineCandidate.c)
 *     MiMakeCombineCandidateClean @ 0x14022AB3C (MiMakeCombineCandidateClean.c)
 *     MiRecheckVaVm @ 0x14022AFD8 (MiRecheckVaVm.c)
 */

_BOOL8 __fastcall MiCrcStillIntact(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  ULONG_PTR v4; // r12
  __int64 *v8; // rsi
  __int64 PteShadow; // rbx
  __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // rdi
  int v15; // ebp
  __int64 v17; // rcx
  _QWORD *Address; // rax
  __int64 v19; // rcx
  unsigned __int64 *v20; // r9
  _QWORD v21[2]; // [rsp+30h] [rbp-118h] BYREF
  int v22; // [rsp+40h] [rbp-108h] BYREF
  __int16 v23; // [rsp+44h] [rbp-104h]
  __int64 v24; // [rsp+48h] [rbp-100h]
  __int64 v25; // [rsp+50h] [rbp-F8h]
  __int64 v26; // [rsp+58h] [rbp-F0h]

  v4 = *(_QWORD *)(a3 + 8);
  v8 = (__int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !(unsigned int)MiRecheckVaVm(a2, v4) || !MiIsAddressValid((__int64)v8) )
    return 0LL;
  PteShadow = *v8;
  v10 = 0x12090482600LL;
  v11 = 2040LL;
  if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)v8, *v8);
  v21[0] = PteShadow;
  if ( (PteShadow & 1) == 0 )
    return 0LL;
  v12 = PteShadow;
  if ( (unsigned __int64)&v21[v10] <= v11 )
    v12 = MiReadPteShadow((__int64)v21, PteShadow);
  v13 = 0;
  v14 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
    while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
  }
  v15 = MiCombineCandidate(a1, v14);
  if ( !v15 || (*(_BYTE *)(v14 + 34) & 7) != 6 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 != (__int64 *)(*(_QWORD *)(v14 + 8) | 0x8000000000000000uLL) )
    return 0LL;
  v17 = *(_QWORD *)(v14 + 40);
  if ( (v17 & 0x200000000000000LL) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(v14 + 35) & 8) != 0 )
    return 0LL;
  if ( (v17 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
    return 0LL;
  if ( MiLocateWsle(v4, a2, *(_QWORD *)v14) < *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) )
    return 0LL;
  if ( *(_WORD *)(v14 + 32) != 1 )
    return 0LL;
  Address = 0LL;
  if ( v15 == 1 )
  {
    Address = MiLocateAddress(v4);
    if ( !Address || ((1 << (Address[6] & 7)) & 0x55) == 0 )
      return 0LL;
  }
  if ( a4 != 2 )
  {
    if ( a4 != 3 )
      return 1LL;
    v24 = 20LL;
    v22 = MiTbFlushType(a2);
    v23 = 0;
    v25 = 0LL;
    v26 = 0LL;
    return (unsigned int)MiClearPteAccessed(v19, v14, v8, v20, (__int64)&v22, dword_14034F248) != 0;
  }
  if ( (PteShadow & 0x42) == 0 )
    return 0LL;
  MiMakeCombineCandidateClean(v8, Address);
  return 1LL;
}
