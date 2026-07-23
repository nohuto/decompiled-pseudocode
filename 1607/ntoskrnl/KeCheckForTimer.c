/*
 * XREFs of KeCheckForTimer @ 0x1401D346C
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x14022CEAC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VerifierKeInitializeTimerEx @ 0x14071209C (VerifierKeInitializeTimerEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

ULONG __fastcall KeCheckForTimer(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG result; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG v5; // ebp
  ULONG v6; // r13d
  __int64 *v7; // r15
  unsigned int v8; // r12d
  volatile signed __int32 *v9; // rbx
  _QWORD **v10; // r14
  _QWORD *v11; // rdx
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // r8
  ULONG_PTR v15; // r8
  int v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 CurrentIrql; // [rsp+88h] [rbp+20h]

  result = KeTimerCheckFlags;
  if ( (KeTimerCheckFlags & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 + a2;
    result = KeQueryActiveProcessorCountEx(0xFFFFu);
    v5 = 0;
    v6 = result;
    if ( result )
    {
      v7 = KiProcessorBlock;
      do
      {
        v8 = 0;
        v9 = (volatile signed __int32 *)(*v7 + 14336);
        v10 = (_QWORD **)(*v7 + 14344);
        do
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v16 = 0;
          while ( _interlockedbittestandset64(v9, 0LL) )
          {
            do
              KeYieldProcessorEx(&v16);
            while ( *(_QWORD *)v9 );
          }
          v11 = *v10;
          if ( *v10 != v10 )
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
            while ( v11 != v10 );
          }
          _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
          result = (unsigned __int8)CurrentIrql;
          __writecr8((unsigned __int8)CurrentIrql);
          v10 += 4;
          ++v8;
          v9 += 8;
        }
        while ( v8 < 0x100 );
        ++v5;
        ++v7;
      }
      while ( v5 < v6 );
    }
  }
  return result;
}
