/*
 * XREFs of MiMarkBootImagesNonPaged @ 0x1407CC2E0
 * Callers:
 *     MiInitializeDriverImages @ 0x1407CBC2C (MiInitializeDriverImages.c)
 * Callees:
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiMarkBootImagesNonPaged(__int64 a1)
{
  __int64 *v1; // r11
  __int64 *v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 16);
  v2 = *(__int64 **)(a1 + 16);
  if ( v2 != (__int64 *)(a1 + 16) )
  {
    do
    {
      v3 = v2[6];
      if ( (*(_BYTE *)(8 * ((v3 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
        || (*(_BYTE *)(((v3 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
        || (*(_BYTE *)(((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) != 0x81 )
      {
        v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v5 = v4 + 8LL * (unsigned int)(((unsigned __int64)*((unsigned int *)v2 + 16) + 4095) >> 12);
        if ( v4 < v5 )
        {
          v6 = v4 + 0x90482413000LL;
          do
          {
            v7 = *(_QWORD *)v4;
            if ( v6 <= 0x7F8
              && (unsigned int)MiPteHasShadow()
              && (v7 & 1) != 0
              && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
            {
              v8 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( v8 )
              {
                v9 = *(_QWORD *)(v8 + 8 * ((v4 >> 3) & 0x1FF));
                if ( (v9 & 0x20) != 0 )
                  v7 |= 0x20uLL;
                if ( (v9 & 0x42) != 0 )
                  v7 |= 0x42uLL;
              }
            }
            v12 = v7;
            if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8
              && (unsigned int)MiPteHasShadow()
              && (v7 & 1) != 0
              && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
            {
              v10 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
              if ( v10 )
              {
                v11 = *(_QWORD *)(v10 + 8 * (((unsigned __int64)&v12 >> 3) & 0x1FF));
                if ( (v11 & 0x20) != 0 )
                  v7 |= 0x20uLL;
                if ( (v11 & 0x42) != 0 )
                  v7 |= 0x42uLL;
              }
            }
            v4 += 8LL;
            v6 += 8LL;
            *(_BYTE *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 35) |= 8u;
          }
          while ( v4 < v5 );
        }
      }
      v2 = (__int64 *)*v2;
    }
    while ( v2 != v1 );
  }
}
