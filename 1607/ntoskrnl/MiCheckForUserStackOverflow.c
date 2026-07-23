/*
 * XREFs of MiCheckForUserStackOverflow @ 0x1404B0850
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x14015ABF0 (ZwProtectVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCheckForUserStackOverflow(unsigned __int64 a1)
{
  char *v2; // rsi
  struct _KTHREAD *CurrentThread; // r14
  char Queue; // al
  unsigned int *Teb; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  ULONG_PTR v8; // rcx
  unsigned __int64 v9; // rax
  ULONG_PTR v10; // rcx
  _DWORD *v11; // r15
  char *v12; // rbx
  NTSTATUS v13; // eax
  char *v14; // rdx
  __int64 result; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  ULONG OldAccessProtection; // [rsp+88h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (char)CurrentThread[1].Queue;
  if ( Queue < 0 || (Queue & 3) != 0 || KeIsAttachedProcess() )
    return 2147483649LL;
  Teb = (unsigned int *)CurrentThread->Teb;
  v6 = *((_QWORD *)Teb + 1);
  v7 = *((_QWORD *)Teb + 655);
  v8 = Teb[1490];
  RegionSize = v8;
  v9 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v11 = Teb + 4;
  if ( v10 )
    v10 += 4096LL;
  if ( v10 < 0x3000 )
    v10 = 12288LL;
  RegionSize = v10;
  if ( a1 >= v6 || a1 < v9 )
  {
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      v2 = (char *)(Teb + 2048);
      if ( ((unsigned __int8)Teb & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = Teb[2049];
      v17 = Teb[2947];
      v18 = Teb[3038];
      RegionSize = *((unsigned int *)v2 + 990);
      v9 = v17 & 0xFFFFFFFFFFFFF000uLL;
      if ( a1 < v16 && a1 >= v9 )
      {
        v10 = (v18 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( v10 )
          v10 += 4096LL;
        if ( v10 < 0x2000 )
          v10 = 0x2000LL;
        RegionSize = v10;
        v11 = v2 + 8;
        goto LABEL_10;
      }
    }
    return 2147483649LL;
  }
LABEL_10:
  v12 = (char *)((a1 & 0xFFFFFFFFFFFFF000uLL) - v10);
  BaseAddress = v12;
  if ( (unsigned __int64)v12 <= v9 )
  {
    BaseAddress = (PVOID)(v9 + 4096);
  }
  else
  {
    if ( (*(_DWORD *)(CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 188) & 0x10000) != 0 )
    {
      v13 = -1073741523;
    }
    else
    {
      v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x104u);
      v10 = RegionSize;
      v12 = (char *)BaseAddress;
    }
    if ( v13 >= 0 )
    {
      v14 = &v12[v10];
      result = 275LL;
      goto LABEL_15;
    }
    BaseAddress = v12 + 4096;
    RegionSize = v10 - 4096;
  }
  ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldAccessProtection);
  v14 = (char *)BaseAddress;
  result = 3221225725LL;
LABEL_15:
  if ( v2 )
    *v11 = (_DWORD)v14;
  else
    *(_QWORD *)v11 = v14;
  return result;
}
