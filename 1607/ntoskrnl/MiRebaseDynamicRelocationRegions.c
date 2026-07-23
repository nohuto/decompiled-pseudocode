/*
 * XREFs of MiRebaseDynamicRelocationRegions @ 0x1407AA494
 * Callers:
 *     MiInitializeSystemVa @ 0x1407AA428 (MiInitializeSystemVa.c)
 * Callees:
 *     KeFlushEntireTb @ 0x14013D530 (KeFlushEntireTb.c)
 *     VslGetNestedPageProtectionFlags @ 0x14013D6B0 (VslGetNestedPageProtectionFlags.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiApplyDynamicRelocations @ 0x1407AA654 (MiApplyDynamicRelocations.c)
 */

__int64 __fastcall MiRebaseDynamicRelocationRegions(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // r13
  __int64 v3; // rdi
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r10
  int v12; // ebx
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  unsigned __int64 i; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r8
  __int64 result; // rax
  unsigned __int64 v21; // [rsp+60h] [rbp+8h]
  __int64 v22; // [rsp+68h] [rbp+10h]
  __int64 v23; // [rsp+70h] [rbp+18h]

  v1 = *(_QWORD **)(a1 + 16);
  v2 = v1[6];
  v3 = *(_QWORD *)(*v1 + 48LL);
  v22 = v3;
  if ( (VslGetNestedPageProtectionFlags() & 2) != 0 )
    MiFlags |= 0x100000u;
  v4 = qword_140327FE0;
  v5 = 0xFFFFF68000000000uLL;
  v6 = qword_140327FB0;
  v23 = qword_140327FB0;
  if ( qword_140327FE0 != 0xFFFFF68000000000uLL )
  {
    v7 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
    *v8 = v7;
    v12 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v8) )
      MiWritePteShadow(v10, v9);
    *v11 = 0LL;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
      MiWritePteShadow(v13, 0LL);
    KeFlushEntireTb();
    v14 = v4;
    for ( i = 39LL; ; i -= 9LL )
    {
      v21 = i;
      MiApplyDynamicRelocations(v2, v5, v14);
      MiApplyDynamicRelocations(v3, v5, v14);
      v16 = (1LL << i) - 1;
      if ( i >= 0xC )
      {
        v17 = v16 + v5;
        v18 = v16 + v14;
        MiApplyDynamicRelocations(v2, v16 + v5, v16 + v14);
        v19 = v18;
        v3 = v22;
        MiApplyDynamicRelocations(v22, v17, v19);
        i = v21;
      }
      if ( (unsigned int)++v12 > 4 )
        break;
      v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = v4 + ((v14 >> 9) & 0x7FFFFFFFF8LL);
    }
    v6 = v23;
  }
  result = 0xFFFFFA8000000000uLL;
  if ( v6 != 0xFFFFFA8000000000uLL )
  {
    MiApplyDynamicRelocations(v2, 0xFFFFFA8000000000uLL, v6);
    result = MiApplyDynamicRelocations(v3, 0xFFFFFA8000000000uLL, v6);
  }
  MmPteBase = v4;
  qword_1402F2C60 = v4;
  return result;
}
