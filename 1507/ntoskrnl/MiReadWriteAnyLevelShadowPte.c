/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x1402255D8
 * Callers:
 *     MiInitializeShadowPageTable @ 0x1406A7E80 (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x1406A8274 (MiMakeShadowPageTableRange.c)
 *     MmDeleteShadowMapping @ 0x1406A84B8 (MmDeleteShadowMapping.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned __int8 v8; // r14
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int8 v20[8]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h]
  _QWORD v23[5]; // [rsp+38h] [rbp-38h]

  LODWORD(v23[0]) = a3;
  v5 = a2;
  v22 = a2;
  v6 = a2;
  v7 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
  if ( a2 < 4LL )
  {
    a2 = 4;
    do
    {
      v23[++v6] = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    while ( v6 < 4 );
  }
  v8 = 17;
  v9 = a2;
  v10 = 0LL;
  v20[0] = 17;
  v21 = 0LL;
  v11 = v7;
  do
  {
    v12 = v23[v9--];
    if ( v9 == 3 )
    {
      v11 += 8 * ((v12 >> 3) & 0x1FF);
    }
    else
    {
      if ( v8 != 17 )
        MiUnmapPageInHyperSpaceWorker(v7, v8);
      v13 = v10;
      if ( (unsigned __int64)&STACK[0x90482413028] <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && (v10 & 1) != 0
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        v10 = v21;
        v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 8 * (((unsigned __int64)&v21 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v13 = v21 | 0x20;
          if ( (v15 & 0x42) != 0 )
            v13 |= 0x42uLL;
        }
        else
        {
          v13 = v21;
        }
      }
      v16 = MiMapPageInHyperSpaceWorker((v13 >> 12) & 0xFFFFFFFFFLL, v20);
      v8 = v20[0];
      v7 = v16;
      v5 = v22;
      v11 = v16 + 8 * ((v12 >> 3) & 0x1FF);
    }
    if ( LODWORD(v23[0]) && v9 == v5 )
    {
      if ( (a4 & 1) != 0 && !v9 )
        a4 |= 0x100uLL;
      *(_QWORD *)v11 = a4;
      if ( v11 + 0x90482413000LL <= 0x7F8 )
      {
        MiWritePteShadow(v11, a4);
        v5 = v22;
      }
    }
    else
    {
      v10 = *(_QWORD *)v11;
      if ( v11 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && (v10 & 1) != 0
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8 * ((v11 >> 3) & 0x1FF));
          if ( (v18 & 0x20) != 0 )
            v10 |= 0x20uLL;
          if ( (v18 & 0x42) != 0 )
            v10 |= 0x42uLL;
        }
        v8 = v20[0];
      }
      v21 = v10;
    }
  }
  while ( v9 != v5 );
  if ( v8 != 17 )
    MiUnmapPageInHyperSpaceWorker(v7, v8);
  return v10;
}
