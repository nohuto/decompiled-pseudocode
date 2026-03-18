/*
 * XREFs of MiZeroInParallelWorker @ 0x1400BC39C
 * Callers:
 *     MiZeroInParallel @ 0x1400BC21C (MiZeroInParallel.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1400956F8 (KeSetIdealProcessorThreadEx.c)
 *     KeSignalGate @ 0x1400E9410 (KeSignalGate.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     KeZeroPages @ 0x140157480 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiZeroInParallelWorker(volatile signed __int32 *StartContext)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int32 *v2; // r14
  __int64 v3; // r12
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // r8
  KPRIORITY v8; // ebp
  _QWORD *v9; // rdi
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // ebp
  __int64 *v13; // r15
  int ProtectionPfnCompatible; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // r13
  __int64 *v19; // rax
  _QWORD *v20; // r12
  unsigned __int64 v21; // r14
  __int64 *v22; // rax
  bool v23; // zf
  __int64 v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+28h] [rbp-70h]
  _QWORD *v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  _QWORD *v28; // [rsp+40h] [rbp-58h]
  int v30; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+18h]
  KPRIORITY v32; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v2 = StartContext;
  v3 = *((_QWORD *)StartContext + 1);
  v4 = 0LL;
  v5 = *((_QWORD *)StartContext + 3);
  v6 = (unsigned int)dword_1402FE70C;
  v24 = v3;
  v25 = (__int64)CurrentThread;
  v32 = KeSetPriorityThread(CurrentThread, *StartContext);
  v8 = v32;
  if ( (_DWORD)v6 )
  {
    v9 = (_QWORD *)(v5 + 16);
    v27 = v6;
    v26 = v9;
    do
    {
      if ( !*((_DWORD *)v9 - 4) && _InterlockedIncrement((volatile signed __int32 *)v9 - 4) == 1 )
      {
        v10 = *((_DWORD *)v9 - 3);
        v31 = v10;
        v30 = v10;
        if ( v10 != -1 )
        {
          v11 = KeSetIdealProcessorThreadEx((__int64)CurrentThread, v10, &v30);
          v12 = v30;
          if ( v11 < 0 )
            v12 = -1;
          v31 = v12;
          v30 = v12;
        }
        v13 = (__int64 *)*v9;
        if ( !v4 )
        {
          ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, *v9, v7);
          v4 = MiMakeValidKernelPte(-1LL, ProtectionPfnCompatible, 0LL, v15) | 0x42;
        }
        do
        {
          v16 = *(v9 - 1);
          if ( v16 > 0x4000 )
            v16 = 0x4000LL;
          while ( 1 )
          {
            v17 = MiReservePtes((__int64)&qword_1402FF7B0, v16, v7);
            v28 = (_QWORD *)v17;
            v18 = v17;
            if ( v17 )
              break;
            v16 >>= 1;
            if ( !v16 )
            {
              MiZeroPhysicalPage((__int64)(v13 + 0xB000000000LL) / 48, 3LL, *((unsigned __int8 *)v13 + 34) >> 6);
              v19 = (__int64 *)*v13;
              *v13 = v3;
              v13 = v19;
              --*(v9 - 1);
              goto LABEL_23;
            }
          }
          v20 = (_QWORD *)v17;
          if ( v16 )
          {
            v21 = v16;
            do
            {
              v4 ^= (v4 ^ (((__int64)(v13 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
              *v20 = v4;
              if ( (unsigned int)MiPteInShadowRange(v20) )
                MiWritePteShadow(v20, v4);
              v22 = (__int64 *)*v13;
              ++v20;
              *v13 = v24;
              v13 = v22;
              --v21;
            }
            while ( v21 );
            v9 = v26;
            v18 = (ULONG_PTR)v28;
          }
          *(v9 - 1) -= v16;
          KeZeroPages((__int64)(v18 << 25) >> 16, v16 << 12);
          MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)v18, v16);
          v3 = v24;
LABEL_23:
          ;
        }
        while ( v13 != (__int64 *)0xFFFFFFFFFLL );
        CurrentThread = (struct _KTHREAD *)v25;
        if ( v31 != -1 )
          KeSetIdealProcessorThreadEx(v25, v31, 0LL);
      }
      v9 += 3;
      v23 = v27-- == 1;
      v26 = v9;
    }
    while ( !v23 );
    v2 = StartContext;
    v8 = v32;
  }
  if ( _InterlockedExchangeAdd(v2 + 4, 0xFFFFFFFF) == 1 )
    KeSignalGate(v2 + 8, 1LL);
  KeSetPriorityThread(CurrentThread, v8);
}
