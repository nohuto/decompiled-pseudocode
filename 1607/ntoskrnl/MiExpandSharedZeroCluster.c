/*
 * XREFs of MiExpandSharedZeroCluster @ 0x1400B72E8
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiUpdatePageTableUseCount @ 0x140036FD0 (MiUpdatePageTableUseCount.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiComputeZeroClusterMaximum @ 0x1400B553C (MiComputeZeroClusterMaximum.c)
 *     MiIsPteEvaluated @ 0x1400B75C8 (MiIsPteEvaluated.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakePrototypePteDirect @ 0x1401F2584 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401F2594 (MiMakePrototypePteVadLookup.c)
 */

__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r12d
  unsigned __int64 v3; // rbx
  __int16 *v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // r15
  __int64 *v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // r11
  __int64 ProtoPteAddress; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r11
  unsigned __int64 v17; // rsi
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 PrototypePteDirect; // rax
  __int64 v21; // r10
  __int64 v23; // rdx
  __int64 v24; // r9
  _QWORD *v25; // r10
  int v26; // r11d
  __int64 v27; // rcx
  __int64 v28; // r9
  int v29; // r11d
  unsigned __int64 v30; // [rsp+20h] [rbp-69h]
  _QWORD v31[3]; // [rsp+28h] [rbp-61h] BYREF
  __int16 v32; // [rsp+40h] [rbp-49h] BYREF
  _QWORD *v33; // [rsp+48h] [rbp-41h]
  __int64 v34; // [rsp+50h] [rbp-39h]
  __int64 v35; // [rsp+58h] [rbp-31h]
  __int64 v36; // [rsp+60h] [rbp-29h]
  char v37; // [rsp+F0h] [rbp+67h]
  unsigned __int64 v38; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned __int64 v39; // [rsp+100h] [rbp+77h]
  __int64 *v40; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v37 = 0;
  v5 = *(__int16 **)(a1 + 56);
  v6 = *(_QWORD **)(v1 + 120);
  v39 = v3;
  if ( (__int64)v6 >= 0 )
    v7 = -1LL;
  else
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  v8 = *(_DWORD *)(v1 + 48);
  if ( (v8 & 0x8000) == 0 && (v8 & 0x100000) != 0 )
  {
    v3 &= 0xFFFFFFFFFFFF0000uLL;
    v31[1] = 0x10000LL;
    v31[0] = v3;
    if ( v3 >> 12 < (*(unsigned int *)(v1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 32) << 32))
      || (v3 + 0xFFFF) >> 12 > (*(unsigned int *)(v1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 33) << 32)) )
    {
      return 1LL;
    }
    v32 = 2;
    v33 = v31;
    v5 = &v32;
    v34 = 1LL;
    v35 = 0LL;
    v36 = 0LL;
    v37 = 1;
  }
  v30 = MiComputeZeroClusterMaximum(v5, v1);
  v38 = v3 >> 12;
  v9 = 0LL;
  v10 = 0LL;
  v11 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v30 )
    return 1LL;
  do
  {
    if ( (unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(a1 + 32)) )
      break;
    ProtoPteAddress = MiGetProtoPteAddress(v1, v12, 8, &v40);
    if ( !ProtoPteAddress || !v40 || v10 && v40 != v10 )
      break;
    if ( ((ProtoPteAddress ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v10 )
      v10 = v40;
    if ( v38 - (*(unsigned int *)(v1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v1 + 32) << 32)) > v7 )
      break;
    v14 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    v38 = v14;
    if ( (v14 & 1) != 0 || !v14 || (v14 & 0x400) != 0 || (v14 & 0x800) != 0 || (unsigned int)MiGetPagingFileOffset(&v38) )
      break;
    if ( !v2 )
      v9 = v15;
    ++v2;
    v11 += 8LL;
    v38 = v16 + 1;
  }
  while ( v2 < v30 );
  if ( v2 <= 1 )
    return 1LL;
  v17 = v39;
  if ( v37 == 1 && v11 <= ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v18 = 0;
  do
  {
    v19 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v19 == 256 )
      PrototypePteDirect = MiMakePrototypePteDirect(v9);
    else
      PrototypePteDirect = MiMakePrototypePteVadLookup(v19);
    v38 = PrototypePteDirect;
    if ( !MI_READ_PTE_LOCK_FREE(v21) )
    {
      *v25 = v24;
      if ( (unsigned int)MiPteInShadowRange(v25, v23) )
        MiWritePteShadow(v27, v28);
      v26 = v29 + 1;
    }
    ++v18;
    v9 += 8LL;
  }
  while ( v18 < (unsigned __int64)v2 );
  if ( v26 )
    MiUpdatePageTableUseCount(v17);
  return v2;
}
