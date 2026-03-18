/*
 * XREFs of KeCheckForTimer @ 0x1401FF398
 * Callers:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VerifierKeInitializeTimerEx @ 0x140748358 (VerifierKeInitializeTimerEx.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall KeCheckForTimer(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // r13d
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned int v6; // r15d
  __int64 *v7; // r12
  volatile signed __int32 *v8; // rbx
  _QWORD **v9; // r14
  unsigned int v10; // ebp
  _QWORD *v11; // rdx
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // r8
  ULONG_PTR v15; // r8
  unsigned int v16; // [rsp+80h] [rbp+18h]
  unsigned __int8 CurrentIrql; // [rsp+88h] [rbp+20h]

  result = (unsigned int)KeTimerCheckFlags;
  if ( (KeTimerCheckFlags & 1) != 0 )
  {
    v4 = KeNumberProcessors_0;
    BugCheckParameter4 = BugCheckParameter3 + a2;
    v6 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v7 = KiProcessorBlock;
      do
      {
        v16 = 0;
        v8 = (volatile signed __int32 *)(*v7 + 14336);
        v9 = (_QWORD **)(*v7 + 14344);
        do
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v10 = 0;
          while ( _interlockedbittestandset64(v8, 0LL) )
          {
            do
            {
              if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v10);
            }
            while ( *(_QWORD *)v8 );
          }
          v11 = *v9;
          if ( *v9 != v9 )
          {
            v12 = BugCheckParameter3 - 64;
            do
            {
              v13 = (ULONG_PTR)(v11 - 4);
              v11 = (_QWORD *)*v11;
              if ( v13 > v12 && v13 < BugCheckParameter4 )
                KeBugCheckEx(0xC7u, 0LL, v13, BugCheckParameter3, BugCheckParameter4);
              v14 = KiWaitAlways ^ _byteswap_uint64(v13 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v13 + 48), KiWaitNever));
              if ( v14 )
              {
                if ( v14 > v12 && v14 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 1uLL, v14, BugCheckParameter3, BugCheckParameter4);
                v15 = *(_QWORD *)(v14 + 24);
                if ( v15 >= BugCheckParameter3 && v15 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 2uLL, v15, BugCheckParameter3, BugCheckParameter4);
              }
            }
            while ( v11 != v9 );
          }
          _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
          result = CurrentIrql;
          __writecr8(CurrentIrql);
          v9 += 4;
          v8 += 8;
          ++v16;
        }
        while ( v16 < 0x100 );
        ++v6;
        ++v7;
      }
      while ( v6 < v4 );
    }
  }
  return result;
}
