/*
 * XREFs of ExpUpdateDebugInfo @ 0x1406F051C
 * Callers:
 *     ExHandleLogBadReference @ 0x1402631AC (ExHandleLogBadReference.c)
 *     ExCreateHandleEx @ 0x140424CD0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 *     ExDestroyHandle @ 0x140505200 (ExDestroyHandle.c)
 *     ExDupHandleTable @ 0x1405237E0 (ExDupHandleTable.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14001D4B0 (RtlWalkFrameChain.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExReferenceHandleDebugInfo @ 0x14055BDB0 (ExReferenceHandleDebugInfo.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406EFF48 (ExDereferenceHandleDebugInfo.c)
 */

void __fastcall ExpUpdateDebugInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  __int64 v6; // r15
  volatile signed __int32 *v7; // rax
  __int64 v8; // r9
  volatile signed __int32 *v9; // rbx
  char v10; // r14
  ULONG_PTR v11; // r14
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // cl
  int v15; // eax
  int v16; // eax
  unsigned int v17; // r11d
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // rdx
  volatile signed __int32 *v23; // r8
  volatile signed __int32 *v24; // rax
  unsigned int v25; // edx
  int v26; // eax
  volatile signed __int32 *v27; // r15
  ULONG v28; // esi
  ULONG v29; // esi
  ULONG v30; // eax
  unsigned __int8 v31; // r14
  signed __int32 v32; // eax
  unsigned __int8 v33; // [rsp+28h] [rbp-50h]

  v4 = a4;
  v6 = a1;
  v7 = ExReferenceHandleDebugInfo(a1, a2, a3, a4);
  v9 = v7;
  if ( v7 )
  {
    v10 = 0;
    if ( (v7[2] & 3) != 0 )
    {
      v11 = (ULONG_PTR)(v7 + 4);
      v12 = KeAbPreAcquire((ULONG_PTR)(v7 + 4), 0LL, 0LL, v8);
      v13 = v12;
      CurrentIrql = KeGetCurrentIrql();
      v33 = CurrentIrql;
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)v11, 0) )
      {
        ExpAcquireFastMutexContended(v11, v12);
        CurrentIrql = v33;
      }
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v11 + 48) = CurrentIrql;
      v10 = 1;
    }
    v15 = *((_DWORD *)v9 + 2);
    if ( (v15 & 1) != 0 )
    {
      *((_DWORD *)v9 + 2) = v15 & 0x3FFFFFFE | 0x80000000;
      *((_DWORD *)v9 + 18) = 0;
      memset((void *)(v9 + 20), 0, 160LL * *((unsigned int *)v9 + 1) + 80);
    }
    v16 = *((_DWORD *)v9 + 2);
    if ( (v16 & 2) != 0 && v4 == 2 )
    {
      v17 = *((_DWORD *)v9 + 18);
      v18 = v17;
      if ( (v16 & 0x40000000) != 0 )
        v18 = *((_DWORD *)v9 + 1);
      v19 = 1;
      if ( v18 )
      {
        v20 = *((_DWORD *)v9 + 1);
        while ( 1 )
        {
          v21 = v19 % v20;
          if ( v9[40 * (unsigned int)v21 + 26] == 1 && *(_QWORD *)&v9[40 * v21 + 24] == a3 )
            break;
          if ( ++v19 > v18 )
            goto LABEL_29;
        }
        *((_DWORD *)v9 + 18) = v17 - 1;
        v22 = (v17 - 1) % v20;
        if ( (_DWORD)v22 )
        {
          v23 = &v9[40 * (v19 % v20)];
          v24 = &v9[40 * v22];
          *((_OWORD *)v23 + 5) = *((_OWORD *)v24 + 5);
          *((_OWORD *)v23 + 6) = *((_OWORD *)v24 + 6);
          *((_OWORD *)v23 + 7) = *((_OWORD *)v24 + 7);
          *((_OWORD *)v23 + 8) = *((_OWORD *)v24 + 8);
          *((_OWORD *)v23 + 9) = *((_OWORD *)v24 + 9);
          *((_OWORD *)v23 + 10) = *((_OWORD *)v24 + 10);
          *((_OWORD *)v23 + 11) = *((_OWORD *)v24 + 11);
          *((_OWORD *)v23 + 12) = *((_OWORD *)v24 + 12);
          *((_OWORD *)v23 + 13) = *((_OWORD *)v24 + 13);
          *((_OWORD *)v23 + 14) = *((_OWORD *)v24 + 14);
        }
      }
    }
    else
    {
      v25 = (unsigned int)_InterlockedIncrement(v9 + 18) % *((_DWORD *)v9 + 1);
      if ( !v25 )
      {
        v26 = *((_DWORD *)v9 + 2) | 0x40000000;
        *((_DWORD *)v9 + 2) = v26;
        if ( (v26 & 4) != 0 )
          __debugbreak();
      }
      v27 = &v9[40 * v25 + 20];
      *(_OWORD *)v27 = *(_OWORD *)(a2 + 1576);
      *((_QWORD *)v27 + 2) = a3;
      *((_DWORD *)v27 + 6) = v4;
      v28 = RtlWalkFrameChain((PVOID *)v27 + 4, 0x10u, 0x300u);
      if ( v28 <= 3 )
        v29 = 0;
      else
        v29 = v28 - 3;
      v30 = RtlWalkFrameChain((PVOID *)&v27[2 * v29 + 8], 16 - v29, 1u);
      memset((void *)&v27[2 * v30 + 8 + 2 * v29], 0, 8LL * (16 - (v30 + v29)));
      v6 = a1;
    }
LABEL_29:
    if ( v10 )
    {
      *((_QWORD *)v9 + 3) = 0LL;
      v31 = *((_BYTE *)v9 + 64);
      v32 = _InterlockedCompareExchange(v9 + 4, 1, 0);
      if ( v32 )
        ExpReleaseFastMutexContended(v9 + 4, v32);
      __writecr8(v31);
      KeAbPostRelease((ULONG_PTR)(v9 + 4));
    }
    ExDereferenceHandleDebugInfo(v6, v9);
  }
}
