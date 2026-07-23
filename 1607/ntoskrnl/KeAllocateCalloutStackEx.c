/*
 * XREFs of KeAllocateCalloutStackEx @ 0x140541C24
 * Callers:
 *     KeAllocateCalloutStack @ 0x140541BF0 (KeAllocateCalloutStack.c)
 * Callees:
 *     KeInitializeMutex @ 0x140087460 (KeInitializeMutex.c)
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400EF9D0 (MmDeleteKernelStack.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KeAllocateCalloutStackEx(int a1, unsigned __int8 a2, __int64 a3, _QWORD *a4)
{
  char v5; // bp
  char *PoolWithTag; // rax
  _DWORD *v7; // rbx
  unsigned int v8; // r15d
  char v9; // r13
  unsigned int v10; // edi
  __int64 *v11; // r14
  __int64 KernelStack; // rax
  __int64 v13; // r8
  __int64 v14; // r9

  if ( a1 )
  {
    if ( a1 != 1 )
      return 3221225711LL;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( !a2 )
    return 3221225712LL;
  if ( a3 )
    return 3221225713LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * a2 + 64, 0x6353654Bu);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v8 = 0;
  v9 = 0;
  if ( v5 )
  {
    v8 = 1;
    v9 = 5;
  }
  v10 = 0;
  if ( a2 )
  {
    v11 = (__int64 *)(PoolWithTag + 64);
    while ( 1 )
    {
      KernelStack = MmCreateKernelStack(v9, 0, 0LL);
      if ( !KernelStack )
        break;
      *v11 = KernelStack;
      ++v10;
      ++v11;
      if ( v10 >= a2 )
        goto LABEL_12;
    }
    while ( v10 )
      MmDeleteKernelStack(*(_QWORD *)&v7[2 * --v10 + 16], v8, v13, v14);
    ExFreePoolWithTag(v7, 0);
    return 3221225626LL;
  }
  else
  {
LABEL_12:
    *v7 = 1801548883;
    *((_BYTE *)v7 + 5) = a2;
    *((_BYTE *)v7 + 6) = 0;
    *((_BYTE *)v7 + 4) = v5 != 0;
    KeInitializeMutex((PRKMUTEX)(v7 + 2), 0);
    *a4 = v7;
    return 0LL;
  }
}
