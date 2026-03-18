/*
 * XREFs of MiUnmapLargeUserPages @ 0x1401E27F0
 * Callers:
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiDeletePageTableHierarchy @ 0x14006D570 (MiDeletePageTableHierarchy.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x1400E12D8 (MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1401D3510 (MiLogPerfMemoryRangeEvent.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiUnmapLargeUserPages(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r10
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r15
  int v6; // r13d
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  volatile signed __int32 *v13; // r8
  int v14; // eax
  int v15; // r10d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v22; // [rsp+20h] [rbp-A9h] BYREF
  int v23; // [rsp+30h] [rbp-99h] BYREF
  __int16 v24; // [rsp+34h] [rbp-95h]
  int v25; // [rsp+38h] [rbp-91h]
  int v26; // [rsp+3Ch] [rbp-8Dh]
  __int64 v27; // [rsp+40h] [rbp-89h]
  __int64 v28; // [rsp+48h] [rbp-81h]

  v1 = 0x904C0000000LL;
  v4 = (((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12 >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v5 = (((((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  if ( (*(_BYTE *)(a1 + 48) & 7) == 7 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      v3 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
      v2 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
      MiLogPerfMemoryRangeEvent(
        v2,
        (__int64)KeGetCurrentThread()->ApcState.Process,
        0x1Au,
        (((v3 - v2 + 1) & 0xFFF) != 0) + ((__int64)(v3 - v2 + 1) >> 12));
    }
  }
  v26 = 0;
  v7 = 0xFFFFFFFFFLL;
  v27 = 0LL;
  v8 = v4;
  v28 = 0LL;
  v23 = 1;
  v24 = 0;
  v25 = 20;
  if ( v4 <= v5 )
  {
    while ( 1 )
    {
      v22 = MI_READ_PTE_LOCK_FREE((__int64 *)v4);
      v9 = MI_READ_PTE_LOCK_FREE(&v22);
      *(_QWORD *)v4 = 0LL;
      v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
      if ( MiPteInShadowRange(v4) )
        MiWritePteShadow(v4, 0LL);
      MiInsertTbFlushEntry((__int64)&v23, (__int64)(v4 << 25) >> 16 << 25 >> 16, 1LL, 1);
      if ( v6 != 1 )
        goto LABEL_19;
      LOBYTE(v11) = 1;
      v12 = (v10 >> 9) & 0x1F;
      v13 = (volatile signed __int32 *)(qword_1402FF6E8[0] + 4 * (v10 >> 14));
      if ( (unsigned __int64)(v12 + 1) > 0x20 )
      {
        if ( v12 )
        {
          v15 = (v10 >> 9) & 0x1F;
          _InterlockedAnd(v13++, ~(((1 << (32 - v15)) - 1) << v12));
          v11 = 1LL - (unsigned int)(32 - v15);
          if ( v11 >= 0x20 )
          {
            v16 = v11 >> 5;
            v11 += -32LL * (v11 >> 5);
            do
            {
              *v13++ = 0;
              --v16;
            }
            while ( v16 );
          }
          if ( !v11 )
            goto LABEL_18;
        }
        v14 = (1 << v11) - 1;
      }
      else
      {
        v14 = 1 << v12;
      }
      _InterlockedAnd(v13, ~v14);
LABEL_18:
      *(_QWORD *)(48 * v10 - 0x58000000000LL) = v7;
      v7 = 48 * v10 - 0x58000000000LL;
LABEL_19:
      v17 = MI_GET_PFN_FROM_PTE(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiLockPageAtDpcInline(v17, v18, v19);
      *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(v17, 1LL, v20);
      if ( ((*(_DWORD *)(v17 + 16) >> 14) & 0x3FF) == 0 )
      {
        MiInsertTbFlushEntry((__int64)&v23, (__int64)(v8 << 25) >> 16, ((__int64)(v4 - v8) >> 3) + 1, 0);
        v8 = v4 + 8;
        MiDeletePageTableHierarchy(&v23, v4);
      }
      v4 += 8LL;
      if ( v4 > v5 )
      {
        if ( v8 <= v5 )
          MiInsertTbFlushEntry((__int64)&v23, (__int64)(v8 << 25) >> 16, ((__int64)(v4 - v8 - 8) >> 3) + 1, 0);
        break;
      }
    }
  }
  MiFlushTbList((__int64)&v23, (_KPROCESS *)v1);
  return v7;
}
