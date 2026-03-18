/*
 * XREFs of MiMarkLargePageRange @ 0x1407D4CB4
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1400653BC (RtlSetBitsEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiMarkLargePageRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( v2 < v3 )
  {
    v4 = v2 + 0x90482413000LL;
    do
    {
      v5 = *(_QWORD *)v2;
      if ( v4 <= 0x7F8 && (unsigned int)MiPteHasShadow() && (v5 & 1) != 0 && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
      {
        v6 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 8 * ((v2 >> 3) & 0x1FF));
          if ( (v7 & 0x20) != 0 )
            v5 |= 0x20uLL;
          if ( (v7 & 0x42) != 0 )
            v5 |= 0x42uLL;
        }
      }
      v10 = v5;
      if ( (v5 & 1) != 0 && (v5 & 0x80u) != 0LL )
      {
        if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8
          && (unsigned int)MiPteHasShadow()
          && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
        {
          v8 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v8 )
          {
            v9 = *(_QWORD *)(v8 + 8 * (((unsigned __int64)&v10 >> 3) & 0x1FF));
            if ( (v9 & 0x20) != 0 )
              v5 |= 0x20uLL;
            if ( (v9 & 0x42) != 0 )
              v5 |= 0x42uLL;
          }
        }
        RtlSetBitsEx((__int64)&qword_14034FBA0, (v5 >> 21) & 0x7FFFFFF, 1uLL);
      }
      v2 += 8LL;
      v4 += 8LL;
    }
    while ( v2 < v3 );
  }
}
