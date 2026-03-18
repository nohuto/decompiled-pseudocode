/*
 * XREFs of MiComputeFaultNode @ 0x140059AF0
 * Callers:
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 * Callees:
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 */

__int64 __fastcall MiComputeFaultNode(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v7; // rdi
  __int64 Address; // rax
  unsigned int v10; // edx
  struct _KTHREAD *CurrentThread; // rax

  v5 = 0;
  if ( (a4 & 1) != 0 )
    v7 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  else
    v7 = 0LL;
  *a5 = 0LL;
  if ( *(_QWORD *)(a1 + 184) != 0xFFFFF58010804000uLL )
  {
    if ( (a4 & 1) != 0 && *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      return *(unsigned __int8 *)(v7 + 40);
    return v5;
  }
  if ( (unsigned __int64)(a2 + 0x98000000000LL) <= 0x7FFFFFFFFFLL
    || !v7 && MEMORY[0xFFFFF58010804250] != 1
    || (Address = MiLocateAddress(a2)) == 0
    || (v10 = *(_DWORD *)(Address + 48), *a5 = Address, (v5 = (v10 >> 8) & 0x3F) == 0)
    && ((v10 & 0x8000) != 0 || (v5 = (*(_DWORD *)(**(_QWORD **)(Address + 72) + 56LL) >> 20) & 0x3F) == 0) )
  {
    if ( a3 )
      v5 = (*(_DWORD *)(a3 + 56) >> 20) & 0x3F;
  }
  if ( !v7 || v5 || KeGetCurrentThread()->ApcStateIndex != 1 )
    return v5;
  CurrentThread = KeGetCurrentThread();
  return (unsigned int)CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
}
