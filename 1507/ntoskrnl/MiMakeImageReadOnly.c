/*
 * XREFs of MiMakeImageReadOnly @ 0x14011B188
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 * Callees:
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MiMakeImageReadOnly(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v15 = 17;
  v2 = a1 + 120;
  if ( a1 != -120 )
  {
    do
    {
      if ( (*(_WORD *)(v2 + 32) & 0x3E) != 2 )
      {
        v3 = *(_QWORD *)(v2 + 8);
        v4 = *(unsigned int *)(v2 + 44);
        *(_WORD *)(v2 + 32) = *(_WORD *)(v2 + 32) & 0xFFC1 | 2;
        v5 = v3 + 8 * v4;
        if ( v3 < v5 )
        {
          v6 = v3 + 0x90482413000LL;
          do
          {
            if ( (v3 & 0xFFF) == 0 || v15 == 17 )
            {
              if ( v15 != 17 )
                MiUnlockProtoPoolPage(v1, v15);
              while ( 1 )
              {
                v1 = MiLockProtoPoolPage(v3, &v15);
                if ( v1 )
                  break;
                MmAccessFault(2uLL, v3, 0, 0LL);
              }
            }
            v7 = MiLockLeafPage((unsigned __int64 *)v3, 0LL);
            v9 = *(_QWORD *)v3;
            v10 = v7;
            if ( v6 <= 0x7F8
              && (unsigned int)MiPteHasShadow(v8, v9)
              && (v9 & 1) != 0
              && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
            {
              v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( v11 )
              {
                v12 = *(_QWORD *)(v11 + 8 * ((v3 >> 3) & 0x1FF));
                if ( (v12 & 0x20) != 0 )
                  v9 |= 0x20uLL;
                if ( (v12 & 0x42) != 0 )
                  v9 |= 0x42uLL;
              }
            }
            if ( v10 )
            {
              if ( (v9 & 1) == 0 )
              {
                v14 = v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
                *(_QWORD *)v3 = v14;
                if ( v6 <= 0x7F8 )
                  MiWritePteShadow(v3, v14);
                *(_QWORD *)(v10 + 16) = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            else if ( (v9 & 0x400) != 0 || v9 )
            {
              v13 = v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x20;
              *(_QWORD *)v3 = v13;
              if ( v6 <= 0x7F8 )
                MiWritePteShadow(v3, v13);
            }
            v3 += 8LL;
            v6 += 8LL;
          }
          while ( v3 < v5 );
        }
        if ( v15 != 17 )
        {
          MiUnlockProtoPoolPage(v1, v15);
          v15 = 17;
        }
      }
      v2 = *(_QWORD *)(v2 + 16);
    }
    while ( v2 );
  }
}
