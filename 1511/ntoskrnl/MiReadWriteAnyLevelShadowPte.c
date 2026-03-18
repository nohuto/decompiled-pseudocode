/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x1401DE980
 * Callers:
 *     MiInitializeShadowPageTable @ 0x1406260E8 (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x140626408 (MiMakeShadowPageTableRange.c)
 *     MmDeleteShadowMapping @ 0x140626638 (MmDeleteShadowMapping.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 DeepFreezeStartTime; // r13
  unsigned __int8 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 *v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int8 v16[4]; // [rsp+20h] [rbp-78h] BYREF
  int v17; // [rsp+24h] [rbp-74h]
  __int64 v18[5]; // [rsp+28h] [rbp-70h] BYREF

  v5 = a2;
  v17 = a3;
  v6 = a2;
  DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
  if ( a2 < 4LL )
  {
    a2 = 4;
    do
    {
      v18[++v6] = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    while ( v6 < 4 );
  }
  v8 = 17;
  v9 = a2;
  v10 = 0LL;
  v16[0] = 17;
  v18[0] = 0LL;
  v11 = (__int64 *)DeepFreezeStartTime;
  do
  {
    v12 = v18[v9--];
    if ( v9 == 3 )
    {
      v11 += (v12 >> 3) & 0x1FF;
    }
    else
    {
      if ( v8 != 17 )
        MiUnmapPageInHyperSpaceWorker(DeepFreezeStartTime, v8);
      v13 = MI_READ_PTE_LOCK_FREE(v18);
      v14 = MiMapPageInHyperSpaceWorker((v13 >> 12) & 0xFFFFFFFFFLL, v16, 0x80000000);
      v8 = v16[0];
      DeepFreezeStartTime = v14;
      v11 = (__int64 *)(v14 + 8 * ((v12 >> 3) & 0x1FF));
    }
    if ( v17 && v9 == v5 )
    {
      *v11 = a4;
      if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v11, a4);
    }
    else
    {
      v10 = MI_READ_PTE_LOCK_FREE(v11);
      v18[0] = v10;
    }
  }
  while ( v9 != v5 );
  if ( v8 != 17 )
    MiUnmapPageInHyperSpaceWorker(DeepFreezeStartTime, v8);
  return v10;
}
