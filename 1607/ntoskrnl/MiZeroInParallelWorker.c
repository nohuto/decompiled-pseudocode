/*
 * XREFs of MiZeroInParallelWorker @ 0x1401078C0
 * Callers:
 *     MiZeroInParallel @ 0x14010A05C (MiZeroInParallel.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400C8244 (KeSetIdealProcessorThreadEx.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     KeZeroPages @ 0x1401623C0 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

void __fastcall MiZeroInParallelWorker(volatile signed __int32 *StartContext, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int32 *v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rdi
  _QWORD **v8; // rbx
  int v9; // ebp
  int v10; // eax
  int v11; // ebp
  _QWORD *v12; // r14
  unsigned __int64 v13; // rdi
  ULONG_PTR v14; // rax
  __int64 v15; // r13
  _QWORD *v16; // rax
  _QWORD *v17; // r15
  unsigned __int64 v18; // rsi
  int ProtectionPfnCompatible; // eax
  __int64 v20; // rdx
  unsigned __int64 ValidKernelPte; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  bool v25; // zf
  __int64 v26; // [rsp+20h] [rbp-68h]
  _QWORD **v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+98h] [rbp+10h] BYREF
  int v32; // [rsp+A0h] [rbp+18h]
  KPRIORITY Priority; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = StartContext;
  v5 = *((_QWORD *)StartContext + 1);
  v6 = *((_QWORD *)StartContext + 3);
  v7 = *((unsigned int *)StartContext + 5);
  v26 = v5;
  v29 = (__int64)CurrentThread;
  if ( *StartContext == -1 )
    Priority = -1;
  else
    Priority = KeSetPriorityThread(CurrentThread, *StartContext);
  if ( (_DWORD)v7 )
  {
    v8 = (_QWORD **)(v6 + 16);
    v28 = v7;
    v27 = v8;
    do
    {
      if ( !*((_DWORD *)v8 - 4) && _InterlockedIncrement((volatile signed __int32 *)v8 - 4) == 1 )
      {
        v9 = *((_DWORD *)v8 - 3);
        v32 = v9;
        v31 = v9;
        if ( v9 != -1 )
        {
          v10 = KeSetIdealProcessorThreadEx((__int64)CurrentThread, v9, &v31);
          v11 = v31;
          if ( v10 < 0 )
            v11 = -1;
          v32 = v11;
          v31 = v11;
        }
        v12 = *v8;
        do
        {
          v13 = (unsigned __int64)*(v8 - 1);
          if ( v13 > 0x4000 )
            v13 = 0x4000LL;
          while ( 1 )
          {
            v14 = MiReservePtes((__int64)&qword_1403278B0, (unsigned int)v13, a3);
            v15 = v14;
            if ( v14 )
              break;
            v13 >>= 1;
            if ( !v13 )
            {
              MiZeroPhysicalPage((__int64)(v12 + 0xB000000000LL) / 48);
              v16 = (_QWORD *)*v12;
              *v12 = v5;
              v12 = v16;
              *(v8 - 1) = (_QWORD *)((char *)*(v8 - 1) - 1);
              goto LABEL_25;
            }
          }
          v17 = (_QWORD *)v14;
          if ( v13 )
          {
            v18 = v13;
            do
            {
              ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v12);
              ValidKernelPte = MiMakeValidKernelPte(
                                 (v20 + 0x58000000000LL) / 48,
                                 ProtectionPfnCompatible,
                                 (unsigned __int64)v17);
              *v17 = ValidKernelPte | 0x42;
              if ( (unsigned int)MiPteInShadowRange(v17, ValidKernelPte | 0x42) )
                MiWritePteShadow(v23, v22);
              v24 = (_QWORD *)*v12;
              ++v17;
              *v12 = v26;
              v12 = v24;
              --v18;
            }
            while ( v18 );
            v8 = v27;
          }
          *(v8 - 1) = (_QWORD *)((char *)*(v8 - 1) - v13);
          KeZeroPages(v15 << 25 >> 16, v13 << 12);
          MiReleasePtes((__int64)&qword_1403278B0, v15, v13);
          v5 = v26;
LABEL_25:
          ;
        }
        while ( v12 != (_QWORD *)0xFFFFFFFFFLL );
        CurrentThread = (struct _KTHREAD *)v29;
        if ( v32 != -1 )
          KeSetIdealProcessorThreadEx(v29, v32, 0LL);
      }
      v8 += 3;
      v25 = v28-- == 1;
      v27 = v8;
    }
    while ( !v25 );
    v4 = StartContext;
  }
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)(v4 + 8), 1u);
  if ( Priority != -1 )
    KeSetPriorityThread(CurrentThread, Priority);
}
