/*
 * XREFs of MiReleaseLargePteMappings @ 0x14014C0D4
 * Callers:
 *     MiEmptyPteBins @ 0x140012CD4 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x1400B1C20 (MiInsertCachedPte.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     MiUnmapLargePages @ 0x14015D84C (MiUnmapLargePages.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 */

__int64 __fastcall MiReleaseLargePteMappings(_KPROCESS *Process, unsigned int *a2, BOOL a3)
{
  __int64 v3; // r14
  __int64 v5; // r11
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 PteTimeStamp; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r10
  unsigned int v18; // ebp
  unsigned __int64 i; // rdi
  bool v20; // al
  signed __int32 v22[22]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v23; // [rsp+60h] [rbp+8h]

  v3 = a2[1];
  v5 = 0x90482413000LL;
  v6 = (((unsigned __int64)Process->Header.WaitListHead.Blink >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v7 = v6 + 8 * v3;
    v8 = *(_QWORD *)v7;
    if ( v7 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, a2)
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v9 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 8 * ((v7 >> 3) & 0x1FF));
        if ( (v10 & 0x20) != 0 )
          v8 |= 0x20uLL;
        if ( (v10 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
    }
    if ( (v8 & 0xF000) == 0x1000 )
    {
      PteTimeStamp = 1LL;
    }
    else
    {
      v12 = *(_QWORD *)(v7 + 8);
      if ( v7 + 8 + v5 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v12)
        && (v12 & 1) != 0
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 8 * ((v13 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v12 |= 0x20uLL;
          if ( (v15 & 0x42) != 0 )
            v12 |= 0x42uLL;
        }
      }
      PteTimeStamp = (unsigned int)MiGetPteTimeStamp(v12);
    }
    v3 = (unsigned int)MiGetPteTimeStamp(v8);
    v23 = PteTimeStamp + v17;
    v18 = 0;
    for ( i = (__int64)(v7 << 25) >> 16 << 25 >> 16; v18 < PteTimeStamp; v7 += 8LL )
    {
      *(_QWORD *)v7 = 0LL;
      if ( v7 + v16 <= 0x7F8 )
      {
        MiWritePteShadow(v7, 0LL);
        v16 = 0x90482413000LL;
      }
      ++v18;
    }
    if ( a3 )
    {
      MiUnmapLargePages(i, PteTimeStamp << 21, 9LL);
      if ( !v3 )
        return v23;
      _InterlockedOr(v22, 0);
      Process = (_KPROCESS *)*a2;
      v20 = (unsigned int)(KiTbFlushTimeStamp - (_DWORD)Process) <= 2
         && (((unsigned __int8)Process & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - (_DWORD)Process) < 2);
      a3 = v20;
    }
    else
    {
      MiReturnSystemVa(i, (PteTimeStamp << 21) + i, 15, 0LL);
    }
    v5 = 0x90482413000LL;
  }
  while ( v3 );
  return v23;
}
