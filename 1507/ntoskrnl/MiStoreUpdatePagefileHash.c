/*
 * XREFs of MiStoreUpdatePagefileHash @ 0x14013B86C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiStoreUpdatePagefileHash(_KPROCESS *Process, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  int v5; // ebp
  __int64 *v6; // r13
  unsigned int v7; // edx
  __int64 v8; // r10
  int v9; // r12d
  unsigned int v10; // edi
  unsigned int v11; // r15d
  __int64 v12; // rsi
  int v13; // r14d
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 CurrentIrql; // r9
  unsigned int v17; // ebx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v24; // [rsp+90h] [rbp+8h]
  unsigned int v25; // [rsp+98h] [rbp+10h]

  result = (__int64)&retaddr;
  v5 = 0;
  v6 = (__int64 *)(a3 + 48);
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  v25 = 0;
  v10 = 0;
  v24 = 0LL;
  v11 = 16;
  v12 = a3;
  if ( a4 )
  {
    do
    {
      result = *v6;
      if ( *v6 == qword_14034F6F8 )
      {
        v13 = 16;
        LODWORD(v14) = v9;
      }
      else
      {
        v15 = 48 * result - 0x58000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        v22 = CurrentIrql;
        __writecr8(2uLL);
        v17 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v17);
            Process = (_KPROCESS *)0x8000000000000000LL;
          }
          while ( *(__int64 *)(v15 + 24) < 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
          v8 = v24;
          CurrentIrql = v22;
        }
        v18 = v15 + 16;
        v19 = *(_QWORD *)(v15 + 16);
        v13 = (unsigned __int8)HIBYTE(*(_WORD *)(v15 + 16)) >> 4;
        if ( (unsigned __int64)(v15 + 0x90482413010LL) <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, v19)
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v20 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v20 )
          {
            v18 = (v18 >> 3) & 0x1FF;
            v21 = *(_QWORD *)(v20 + 8 * v18);
            if ( (v21 & 0x20) != 0 )
              v19 |= 0x20uLL;
            if ( (v21 & 0x42) != 0 )
              v19 |= 0x42uLL;
          }
        }
        if ( (v19 & 4) != 0 )
          v14 = (unsigned __int64)MiReverseSwizzleInvalidPte(v19, v19, v18, CurrentIrql) >> 32;
        else
          LODWORD(v14) = 0;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = (unsigned __int8)CurrentIrql;
        __writecr8((unsigned __int8)CurrentIrql);
        if ( !v8 )
        {
          result = (__int64)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v15 + 40)) >> 8) & 0x3FF);
          v8 = result;
          v24 = result;
        }
        v12 = a3;
        v7 = v25;
      }
      if ( v11 == v13 && (_DWORD)v14 == v9 )
      {
        ++v5;
      }
      else
      {
        if ( v11 != 16 )
          result = MiMapPageFileHash(*(_QWORD *)(v8 + 8LL * v11 + 5344), v12, v10 - v5, v7, v5);
        v11 = v13;
        v25 = v14;
        v7 = v14;
        v9 = v14;
        v5 = 1;
      }
      v8 = v24;
      ++v10;
      ++v6;
      ++v9;
    }
    while ( v10 < a4 );
    if ( v11 != 16 )
      return MiMapPageFileHash(*(_QWORD *)(v24 + 8LL * v11 + 5344), v12, v10 - v5, v7, v5);
  }
  return result;
}
