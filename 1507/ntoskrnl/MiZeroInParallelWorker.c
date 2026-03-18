/*
 * XREFs of MiZeroInParallelWorker @ 0x1400757C8
 * Callers:
 *     MiZeroInParallel @ 0x140075AD4 (MiZeroInParallel.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     KeSetIdealProcessorThreadEx @ 0x140118AF4 (KeSetIdealProcessorThreadEx.c)
 *     KeSignalGate @ 0x140127FF0 (KeSignalGate.c)
 *     KeZeroPages @ 0x140186BF0 (KeZeroPages.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

void __fastcall MiZeroInParallelWorker(volatile signed __int32 *StartContext)
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int32 *v2; // r14
  __int64 v3; // r12
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  KPRIORITY v7; // ebp
  _QWORD *v8; // rdi
  __int64 v9; // r14
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // ebp
  __int64 *v13; // r15
  int ProtectionPfnCompatible; // eax
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 *v20; // rax
  _QWORD *v21; // r12
  unsigned __int64 v22; // r8
  __int64 *v23; // rax
  unsigned __int64 v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+28h] [rbp-70h]
  struct _KTHREAD *v26; // [rsp+30h] [rbp-68h]
  _QWORD *v27; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-58h]
  int v30; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v31; // [rsp+B0h] [rbp+18h]
  KPRIORITY v32; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v2 = StartContext;
  v3 = *((_QWORD *)StartContext + 1);
  v4 = 0LL;
  v5 = *((_QWORD *)StartContext + 3);
  v6 = (unsigned int)dword_14034EBBC;
  v25 = v3;
  v26 = CurrentThread;
  v32 = KeSetPriorityThread(CurrentThread, *StartContext);
  v7 = v32;
  if ( (_DWORD)v6 )
  {
    v8 = (_QWORD *)(v5 + 16);
    v28 = v6;
    v9 = (unsigned int)v6;
    v27 = v8;
    do
    {
      if ( !*((_DWORD *)v8 - 4) && _InterlockedIncrement((volatile signed __int32 *)v8 - 4) == 1 )
      {
        v10 = *((_DWORD *)v8 - 3);
        v31 = v10;
        v30 = v10;
        if ( v10 != -1 )
        {
          v11 = KeSetIdealProcessorThreadEx(CurrentThread, v10, &v30);
          v12 = v30;
          if ( v11 < 0 )
            v12 = -1;
          v31 = v12;
          v30 = v12;
        }
        v13 = (__int64 *)*v8;
        if ( !v4 )
        {
          ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, *v8);
          if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(
                               0LL,
                               MmProtectToPteMask[ProtectionPfnCompatible] | 0xFFFFFFFFF021LL,
                               v15) )
            v16 |= 0x100uLL;
          v4 = v16 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
        }
        do
        {
          v17 = *(v8 - 1);
          if ( v17 > 0x4000 )
            v17 = 0x4000LL;
          while ( 1 )
          {
            v18 = MiReservePtes(&qword_14034FC70, (unsigned int)v17);
            v19 = v18;
            if ( v18 )
              break;
            v17 >>= 1;
            if ( !v17 )
            {
              MiZeroPhysicalPage((__int64)(v13 + 0xB000000000LL) / 48, 3LL, *((unsigned __int8 *)v13 + 34) >> 6);
              v20 = (__int64 *)*v13;
              *v13 = v3;
              v13 = v20;
              --*(v8 - 1);
              goto LABEL_25;
            }
          }
          v21 = (_QWORD *)v18;
          if ( v17 )
          {
            v22 = v17;
            v24 = v17;
            do
            {
              v4 ^= (v4 ^ (((__int64)(v13 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
              *v21 = v4;
              if ( (unsigned __int64)(v21 + 0x12090482600LL) <= 0x7F8 )
              {
                MiWritePteShadow(v21, v4);
                v22 = v24;
              }
              v23 = (__int64 *)*v13;
              ++v21;
              --v22;
              *v13 = v25;
              v24 = v22;
              v13 = v23;
            }
            while ( v22 );
            v8 = v27;
          }
          *(v8 - 1) -= v17;
          KeZeroPages(v19 << 25 >> 16, v17 << 12);
          MiReleasePtes(&qword_14034FC70, v19, (unsigned int)v17);
          v3 = v25;
LABEL_25:
          ;
        }
        while ( v13 != (__int64 *)0xFFFFFFFFFLL );
        v9 = v28;
        CurrentThread = v26;
        if ( v31 != -1 )
          KeSetIdealProcessorThreadEx(v26, v31, 0LL);
      }
      v8 += 3;
      --v9;
      v27 = v8;
      v28 = v9;
    }
    while ( v9 );
    v2 = StartContext;
    v7 = v32;
  }
  if ( _InterlockedExchangeAdd(v2 + 4, 0xFFFFFFFF) == 1 )
    KeSignalGate(v2 + 8, 1LL);
  KeSetPriorityThread(CurrentThread, v7);
}
