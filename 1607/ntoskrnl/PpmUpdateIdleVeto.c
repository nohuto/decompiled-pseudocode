/*
 * XREFs of PpmUpdateIdleVeto @ 0x140201794
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x1402019D4 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140201B30 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400D71A0 (RtlGetInterruptTimePrecise.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140207090 (PopUpdateNonAttributedCpuTimeReference.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmUpdateIdleVeto(char a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  _QWORD **v7; // r14
  _QWORD *i; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 InterruptTimePrecise; // rcx
  __int64 v13; // rax
  _QWORD *j; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  LARGE_INTEGER v22; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a3 + 32);
  v7 = (_QWORD **)(a3 + 8);
  if ( !a1 )
  {
    for ( i = *v7; i != v7; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i + 4) == a2 )
      {
        if ( (*((_DWORD *)i + 5))-- == 1 )
        {
          v10 = (_QWORD *)*i;
          v11 = (_QWORD *)i[1];
          if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v11 != i )
            __fastfail(3u);
          *v11 = v10;
          v10[1] = v11;
          if ( v6 )
          {
            *i = 0LL;
            i[1] = 0LL;
            InterruptTimePrecise = RtlGetInterruptTimePrecise(&v22);
            i[5] += InterruptTimePrecise - i[4];
            v13 = i[6];
            i[4] = 0LL;
            if ( v13 )
            {
              i[6] = 0LL;
              i[7] += InterruptTimePrecise - v13;
            }
            if ( *(_BYTE *)(a3 + 25) )
              PopUpdateNonAttributedCpuTimeReference(0LL);
          }
          else
          {
            ExFreePoolWithTag(i, 0x694D5050u);
          }
          if ( *v7 == v7 )
            _InterlockedExchange((volatile __int32 *)a3, 0);
        }
        return v3;
      }
    }
    return (unsigned int)-1073741811;
  }
  for ( j = *v7; j != v7; j = (_QWORD *)*j )
  {
    if ( *((_DWORD *)j + 4) == a2 )
    {
      v17 = *((_DWORD *)j + 5);
      if ( v17 == -1 )
        return (unsigned int)-1073741675;
      else
        *((_DWORD *)j + 5) = v17 + 1;
      return v3;
    }
  }
  if ( v6 )
  {
    if ( a2 > *(_DWORD *)(a3 + 28) )
      return (unsigned int)-1073741811;
    v16 = (_QWORD *)(v6 + ((unsigned __int64)(a2 - 1) << 6));
    v18 = RtlGetInterruptTimePrecise(&v22);
    v16[4] = v18;
    if ( !*(_BYTE *)(a3 + 24) )
      v16[6] = v18;
    if ( *(_BYTE *)(a3 + 25) )
    {
      LOBYTE(v19) = 1;
      PopUpdateNonAttributedCpuTimeReference(v19);
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x694D5050u);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x40uLL);
  }
  *((_DWORD *)v16 + 4) = a2;
  *((_DWORD *)v16 + 5) = 1;
  v20 = *(_QWORD **)(a3 + 16);
  if ( (_QWORD **)*v20 != v7 )
    __fastfail(3u);
  *v16 = v7;
  v16[1] = v20;
  *v20 = v16;
  *(_QWORD *)(a3 + 16) = v16;
  _InterlockedExchange((volatile __int32 *)a3, 1);
  return v3;
}
