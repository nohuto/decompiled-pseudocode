/*
 * XREFs of MiGetClusterPage @ 0x1401F6144
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140038C30 (MiCreateSharedZeroPages.c)
 *     MiResolvePrivateZeroFault @ 0x14003ADC0 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiComputeZeroClusterMaximum @ 0x1400B553C (MiComputeZeroClusterMaximum.c)
 *     MiIsPteEvaluated @ 0x1400B75C8 (MiIsPteEvaluated.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGet64KPage @ 0x1401FB5F0 (MiGet64KPage.c)
 */

__int64 __fastcall MiGetClusterPage(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, _BYTE *a5)
{
  unsigned __int64 v7; // rdx
  _KPROCESS *Process; // r13
  unsigned __int64 v10; // rcx
  unsigned int v11; // r15d
  unsigned __int16 v12; // cx
  __int64 ProtoPteAddress; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r11
  __int64 v23; // r10
  unsigned __int64 i; // rbx
  __int64 v25; // r8
  bool v26; // zf
  unsigned __int64 v27; // r8
  __int64 v28; // rsi
  __int64 result; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 PageChain; // r8
  bool v34; // zf
  __int64 *v35; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-B8h]
  _QWORD v37[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v41[10]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 v42; // [rsp+82h] [rbp-7Eh]
  _QWORD v43[12]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v44[16]; // [rsp+F0h] [rbp-10h] BYREF

  v38 = a5;
  v7 = a2 & 0xFFFFFFFFFFFF0000uLL;
  v36 = a3;
  *a5 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v37[0] = v7;
  v37[1] = 0x10000LL;
  if ( v7 >> 12 < v10
    || (v7 + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  MiInitializePageColorBase((__int64)&Process[1].IdealNode[12], (*(_DWORD *)(a1 + 48) >> 8) & 0x3F, (__int64)v41);
  v43[3] = 0LL;
  v43[4] = 0LL;
  v11 = v42 >> byte_140326A09;
  v26 = (*(_DWORD *)(a1 + 48) & 0x8000) == 0;
  LOWORD(v43[0]) = 2;
  v43[1] = v37;
  v43[2] = 1LL;
  if ( v26 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 0, &v35);
    v14 = v35[1];
    v15 = ((a2 & 0xFFFFFFFFFFFFF000uLL) - v37[0]) >> 12;
    v16 = v14 + 8LL * *((unsigned int *)v35 + 11);
    if ( (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) > v14 )
      v14 = ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL;
    if ( v16 > (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v16 = (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( ProtoPteAddress - 8 * v15 < v14 || ProtoPteAddress + 8 * (16 - v15) > v16 )
      return 0LL;
    v12 = *(_WORD *)(*v35 + 60) & 0x3FF;
  }
  else
  {
    v12 = WORD2(Process[1].InstrumentationCallback);
  }
  v35 = (__int64 *)MiPartitionIdToPointer(v12);
  v17 = 0LL;
  *(_BYTE *)(2184LL * v11 + v35[6] + 1235) = 1;
  v19 = v18 - (_QWORD)v44;
  do
  {
    v20 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v44[v17] + v19);
    v44[v23] = v20;
    v17 = v23 + 1;
  }
  while ( v17 < 0x10 );
  for ( i = 0LL; i < 0x10; ++i )
  {
    v25 = v44[i];
    if ( a4 )
    {
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v44[i], v21, v25, v19) )
        break;
      v26 = ((v27 >> 5) & 0x1F) == a4;
    }
    else
    {
      v26 = v25 == 0;
    }
    if ( !v26 || v22 && MiIsPteEvaluated(v22) )
      break;
  }
  v28 = -1LL;
  if ( i == 16 )
  {
    if ( MiComputeZeroClusterMaximum(v43, a1) != 16 )
      return 0LL;
    result = MiGet64KPage(v35, v11, v36);
    if ( result )
      return result;
  }
  else
  {
    i = 0LL;
    while ( 1 )
    {
      v39 = v44[i];
      if ( (v39 & 1) != 0 )
        break;
      if ( ++i >= 0x10 )
        goto LABEL_32;
    }
    v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v39);
    v28 = (v30 >> 12) & 0xFFFFFFFFFLL;
    if ( (unsigned __int16)v30 >> 12 != i )
      return 0LL;
  }
LABEL_32:
  v31 = (a2 >> 9) & 0x7FFFFFFFF8LL;
  v40 = 1LL;
  v32 = ((v31 - ((v37[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) & 0xF;
  PageChain = MiGetPageChain((__int64)v35, (__int64)&Process[1].IdealNode[12], v11, v36, 66, v32, &v40);
  if ( !PageChain )
    return 0LL;
  if ( i == 16 )
    v34 = (((char)PageChain / 48) & 0xF) == v32;
  else
    v34 = v28 + ((v31 - ((v37[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) - i == (PageChain + 0x58000000000LL) / 48;
  if ( !v34 )
    *v38 = 1;
  return PageChain;
}
