/*
 * XREFs of KeCheckForTimer @ 0x1401C3440
 * Callers:
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x140212DB8 (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VerifierKeInitializeTimerEx @ 0x1406C604C (VerifierKeInitializeTimerEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

ULONG __fastcall KeCheckForTimer(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG result; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned __int64 v5; // r8
  ULONG v6; // ebp
  ULONG v7; // r13d
  __int64 *v8; // r15
  __int64 v9; // rdx
  unsigned int v10; // r12d
  volatile signed __int32 *v11; // rbx
  _QWORD **v12; // r14
  _QWORD *v13; // rdx
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // rax
  int v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 CurrentIrql; // [rsp+88h] [rbp+20h]

  result = KeTimerCheckFlags;
  if ( (KeTimerCheckFlags & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 + a2;
    result = KeQueryActiveProcessorCountEx(0xFFFFu);
    v6 = 0;
    v7 = result;
    if ( result )
    {
      v8 = KiProcessorBlock;
      v9 = 2LL;
      do
      {
        v10 = 0;
        v11 = (volatile signed __int32 *)(*v8 + 14336);
        v12 = (_QWORD **)(*v8 + 14344);
        do
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v16 = 0;
          while ( _interlockedbittestandset64(v11, 0LL) )
          {
            do
              KeYieldProcessorEx(&v16, v9, v5);
            while ( *(_QWORD *)v11 );
          }
          v13 = *v12;
          if ( *v12 != v12 )
          {
            v14 = BugCheckParameter3 - 64;
            do
            {
              v15 = (ULONG_PTR)(v13 - 4);
              v13 = (_QWORD *)*v13;
              if ( v15 > v14 && v15 < BugCheckParameter4 )
                KeBugCheckEx(0xC7u, 0LL, v15, BugCheckParameter3, BugCheckParameter4);
              v5 = KiWaitAlways ^ _byteswap_uint64(v15 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v15 + 48), KiWaitNever));
              if ( v5 )
              {
                if ( v5 > v14 && v5 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 1uLL, v5, BugCheckParameter3, BugCheckParameter4);
                v5 = *(_QWORD *)(v5 + 24);
                if ( v5 >= BugCheckParameter3 && v5 < BugCheckParameter4 )
                  KeBugCheckEx(0xC7u, 2uLL, v5, BugCheckParameter3, BugCheckParameter4);
              }
            }
            while ( v13 != v12 );
          }
          _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
          result = (unsigned __int8)CurrentIrql;
          __writecr8((unsigned __int8)CurrentIrql);
          v12 += 4;
          ++v10;
          v11 += 8;
          v9 = 2LL;
        }
        while ( v10 < 0x100 );
        ++v6;
        ++v8;
      }
      while ( v6 < v7 );
    }
  }
  return result;
}
