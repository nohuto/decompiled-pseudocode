/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x1407CCEC0
 * Callers:
 *     MiInitializeDriverImages @ 0x1407CBC2C (MiInitializeDriverImages.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // r15
  __int64 *v2; // r14
  int v3; // r9d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v20; // [rsp+68h] [rbp+10h]
  __int64 *v21; // [rsp+70h] [rbp+18h]

  v1 = (__int64 *)(a1 + 16);
  v2 = *(__int64 **)(a1 + 16);
  v21 = (__int64 *)(a1 + 16);
  v20 = v2;
  if ( v2 != (__int64 *)(a1 + 16) )
  {
    v3 = 3;
    do
    {
      v4 = v2[6];
      v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( *(char *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >= 0 )
      {
        v6 = ((unsigned __int64)*((unsigned int *)v2 + 16) + 4095) >> 12;
        if ( (PVOID)v4 != PsNtosImageBase && (PVOID)v4 != PsHalImageBase )
        {
          _InterlockedExchangeAdd(&dword_14034FD18, v6);
          qword_14034FCD8 -= (unsigned int)v6;
        }
        v7 = v5 + 8LL * (unsigned int)v6;
        if ( v5 < v7 )
        {
          v8 = v5 + 0x90482413000LL;
          do
          {
            v9 = *(_QWORD *)v5;
            if ( v8 <= 0x7F8
              && (unsigned int)MiPteHasShadow()
              && (v9 & 1) != 0
              && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
            {
              v10 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( v10 )
              {
                v11 = *(_QWORD *)(v10 + 8 * ((v5 >> 3) & 0x1FF));
                if ( (v11 & 0x20) != 0 )
                  v9 |= 0x20uLL;
                if ( (v11 & 0x42) != 0 )
                  v9 |= 0x42uLL;
              }
            }
            v19 = v9;
            v12 = v9;
            if ( (unsigned __int64)&STACK[0x90482413060] <= 0x7F8
              && (unsigned int)MiPteHasShadow()
              && (v9 & 1) != 0
              && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
            {
              v13 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( v13 )
              {
                v14 = *(_QWORD *)(v13 + 8 * (((unsigned __int64)&v19 >> 3) & 0x1FF));
                if ( (v14 & 0x20) != 0 )
                  v12 |= 0x20uLL;
                if ( (v14 & 0x42) != 0 )
                  v12 |= 0x42uLL;
              }
            }
            v15 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( v9 >= 0 )
            {
              v16 = 6;
              if ( ((unsigned __int8)v3 & BYTE2(MiFlags)) != 0 )
                v16 = v3;
              *(_QWORD *)(v15 + 16) ^= (*(_DWORD *)(v15 + 16) ^ (32 * v16)) & 0x3E0;
              if ( ((unsigned __int8)v3 & BYTE2(MiFlags)) != 0 )
              {
                MiMarkPfnVerified(v15, 0);
                v3 = 3;
              }
              if ( ((unsigned __int8)v3 & BYTE2(MiFlags)) == 2 )
              {
                if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v5) )
                  v17 |= 0x100uLL;
                v18 = v17 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
                v19 = v18;
                *(_QWORD *)v5 = v18;
                if ( v8 <= 0x7F8 )
                {
                  MiWritePteShadow(v5, v18);
                  v3 = 3;
                }
              }
            }
            v5 += 8LL;
            v8 += 8LL;
          }
          while ( v5 < v7 );
          v2 = v20;
          v1 = v21;
        }
      }
      v2 = (__int64 *)*v2;
      v20 = v2;
    }
    while ( v2 != v1 );
  }
  MiFlags |= 0x1000u;
}
