/*
 * XREFs of MiComputeFaultNode @ 0x1400707F0
 * Callers:
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 */

__int64 __fastcall MiComputeFaultNode(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int64 Address; // rax
  unsigned int v10; // edx
  struct _KTHREAD *CurrentThread; // rax

  v5 = 0;
  v6 = a3;
  *a5 = 0LL;
  if ( (a4 & 1) != 0 )
  {
    v7 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      v5 = *(unsigned __int8 *)(v7 + 40);
  }
  else
  {
    v7 = 0LL;
  }
  if ( *(_QWORD *)(a1 + 184) != 0xFFFFF58010804000uLL )
    return v5;
  if ( a2 + 0x98000000000LL <= 0x7FFFFFFFFFLL
    || !v7 && MEMORY[0xFFFFF580108042A8] != 1
    || (Address = MiLocateAddress(a2)) == 0 )
  {
LABEL_7:
    if ( v5 )
      goto LABEL_10;
    goto LABEL_8;
  }
  v10 = *(_DWORD *)(Address + 48);
  *a5 = Address;
  v5 = (v10 >> 8) & 0x3F;
  if ( v5 )
    goto LABEL_10;
  if ( (v10 & 0x8000) == 0 )
  {
    v5 = (*(_DWORD *)(**(_QWORD **)(Address + 72) + 56LL) >> 20) & 0x3F;
    goto LABEL_7;
  }
LABEL_8:
  if ( v6 )
    v5 = (*(_DWORD *)(v6 + 56) >> 20) & 0x3F;
LABEL_10:
  if ( !v7 || v5 || !KeIsAttachedProcess() )
    return v5;
  CurrentThread = KeGetCurrentThread();
  return (unsigned int)CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
}
