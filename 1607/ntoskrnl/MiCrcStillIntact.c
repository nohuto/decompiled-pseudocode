/*
 * XREFs of MiCrcStillIntact @ 0x1401F9300
 * Callers:
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiClearPteAccessed @ 0x1400DFD90 (MiClearPteAccessed.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiCombineCandidate @ 0x1401F7CA4 (MiCombineCandidate.c)
 *     MiMakeCombineCandidateClean @ 0x1401F9DA0 (MiMakeCombineCandidateClean.c)
 *     MiRecheckVaVm @ 0x1401FA118 (MiRecheckVaVm.c)
 */

_BOOL8 __fastcall MiCrcStillIntact(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  ULONG_PTR v4; // rsi
  unsigned __int64 *v8; // rdi
  __int64 v9; // rbx
  int v10; // r15d
  __int64 v12; // rcx
  ULONG_PTR *SharedWorkingSetList; // r10
  ULONG_PTR v14; // r11
  unsigned __int64 Address; // rax
  int v16; // eax
  __int64 v17; // rcx
  _DWORD *v18; // r9
  __int64 v19; // [rsp+30h] [rbp-108h] BYREF
  int v20; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v21; // [rsp+44h] [rbp-F4h]
  int v22; // [rsp+48h] [rbp-F0h]
  int v23; // [rsp+4Ch] [rbp-ECh]
  __int64 v24; // [rsp+50h] [rbp-E8h]
  __int64 v25; // [rsp+58h] [rbp-E0h]

  v4 = *(_QWORD *)(a3 + 8);
  v8 = (unsigned __int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !(unsigned int)MiRecheckVaVm(a2, v4) )
    return 0LL;
  v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v8);
  if ( (v19 & 1) == 0 )
    return 0LL;
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  MiLockPageAtDpcInline(v9);
  v10 = MiCombineCandidate(a1, v9);
  if ( !v10 || (*(_BYTE *)(v9 + 34) & 7) != 6 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 != (unsigned __int64 *)(*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) )
    return 0LL;
  v12 = *(_QWORD *)(v9 + 40);
  if ( (v12 & 0x200000000000000LL) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(v9 + 35) & 8) != 0 )
    return 0LL;
  if ( (v12 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
    return 0LL;
  MiLocateWsle(v4, a2, *(_QWORD *)v9);
  SharedWorkingSetList = MiGetSharedWorkingSetList(a2);
  if ( v14 < SharedWorkingSetList[1] )
    return 0LL;
  if ( *(_WORD *)(v9 + 32) != 1 )
    return 0LL;
  Address = 0LL;
  if ( v10 == 1 )
  {
    Address = MiLocateAddress(v4);
    if ( !Address || ((1 << (*(_BYTE *)(Address + 48) & 7)) & 0x55) == 0 )
      return 0LL;
  }
  if ( a4 != 2 )
  {
    if ( a4 != 3 )
      return 1LL;
    v23 = 0;
    v16 = MiTbFlushType(a2);
    v21 = 0;
    v24 = 0LL;
    v25 = 0LL;
    v20 = v16;
    v22 = 20;
    return (unsigned int)MiClearPteAccessed(v17, v9, v8, v18, (__int64)&v20, dword_1403271C8) != 0;
  }
  if ( (v19 & 0x42) == 0 )
    return 0LL;
  MiMakeCombineCandidateClean(v8, Address);
  return 1LL;
}
