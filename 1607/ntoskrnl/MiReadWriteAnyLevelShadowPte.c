/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x1401EF280
 * Callers:
 *     MiInitializeShadowPageTable @ 0x14065BA6C (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x14065BCA0 (MiMakeShadowPageTableRange.c)
 *     MmDeleteShadowMapping @ 0x14065BEE8 (MmDeleteShadowMapping.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // r11
  char v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r9
  unsigned __int64 v13; // rbp
  _QWORD *v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int8 v18[8]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v19[5]; // [rsp+28h] [rbp-60h] BYREF

  v5 = (int)a2;
  v7 = (int)a2;
  v8 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].Affinity.Count;
  if ( (int)a2 < 4LL )
  {
    a2 = 4LL;
    do
    {
      v19[v7 + 1] = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v7;
    }
    while ( v7 < 4 );
  }
  v9 = 17;
  v10 = (int)a2;
  v11 = 0LL;
  v18[0] = 17;
  v19[0] = 0LL;
  v12 = v8;
  do
  {
    v13 = v19[v10--];
    if ( v10 == 3 )
    {
      v14 = (_QWORD *)(v12 + 8 * ((v13 >> 3) & 0x1FF));
    }
    else
    {
      if ( v9 != 17 )
      {
        LOBYTE(a2) = v9;
        MiUnmapPageInHyperSpaceWorker(v8, a2);
      }
      v15 = MI_READ_PTE_LOCK_FREE(v19);
      v14 = (_QWORD *)(MiMapPageInHyperSpaceWorker((v15 >> 12) & 0xFFFFFFFFFLL, v18, 0x80000000)
                     + 8 * ((v13 >> 3) & 0x1FF));
    }
    if ( a3 && v10 == v5 )
    {
      if ( (a4 & 1) != 0 && !v10 )
        a4 |= 0x100uLL;
      *v14 = a4;
      if ( MiPteInShadowRange((unsigned __int64)v14) )
        MiWritePteShadow(v16, a4);
    }
    else
    {
      v11 = MI_READ_PTE_LOCK_FREE(v14);
      v19[0] = v11;
    }
  }
  while ( v10 != v5 );
  if ( v9 != 17 )
  {
    LOBYTE(a2) = v9;
    MiUnmapPageInHyperSpaceWorker(v8, a2);
  }
  return v11;
}
