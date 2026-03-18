/*
 * XREFs of KeAllocateCalloutStackEx @ 0x140509188
 * Callers:
 *     KeAllocateCalloutStack @ 0x140509154 (KeAllocateCalloutStack.c)
 * Callees:
 *     MmCreateKernelStack @ 0x14002CB50 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x14002CF40 (MmDeleteKernelStack.c)
 *     KeInitializeMutex @ 0x1400F4838 (KeInitializeMutex.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeAllocateCalloutStackEx(int a1, unsigned __int8 a2, __int64 a3, _QWORD *a4)
{
  char v5; // bp
  char *PoolWithTag; // rax
  _DWORD *v7; // rbx
  unsigned int v8; // r15d
  int v9; // r13d
  unsigned int v10; // edi
  __int64 *v11; // r14
  __int64 KernelStack; // rax

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
      MmDeleteKernelStack(*(_QWORD *)&v7[2 * --v10 + 16], v8);
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
