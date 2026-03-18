/*
 * XREFs of PnpBuildCmResourceLists @ 0x14059C214
 * Callers:
 *     PnpAllocateResources @ 0x14045C42C (PnpAllocateResources.c)
 *     PnpRebalance @ 0x140680EDC (PnpRebalance.c)
 *     PnpReallocateResources @ 0x140695AF8 (PnpReallocateResources.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpDetermineResourceListSize @ 0x14045D228 (PnpDetermineResourceListSize.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14059C324 (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpBuildCmResourceList @ 0x14059CAA8 (PnpBuildCmResourceList.c)
 */

void __fastcall PnpBuildCmResourceLists(unsigned __int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  unsigned __int64 v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // ecx
  _DWORD *v8; // rbx
  int v9; // eax
  _DWORD *v10; // r14
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int8 CurrentIrql; // bp
  void *v21; // rcx
  void *v22; // rcx
  unsigned __int8 v23; // bl
  signed __int32 v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rbp
  unsigned __int8 v28; // r12
  __int64 v29; // rax
  unsigned __int8 v30; // si
  signed __int32 v31; // eax
  unsigned int v33; // [rsp+68h] [rbp+10h]

  v5 = a1;
  if ( a3 )
  {
    v15 = a1;
    if ( a1 < a2 )
    {
      do
      {
        if ( *(_QWORD *)v15 )
          v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 312LL) + 40LL);
        else
          v16 = 0LL;
        v17 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, a4);
        v18 = v17;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v17);
        if ( v18 )
          *(_BYTE *)(v18 + 26) |= 1u;
        qword_14034AA48 = (__int64)KeGetCurrentThread();
        dword_14034AA70 = CurrentIrql;
        v21 = *(void **)(v16 + 416);
        if ( v21 )
        {
          ExFreePoolWithTag(v21, 0);
          *(_QWORD *)(v16 + 416) = 0LL;
        }
        v22 = *(void **)(v16 + 424);
        if ( v22 )
        {
          ExFreePoolWithTag(v22, 0);
          *(_QWORD *)(v16 + 424) = 0LL;
        }
        v23 = dword_14034AA70;
        qword_14034AA48 = 0LL;
        v24 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
        if ( v24 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v24);
        __writecr8(v23);
        KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
        v15 += 64LL;
      }
      while ( v15 < a2 );
      v5 = a1;
    }
  }
  v6 = -1;
  do
  {
    v7 = v6;
    v6 = 0;
    v33 = v7;
    if ( v5 >= a2 )
      break;
    v8 = (_DWORD *)(v5 + 56);
    do
    {
      v9 = *(v8 - 12);
      *((_QWORD *)v8 - 2) = 0LL;
      if ( (v9 & 0x28) == 0 )
      {
        if ( (v9 & 0x10) != 0 )
        {
          *v8 = -1073741823;
        }
        else if ( v7 == -1 || *v8 == -1073741267 )
        {
          v10 = v8 - 14;
          *v8 = 0;
          PnpBuildCmResourceList(v8 - 14, 1LL);
          if ( *v8 == -1073741267 )
          {
            ++v6;
          }
          else
          {
            if ( a3 )
            {
              if ( *(_QWORD *)v10 )
                v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 312LL) + 40LL);
              else
                v25 = 0LL;
              if ( (*(v8 - 12) & 0x400) != 0 )
                PipClearDevNodeFlags(v25, 3072);
              v26 = KeAbPreAcquire((ULONG_PTR)&PiResourceListLock, 0LL, 0LL, v11);
              v27 = v26;
              v28 = KeGetCurrentIrql();
              __writecr8(1uLL);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiResourceListLock, 0) )
                ExpAcquireFastMutexContended((ULONG_PTR)&PiResourceListLock, v26);
              if ( v27 )
                *(_BYTE *)(v27 + 26) |= 1u;
              qword_14034AA48 = (__int64)KeGetCurrentThread();
              dword_14034AA70 = v28;
              v29 = *((_QWORD *)v8 - 2);
              *(_QWORD *)(v25 + 416) = v29;
              if ( !v29 )
                PipSetDevNodeFlags(v25, 256);
              *(_QWORD *)(v25 + 424) = *((_QWORD *)v8 - 1);
              v30 = dword_14034AA70;
              qword_14034AA48 = 0LL;
              v31 = _InterlockedCompareExchange((volatile signed __int32 *)&PiResourceListLock, 1, 0);
              if ( v31 )
                ExpReleaseFastMutexContended((volatile signed __int32 *)&PiResourceListLock, v31);
              __writecr8(v30);
              KeAbPostRelease((ULONG_PTR)&PiResourceListLock);
            }
            v12 = *((_QWORD *)v8 - 2);
            if ( v12 )
            {
              if ( *(_QWORD *)v10 )
                v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 312LL) + 40LL);
              else
                v13 = 0LL;
              v14 = PnpDetermineResourceListSize(*((_DWORD **)v8 - 2));
              IopWriteAllocatedResourcesToRegistry(v13, v12, v14);
            }
          }
          v7 = v33;
        }
      }
      v8 += 16;
    }
    while ( (unsigned __int64)(v8 - 14) < a2 );
    v5 = a1;
    if ( !v6 )
      break;
  }
  while ( v6 < v7 );
}
