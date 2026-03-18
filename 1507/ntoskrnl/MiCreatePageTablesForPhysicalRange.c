/*
 * XREFs of MiCreatePageTablesForPhysicalRange @ 0x1402242B0
 * Callers:
 *     MiInsertPrivateVad @ 0x14007CE90 (MiInsertPrivateVad.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

__int64 __fastcall MiCreatePageTablesForPhysicalRange(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r9
  unsigned __int64 v3; // r15
  unsigned int v4; // edx
  ULONG_PTR v5; // r14
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rax
  unsigned int v18; // [rsp+70h] [rbp+8h]

  v2 = a2;
  v3 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v4 = (*(_DWORD *)(a1 + 48) >> 8) & 0x3F;
  v18 = v4;
  v5 = ((8 * (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))) & 0x7FFFFFFFF8LL)
     - 0x98000000000LL;
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = 0xFFFFF68000000008uLL;
  v8 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x97FFFFFFFF8LL;
  if ( v5 < v8 )
  {
    v9 = v6 + 0x90482413000LL;
    do
    {
      MiMakeSystemAddressValid(v5, 0LL, v4, v2, 1);
      v11 = *(_QWORD *)v6;
      v12 = 512 - ((v5 >> 3) & 0x1FF);
      if ( v12 > (__int64)(v8 - v5) >> 3 )
        v12 = (__int64)(v8 - v5) >> 3;
      if ( v9 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v10, v11)
        && (v11 & 1) != 0
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        v13 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8 * ((v6 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v11 |= 0x20uLL;
          if ( (v14 & 0x42) != 0 )
            v11 |= 0x42uLL;
        }
      }
      v15 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v16);
        }
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v17 = MI_GET_USED_PTES_HANDLE(v3);
      result = MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v17, 1u);
      v4 = v18;
      v5 += 8 * v12;
      v2 = a2;
      v6 += 8LL;
      v9 += 8LL;
      v3 += v12 << 12;
    }
    while ( v5 < v8 );
  }
  return result;
}
