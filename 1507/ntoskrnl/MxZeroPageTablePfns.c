/*
 * XREFs of MxZeroPageTablePfns @ 0x1407C7B48
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x1407C47D0 (MiInitializePfnsForValidMappings.c)
 *     MxZeroPageTablePfns @ 0x1407C7B48 (MxZeroPageTablePfns.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MxZeroPageTablePfns @ 0x1407C7B48 (MxZeroPageTablePfns.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MxZeroPageTablePfns(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // r11
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  void *v13; // rsi
  __int64 ContainingPageTable; // rax
  __int64 v15; // r11
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+50h] [rbp+18h]
  __int64 v18; // [rsp+58h] [rbp+20h]

  if ( a1 <= a2 )
  {
    v18 = a4;
    v17 = a3;
    v4 = a1;
    v6 = 0x58000000000LL;
    do
    {
      v7 = *(_QWORD *)v4;
      if ( v4 + 0x90482413000LL <= 0x7F8
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
      v16 = v7;
      if ( (v7 & 1) != 0 )
      {
        v10 = v7;
        if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8
          && (unsigned int)MiPteHasShadow()
          && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
        {
          v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v11 )
          {
            v12 = *(_QWORD *)(v11 + 8 * (((unsigned __int64)&v16 >> 3) & 0x1FF));
            if ( (v12 & 0x20) != 0 )
              v10 |= 0x20uLL;
            if ( (v12 & 0x42) != 0 )
              v10 |= 0x42uLL;
          }
        }
        v13 = (void *)(48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - v6);
        ContainingPageTable = MiGetContainingPageTable(v4);
        memset((void *)(48 * ContainingPageTable - v15), 0, 0x30uLL);
        if ( v17 != 1 || (v7 & 0x80u) == 0LL )
        {
          memset(v13, 0, 0x30uLL);
          if ( v4 != 0xFFFFF6FB7DBEDF68uLL && v17 > 1 )
            MxZeroPageTablePfns((__int64)(v4 << 25) >> 16, ((__int64)(v4 << 25) >> 16) + 4088, v17 - 1, v18);
        }
        v6 = 0x58000000000LL;
      }
      v4 += 8LL;
    }
    while ( v4 <= a2 );
  }
}
