/*
 * XREFs of MiMarkBootKernelStack @ 0x1407D4164
 * Callers:
 *     MiInitializeKernelStacks @ 0x1407D3770 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiMarkKernelStack @ 0x14006ABCC (MiMarkKernelStack.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

void __fastcall MiMarkBootKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r14
  char v4; // si
  __int64 v5; // rbp
  signed __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  signed __int64 v9; // rbx
  int v10; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v11; // [rsp+24h] [rbp-E4h]
  __int64 v12; // [rsp+28h] [rbp-E0h]
  __int64 v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+38h] [rbp-D0h]

  v3 = a1;
  MiMarkKernelStack(a1, a2, -3LL);
  v4 = 0;
  v12 = 20LL;
  v10 = 0;
  v5 = (__int64)(v3 << 25) >> 16;
  v11 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( v3 < a2 )
  {
    do
    {
      v6 = *(_QWORD *)v3;
      if ( v3 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && (v6 & 1) != 0
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        v7 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 8 * ((v3 >> 3) & 0x1FF));
          if ( (v8 & 0x20) != 0 )
            v6 |= 0x20uLL;
          if ( (v8 & 0x42) != 0 )
            v6 |= 0x42uLL;
        }
      }
      if ( (BYTE2(MiFlags) & 3) != 3 )
      {
        do
        {
          v9 = v6;
          v6 = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)v3,
                 ~qword_1403D0220 & (v6 | 0x8000000000000062uLL) | 0x62,
                 v6);
          MiInsertTbFlushEntry((__int64)&v10, v5, 1LL, 0);
          v5 += 4096LL;
        }
        while ( v6 != v9 );
      }
      v3 += 8LL;
    }
    while ( v3 < a2 );
    v4 = v11;
  }
  LOBYTE(v11) = v4 | 1;
  MiFlushTbList((__int64)&v10);
}
